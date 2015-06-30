==============================
This repository is designed for those who want a base of code to support OS X and iOS, as well as using the project in Swift. We are tracking the Evernote branch as well as we can. 

Goals
1. Support OS X and iOS
2. Support easier development in Swift 2

Requirements
Xcode 7 and above. We are using ObjC generics and other features of Xcode 7

Caveats
1. We are using this code directly within our project, not as a separate project. This means that we don't care if the code compiles on its own. In fact, it probably will not as it relies on conventions in our project. For example we use "PIColor" as a type alias for NSColor or UIColor depending on the platform. 
2. We don't care about UI elements very much so anything we don't need - we just didn't include in our project. Simple as that. For example the Notebook picker is iOS only. We just don't use it at all. 

==============================
Evernote Cloud SDK 2.0 for iOS
==============================

What Is This?
-------------

A newly-redesigned, simple, workflow-oriented library built on the Evernote Cloud API. It's designed to drop into your app easily and make most common Evernote integrations very simple to accomplish. (And even the more complex integrations easier than they used to be.)

How Do I Get Started?
---------------------

Setup instructions and sample snippets are all in the [Getting Started](Getting_Started.md) guide. [Have a look there next](Getting_Started.md) and you'll be working with Evernote in just a few minutes.

Note for users of the 1.x SDK for iOS
-------------------------------------

This library is the spiritual, although not syntactic, successor to to the [Evernote SDK for iOS 1.x](https://github.com/evernote/evernote-sdk-ios). Currently, both libraries are available and supported. This one is not a "drop-in" update-- it omits the "app bridge" functionality, and the objects that you use for authentication and to get to the traditional (EDAM) API are a little different. [We have provided a migration guide for users of the 1.x SDK](Migration_from_SDK_1_x.md).

FAQ
---

### What iOS versions are supported?

This version of the SDK is designed for iOS 7 and above.

### Does the Evernote SDK support ARC?

Yes. (To use the SDK in a non-ARC project, please use the -fobjc-arc compiler flag on all the files in the Evernote SDK.)

### Can I use this library with CocoaPods?

Yes! Just add
```
pod 'evernote-cloud-sdk-ios'
```
to your Podfile

### Where can I find out more about the Evernote for Developers?

Please check out the [Evernote Developers portal page](http://dev.evernote.com).

### Can I show the registration page instead of the login page when authorizing?

Yes. Please specify preferRegistration parameter as YES when calling
```objective-c
- (void)authenticateWithViewController:(UIViewController *)viewController
                    preferRegistration:(BOOL)preferRegistration
                            completion:(ENSessionAuthenticateCompletionHandler)completion;
```
on [ENSession sharedSession]

### Where can I find the release notes?

 You can find it [here](CHANGES.md).
 
