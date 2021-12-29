//
//  ViewController.swift
//  SpeechRecognitionIOS
//
//  Created by Josh Uvi on 29/12/2021.
//

import UIKit

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
    }
    @IBAction func onDeviceButton(_ sender: UIButton) {
        self.performSegue(withIdentifier: "goToOnDeviceView", sender: self)
    }
    
    @IBAction func GoogleButton(_ sender: UIButton) {
        self.performSegue(withIdentifier: "goToGoogleView", sender: self)
    }
    
}

