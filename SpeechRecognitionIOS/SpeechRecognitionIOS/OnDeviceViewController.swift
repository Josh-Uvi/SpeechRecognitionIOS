//
//  OnDeviceViewController.swift
//  SpeechRecognitionIOS
//
//  Created by Josh Uvi on 29/12/2021.
//

import UIKit
import Speech

class OnDeviceViewController: UIViewController, UITextViewDelegate {

    // UI properties
    @IBOutlet weak var viewLabel: UILabel!
    @IBOutlet weak var resultBox: UITextView!
    @IBOutlet weak var recordBtn: UIButton!
    
    // Audio session setup
    var speechRecognizer = SFSpeechRecognizer(locale: Locale(identifier: "en_GB"))
    var recognitionRequest: SFSpeechAudioBufferRecognitionRequest?
    var recognitionTask: SFSpeechRecognitionTask?
    let audioEngine = AVAudioEngine()
    var isRecording: Bool = false

    
    override func viewDidLoad() {
        super.viewDidLoad()
        getPermission()
        
        //Setting the delegate to be able to track UITextView events
        resultBox.delegate = self
        self.resultBox.text = ""
        //  self.viewLabel.text = "Transcribe with onDevice system"
    }
    
    @IBAction func toggleButton(_ sender: UIButton) {
        isRecording = !isRecording
        do{
            if isRecording {
                try startRecording()
                self.viewLabel.text = "Transcribing..."
                self.recordBtn.setTitle("Stop", for: .normal)
            }else {
                stopRecording()
                self.viewLabel.text = "Start recording.."
                self.recordBtn.setTitle("Start", for: .normal)
            }
        }catch {
            print("Failed to start audio engine!")
        }
        
    }
    
    
    @IBAction func closeModelButton(_ sender: UIButton) {
        self.dismiss(animated: true, completion: nil)
    }
    
    // Business logic start from here!
    
    func getPermission(){
    // Make the authorization request
       SFSpeechRecognizer.requestAuthorization { authStatus in

       // check authorization status
          OperationQueue.main.addOperation {
             switch authStatus {
                case .authorized:
                 self.recordBtn.isEnabled = true
                 print("Access granted!")
                    break
                case .denied:
                 self.recordBtn.isEnabled = false
                 print("User denied access to speech recognition")
                    break
                case .restricted:
                 self.recordBtn.isEnabled = false
                 print("Speech recognition restricted on this device")
                    break
                case .notDetermined:
                 self.recordBtn.isEnabled = false
                 print("Speech recognition not yet authorized")
                
                @unknown default:
                    break
             }
          }
       }
    }
    
    func stopRecording() {
        
        recognitionTask?.finish()
        recognitionTask?.cancel()
        recognitionRequest?.endAudio()
        audioEngine.stop()
        recognitionRequest = nil
        recognitionTask = nil
        
        
        if audioEngine.inputNode.numberOfInputs > 0 {
            audioEngine.inputNode.removeTap(onBus: 0)
            print("stopped listening!")
        }
    }
    
    func stringTokenizer(text: String){

        let tagger = NSLinguisticTagger(tagSchemes: [.tokenType], options: 0)
        tagger.string = text

        let range = NSRange(location: 0, length: text.utf16.count)
        let options: NSLinguisticTagger.Options = [.omitPunctuation, .omitWhitespace]
        tagger.enumerateTags(in: range, unit: .word, scheme: .tokenType, options: options) { _, tokenRange, _ in
            let word = (text as NSString).substring(with: tokenRange)
            // print each word in newline
            print(word)
        }
    }
    
    func startRecording() throws {
        
        // Configure the audio session for the app.
        let audioSession = AVAudioSession.sharedInstance()
        try audioSession.setCategory(.record, mode: .measurement, options: .duckOthers)
        try audioSession.setActive(true, options: .notifyOthersOnDeactivation)
        let inputNode = audioEngine.inputNode
        inputNode.removeTap(onBus: 0)
        
        // Configure the microphone input.
        let recordingFormat = inputNode.outputFormat(forBus: 0)
        // The buffer size tells us how much data should the microphone record
        // before dumping it into the recognition request.
        inputNode.installTap(onBus: 0, bufferSize: 1024, format: recordingFormat) { (buffer: AVAudioPCMBuffer, when: AVAudioTime) in
            self.recognitionRequest?.append(buffer)
        }
        
        // start audio session
        audioEngine.prepare()
        try audioEngine.start()
        
        // Create and configure the speech recognition request.
        recognitionRequest = SFSpeechAudioBufferRecognitionRequest()
        guard let recognitionRequest = recognitionRequest else { fatalError("Unable to create a SFSpeechAudioBufferRecognitionRequest object") }
        recognitionRequest.shouldReportPartialResults = true
        
        // Force speech recognition to be on-device
        if #available(iOS 13, *) {
           if speechRecognizer?.supportsOnDeviceRecognition ?? false{
               recognitionRequest.requiresOnDeviceRecognition = true
           }
        }
        
        
        // Create a recognition task for the speech recognition session.
        recognitionTask = speechRecognizer?.recognitionTask(with: recognitionRequest) { [self] result, error in
            // make reference to the task so that it can be canceled.
            var isFinal = false
            
            // Update the text view with the results.
            if let result = result {
                DispatchQueue.main.async {
                    let transcribedWord = result.bestTranscription.formattedString
                    self.resultBox.text = transcribedWord
                    // reference to running task
                    isFinal = result.isFinal
                    
                     print(transcribedWord)
                    
                    // Word wrapping/ string tokenizer
                    stringTokenizer(text: transcribedWord)
                }
                
            }
           
            // Stop recognizing speech if there is a problem.
            if error != nil || isFinal{
                self.audioEngine.stop()
                inputNode.removeTap(onBus: 0)
                self.recognitionRequest = nil
                recognitionTask = nil
            }
            
        }
    }

}
