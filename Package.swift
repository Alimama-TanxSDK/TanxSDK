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
            url: "https://github.com/Alimama-TanxSDK/TanxSDK/releases/download/3.7.26/TanxSDK.xcframework.zip",
            checksum: "0f18002f09c409a5d977cae8e40298374be6ea41fff4044f17bc73f81fc06df4"
        ),
        .binaryTarget(
            name: "TNXASDK",
            url: "https://github.com/Alimama-TanxSDK/releases/download/3.7.26/TNXASDK.xcframework.zip",
            checksum: "0bfe2bb2a8843394c0a3eca7652fe580e0c404a07f2b18f4d71e9b0999d04938"
        ),
        .binaryTarget(
            name: "TanxMonitor",
            url: "https://github.com/Alimama-TanxSDK/releases/download/3.7.26/TanxMonitor.xcframework.zip",
            checksum: "4ef853880d6db57fa6f44d218b7e2a35b3ca89002b6eecc805e406ae166bb6fd"
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
