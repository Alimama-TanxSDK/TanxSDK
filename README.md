TanxSDK是阿里妈妈为外部媒体提供广告变现的产品；   
预算方主要覆盖：淘宝商家所有的站外引流预算、淘天集团电商APP投放预算（淘宝、1688、一淘）、外部行业预算（游戏类、小说类、教育类、汽车类等），为媒体伙伴提供丰富的预算收益来源。
## 支持样式  
TanxSDK支持主流样式覆盖和电商预算适配互动样式能力

1. 开屏  
<img src="https://github.com/user-attachments/assets/387752b4-fc6e-45f3-813f-b1595b6c06ff" width="40%"/>

2. 信息流   
【支持点击、滑动互动样式】：  
<img src="https://github.com/user-attachments/assets/ecc4edd8-7132-4cde-bfcc-f347f6383d4a" width="40%"/>

3. 激励广告  
<img src="https://github.com/user-attachments/assets/f709dd9f-458b-4d0d-93f4-6cb7a551e04b" width="80%"/>

支持激励广告类型：  
- 媒体端内激励视频  
- 媒体端内激励浏览（适配商家电商预算）：点击行动点后在媒体端内完成浏览任务  
- 手淘端激励浏览（适配商家电商预算、出价更高），当前仅支持服务端奖励回调：点击行动点后唤端到手淘，完成浏览任务  
- 手淘端激励下单（适配商家电商预算、出价最高），当前仅支持服务端奖励回调：点击行动点后唤端到手淘，完成下单任务。希望媒体端能支持延迟发奖（由服务端延迟通知）或奖励退回（由媒体做相应扣回操作）。

4. 插屏  
仅支持模板渲染接入，有图文样式  
<img src="https://github.com/user-attachments/assets/131a9518-8d92-4aba-8742-530619cbaf58" width="40%"/>

## 接入优势  
1. 接入开发高效  
- 通过SDK包方式集成，开发者开发成本小，平均1~5天即可完成接入
- 轻量级包体，安卓包体0.5M、iOS包体2.1M，减少应用负担
- 接入过程中，技术团队钉钉在线答疑解决，响应速度快

2. 算法优化收益
- 强算法：策略团队针对媒体特性进行变现效率优化
- 高填充：预算倾斜，保障较高填充率
- 提收益：SDK接入方式相比于API，收益提升2倍以上
- 深共建：媒体深度共建，加深合作场景

3. 广告样式创新
- 提供丰富的电商组件、权益等产品能力，提升变现效率。开发者适配成本低，可无感接入。

## 接入方式  
1. 使用CocoaPods依赖  

- 添加依赖：

  ```ruby
  pod 'TanxSDK'
  ```

- 安装依赖：

  ```bash
  pod install
  ```

2. 使用Swift包管理器  
- [Swift Package Manager](https://swift.org/package-manager/) (SwiftPM) 是一款用于管理 Swift 代码及 C 语言系列依赖项分发的工具。从 Xcode 11 开始，SwiftPM 已原生集成到 Xcode 中。  
- TanxSDK 从 3.7.26 版本开始支持 SwiftPM。要使用 SwiftPM，请使用 Xcode 11 以上版本打开项目。点击 `File` -> `Swift Packages` -> `Add Package Dependency`，输入[TanxSDK 仓库的 URL](https://github.com/Alimama-TanxSDK/TanxSDK.git)。或登录 Xcode 的 GitHub 帐户后直接输入TanxSDK进行搜索。  
- 选择包后，您可以配置依赖版本。然后 Xcode 会自动为您完成所有设置。

3. 注意事项  
- **支持的平台**：SDK支持iOS 12.0及以上版本。
- **架构支持**：
   - 真机: arm64
   - 模拟器: x86_64、 arm64
- **加速器（摇一摇）默认关闭**：SDK 默认不启用加速度传感器能力，无法通过“摇一摇”触发广告。如需使用“摇一摇”互动能力，请在集成后手动开启加速度传感器开关。

## 常见问题

1. **编译报错 `Undefined symbol: std::get_terminate() / std::set_terminate(...)`**  
确认已链接 C++ 标准库，否则会出现上述 undefined symbol。需要在 Xcode -> Target -> Build Settings -> Other Linker Flags 添加 -lc++。

2. **运行错误 `-[TXAdSDKConfiguration markSDKInitialized]: unrecognized selector sent to instance 0X0000000"`**  
确认添加 -ObjC，否则会导致 ObjC category 没被链接进来，从而出现unrecognized selector。需要在Xcode -> Target -> Build Settings -> Other Linker Flags 添加-ObjC。

## 详细文档 
https://alidocs.dingtalk.com/i/nodes/MNDoBb60VLYDGNPytwYZm271JlemrZQ3

## 联系支持  

如有任何问题，请联系：xuanjing.wjt@taobao.com
