# SpeechRecognitionIOS

This app demonstrates how to use [Google Cloud Speech API](https://cloud.google.com/speech-to-text) and [Apple on-device Speech library](https://developer.apple.com/documentation/speech) to recognize speech in live audio recording.

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
 - clone this repo
```git clone https://github.com/Josh-Uvi/SpeechRecognitionIOS.git ```
 -  cd into this directory `SpeechRecognitionIOS`
 - Open [SpeechRecognitionIOS.xcworkspace](https://github.com/Josh-Uvi/SpeechRecognitionIOS/tree/main/SpeechRecognitionIOS/SpeechRecognitionIOS.xcworkspace) with Xcode
 - In [SpeechRecognitionService.swift](https://github.com/JoshUvi/SpeechRecognitionIOS/blob/main/SpeechRecognitionIOS/SpeechRecognitionIOS/SpeechRecognitionService.swift), replace `YOUR_API_KEY` with the API key obtained above.
 - Build and run the app.
    - Use command `cmd + R ` to build and run on iOS simulator/device 
    - Alternatively, press the play button from xcode to start the build process
    - The build process will start up and run on Xcode simulator if you have one configured or on a device if connected
    - Say a few words and wait for the display to update when your speech is recognized.

> DONE
  - [x] Apple Speech on-device library
  - [x] Google Speech-to-text API
  - [x] Live audio recording
  - [x] Offline live audio recording

> TODO
  - [ ] Transcribe pre-recorded audio file
  - [ ] Display transcribed text on an OLED device
  - [ ] Do performance and load stress test if possible
  - [ ] Add CI/CD pipelines
  - [ ] Embed python script/program in the app, visit [Python-Apple-support](https://github.com/beeware/Python-Apple-support) docs for more info
  - [ ] Add self-hosted Speech Recognition server/engine, visit [Kaldi Speech Recognition Server](https://github.com/alumae/kaldi-gstreamer-server) docs for more info
 
