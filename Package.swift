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
            url: "https://github.com/Alimama-TanxSDK/TanxSDK/releases/download/3.7.27/TanxSDK.xcframework.zip",
            checksum: "c971e32482acff3920065ac64a641d06632cb229114b63dadf048bc9ca1e2724"
        ),
        .binaryTarget(
            name: "TNXASDK",
            url: "https://github.com/Alimama-TanxSDK/TanxSDK/releases/download/3.7.27/TNXASDK.xcframework.zip",
            checksum: "57acc1e8eb6262220f3bca0d3c87abafef8489d4d2e01d85d8efd290f06453b5"
        ),
        .binaryTarget(
            name: "TanxMonitor",
            url: "https://github.com/Alimama-TanxSDK/TanxSDK/releases/download/3.7.27/TanxMonitor.xcframework.zip",
            checksum: "ae943dd34b6a37beb66c47cefe6b68f2be1b817e5f69e1648837e6b3054cb06f"
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
