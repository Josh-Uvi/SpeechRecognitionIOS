//
//  GoogleViewController.swift
//  SpeechRecognitionIOS
//
//  Created by Josh Uvi on 29/12/2021.
//
import UIKit
import Foundation

import googleapis
let SAMPLE_RATE = 16000

class GoogleSpeechManager: NSObject{
    class func startRecording(){
        _ = AudioController.sharedInstance.prepare(specifiedSampleRate: 16000)
        SpeechRecognitionService.sharedInstance.sampleRate = 16000
        _ = AudioController.sharedInstance.start()
    }
    
    class func stopRecording(){
        _ = AudioController.sharedInstance.stop()
        SpeechRecognitionService.sharedInstance.stopStreaming()
    }
}

class GoogleViewController: UIViewController,  UITextViewDelegate, AudioControllerDelegate {
    
    @IBOutlet weak var viewLabel: UILabel!
    @IBOutlet weak var resultBox: UITextView!
    @IBOutlet weak var recordBtn: UIButton!
    
    var isRecording: Bool = false
    var audioData = NSMutableData()

    
    override func viewDidLoad() {
        super.viewDidLoad()
        resultBox.delegate = self
        self.resultBox.text = "Say something nice..."
        AudioController.sharedInstance.delegate = self
    }
    
    @IBAction func closeModelButton(_ sender: UIButton) {
        self.dismiss(animated: true, completion: nil)
    }
    
    @IBAction func startRecordBtn(_ sender: UIButton) {
        isRecording = !isRecording
        if isRecording {
            print("start recording")
            GoogleSpeechManager.startRecording()
            self.viewLabel.text = "Transcribing..."
            self.recordBtn.setTitle("Stop", for: .normal)
        } else {
            print("Stop recording")
            GoogleSpeechManager.stopRecording()
            self.viewLabel.text = "Start recording.."
            self.recordBtn.setTitle("Start", for: .normal)
        }
    }

func processSampleData(_ data: Data) {
    audioData.append(data)

    // We recommend sending samples in 100ms chunks
    let chunkSize : Int /* bytes/chunk */ = Int(0.1 /* seconds/chunk */
      * Double(SAMPLE_RATE) /* samples/second */
      * 2 /* bytes/sample */);

    if (audioData.length > chunkSize) {
      SpeechRecognitionService.sharedInstance.streamAudioData(audioData,
                                                              completion:
        { [weak self] (response, error) in
            guard let strongSelf = self else {
                return
            }
            
            if let error = error {
                strongSelf.resultBox.text = error.localizedDescription
            } else if let response = response {
                for result in response.resultsArray! {
                    if let alternative = result as? StreamingRecognitionResult{
                        for alternativeResult in alternative.alternativesArray{
                            if let liveResult = alternativeResult as? SpeechRecognitionAlternative{
                                print("live transcript: ", liveResult)
                                strongSelf.resultBox.text = liveResult.transcript!
                                if(alternative.isFinal){
                                    GoogleSpeechManager.stopRecording()
                                    // print("final result: ", liveResult.transcript!)
                                    strongSelf.resultBox.text = liveResult.transcript!
                                }
                            }
                        }
                    }
                }
            }
      })
      self.audioData = NSMutableData()
    }

}
    
}
