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

    #if os(macOS)

    @objc
    static var keychain: ENKeychain?

    @objc
    static var pathnameForStoreFilename: (String) -> String = { $0 }

    #endif
}

@objc
protocol ENKeychain {
    @objc(setSharedStringService:description:synchronizable:)
    func set(sharedStringService: String, description: String?, synchronizable: Bool)

    @objc(setData:forKey:error:)
    func set(data: Data, for key: String) throws
}
