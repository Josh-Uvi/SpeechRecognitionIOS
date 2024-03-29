# SpeechRecognitionIOS

This project demonstrates the recording and transcribing of speech from one language to another (e.g. English to Yoruba) using the [Google Cloud Speech API](https://cloud.google.com/speech-to-text) and [Apple on-device Speech library](https://developer.apple.com/documentation/speech).

### Prerequisites
  - An API key for the Cloud Speech API (See the [docs](https://cloud.google.com/vision/docs/quickstart) to learn more)
    - Create a project (or use an existing one) in the [Cloud Console](https://console.cloud.google.com/getting-started)
    - Enable billing and the Speech API
    - Add your iOS bundle identifier to project (e.g com.SpeechRecognition.joshuvi.SpeechRecognitionIOS in my case)
    - Create an API key, and save this for later
  - An OSX machine or emulator
  - Xcode 13 or later - tested with Xcode 13.2
  - Cocoapods version 1.0 or later

## QuickStart
> Ensure you have pods installed on your machine, to check use ` pod --version `

> :exclamation: Do not run this command ` pod install` because pods already exist, see [Podfile & Podfile.lock](https://github.com/Josh-Uvi/SpeechRecognitionIOS/blob/main/SpeechRecognitionIOS/Podfile.lock)
 - Clone this repo
```git clone https://github.com/Josh-Uvi/SpeechRecognitionIOS.git ```
 -  CD into this directory `SpeechRecognitionIOS`
 - Open [SpeechRecognitionIOS.xcworkspace](https://github.com/Josh-Uvi/SpeechRecognitionIOS/tree/main/SpeechRecognitionIOS/SpeechRecognitionIOS.xcworkspace) with Xcode
 - In [SpeechRecognitionService.swift](https://github.com/JoshUvi/SpeechRecognitionIOS/blob/main/SpeechRecognitionIOS/SpeechRecognitionIOS/SpeechRecognitionService.swift), replace `YOUR_API_KEY` with the API key obtained above.
 - Build and run the app.
    - Use command `cmd + R ` to build and run on iOS simulator/device 
    - Alternatively, press the play button from xcode to start the build process
    - The build process will start up and run on Xcode simulator if you have one configured or on a device if connected
    - Say a few words and your speech will be recognized.

> DONE
  - [x] Apple Speech on-device library
  - [x] Google Speech-to-text API
  - [x] Transcribe live audio recording 
  - [x] Offline capability available for iOS 13.0 or later

> TODO
  - [ ] Transcribe pre-recorded audio file
  - [ ] Display transcribed text on an OLED device
  - [ ] Do performance and load stress test if possible
  
  > NICE TO HAVE
   - [ ] CI/CD pipelines
   - [ ] Self-hosted Speech Recognition server/engine, using docker technology and [Kaldi Speech Recognition Server](https://github.com/alumae/kaldi-gstreamer-server).
   - [ ] Run Python program in the app, using [Python-Apple-support](https://github.com/beeware/Python-Apple-support)

 
