// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TanxSDK",
    platforms: [
        .iOS(.v12)
    ],
    products: [
        // 对外只暴露 Wrapper（它依赖二进制 TanxSDK + 携带资源）
        .library(name: "TanxSDK", targets: ["TanxSDKWrapper"]),
        .library(name: "TNXASDK", targets: ["TNXASDK"]),
        .library(name: "TanxMonitor", targets: ["TanxMonitor"])
    ],
    targets: [
        .binaryTarget(
            name: "TanxSDKBinary",
            url: "https://github.com/Alimama-TanxSDK/TanxSDK/releases/download/3.7.25/TanxSDK.xcframework.zip",
            checksum: "a5ee0944f84a282f89baefe3e0c00abaddfe5c20c6e09302174ecbb02551aece"
        ),
        .binaryTarget(
            name: "TNXASDK",
            url: "https://github.com/Alimama-TanxSDK/releases/download/3.7.25/TNXASDK.xcframework.zip",
            checksum: "e1818c0f67addaac55968fda5c4de5d99f539d4fcc2dd439e958337848bdeba6"
        ),
        .binaryTarget(
            name: "TanxMonitor",
            url: "https://github.com/Alimama-TanxSDK/releases/download/3.7.25/TanxMonitor.xcframework.zip",
            checksum: "b33b6314576870d1ef138d2bd07448a2fc092d703124a8d74670701e35dafa03"
        ),

        // Wrapper：用于携带资源（TanxID.bundle）并依赖二进制 TanxSDK
        .target(
            name: "TanxSDKWrapper",
            dependencies: [
                "TanxSDKBinary",
                "TNXASDK",
                "TanxMonitor"
            ],
            path: "Sources/TanxSDKWrapper",
            resources: [
                .process("TanxID.bundle")
            ]
        )
    ]
)
