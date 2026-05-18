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
            url: "https://github.com/Alimama-TanxSDK/TanxSDK/releases/download/3.7.29/TanxSDK.xcframework.zip",
            checksum: "58224809a7c8e3db7fd9f3c36e69551f565d9c902f2613ebcc7a2d3a3c3888a4"
        ),
        .binaryTarget(
            name: "TNXASDK",
            url: "https://github.com/Alimama-TanxSDK/TanxSDK/releases/download/3.7.29/TNXASDK.xcframework.zip",
            checksum: "72cce056c5b68d86f48600989466eb471ed4d0143f70f4788625e471e4b84bbb"
        ),
        .binaryTarget(
            name: "TanxMonitor",
            url: "https://github.com/Alimama-TanxSDK/TanxSDK/releases/download/3.7.29/TanxMonitor.xcframework.zip",
            checksum: "b303e1b49d2c4df1a6c8c9ae79d5236e9e1e7ceb1fbd09b4c47578e41b79e322"
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
