# MRZScanner_iOS

# Requirements
- Objective-C, Swift 4.0 or higher
- iOS 12 or higher


# Installation

## CocoaPods
To install MRZScanner_iOS using CocoaPods, integrate it in your existing Podfile, or create a new Podfile:

```ruby
pod 'SDCAlertView'
```

# Usage

## Import library
```swift
import MRZScanner_iOS
```

## Initialize
```swift
override func viewDidLoad() {
    super.viewDidLoad()

    // Do any additional setup after loading the view.

    MRZScanner.initializeScanner()
}
```

## Detect MRZ
```swift
let result = MRZScanner.scanMRZ(image, mode: scanMode)
```

***scanMode***
* **0** - Detect only MRZ code
* **1** - Detect MRZ code and details
