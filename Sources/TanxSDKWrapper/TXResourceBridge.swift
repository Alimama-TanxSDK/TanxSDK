//
//  File.swift
//  TanxSDK
//
//  Created by revin-sun on 2026/3/5.
//

import Foundation

@objcMembers
public final class TXResourceBridge: NSObject {

    /// 返回 TanxID.bundle（从 TanxSDKWrapper 的 Bundle.module 中取）
    public static func tanxIDBundle() -> Bundle? {
        guard let url = Bundle.module.url(forResource: "TanxID", withExtension: "bundle") else {
            return nil
        }
        return Bundle(url: url)
    }
}

