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
            url: "https://github.com/Alimama-TanxSDK/TanxSDK/releases/download/3.7.30/TanxSDK.xcframework.zip",
            checksum: "329f4f71cf462b58c69db0e25f32e5ec46ec0a452928119716ae64b3d2fec6a5"
        ),
        .binaryTarget(
            name: "TNXASDK",
            url: "https://github.com/Alimama-TanxSDK/TanxSDK/releases/download/3.7.30/TNXASDK.xcframework.zip",
            checksum: "5d6d7b1c0eb8da19adfe3f9dc0008f5de3a1dd7f1d3a629e30dd34436e387dd5"
        ),
        .binaryTarget(
            name: "TanxMonitor",
            url: "https://github.com/Alimama-TanxSDK/TanxSDK/releases/download/3.7.30/TanxMonitor.xcframework.zip",
            checksum: "a065b425d945970ff8f72d47fc59bcfec91178b693c679a56f507f2da93d0d81"
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
