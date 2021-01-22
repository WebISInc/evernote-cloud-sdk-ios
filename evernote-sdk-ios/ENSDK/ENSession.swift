//
//  ENSession+logger.swift
//  evernote-sdk-ios
//
//  Created by Stephen Kac on 1/21/21.
//  Copyright © 2021 Evernote Corporation. All rights reserved.
//

import Foundation

@objc
extension ENSession {

    /// A non Session specific logger used before a sessions initialization
    @objc
    static var globalLogger: ENSDKLogging = ENSessionDefaultLogger()

    @objc
    static var userDefaults: UserDefaults = UserDefaults.standard
}
