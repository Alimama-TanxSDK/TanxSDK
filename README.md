TanxSDK是阿里妈妈为外部媒体提供广告变现的产品； 
预算方主要覆盖：淘宝商家所有的站外引流预算、淘天集团电商APP投放预算（淘宝、1688、一淘）、外部行业预算（游戏类、小说类、教育类、汽车类等），为媒体伙伴提供丰富的预算收益来源。
1.支持样式
TanxSDK支持主流样式覆盖和电商预算适配互动样式能力
（1）开屏
![image](https://github.com/user-attachments/assets/387752b4-fc6e-45f3-813f-b1595b6c06ff)


（2）信息流 
【支持点击、滑动互动样式】：

  ![image](https://github.com/user-attachments/assets/ecc4edd8-7132-4cde-bfcc-f347f6383d4a)


（3）激励广告

![image](https://github.com/user-attachments/assets/f709dd9f-458b-4d0d-93f4-6cb7a551e04b)

支持激励广告类型：
● 媒体端内激励视频
● 媒体端内激励浏览（适配商家电商预算）：点击行动点后在媒体端内完成浏览任务
● 手淘端激励浏览（适配商家电商预算、出价更高），当前仅支持服务端奖励回调：点击行动点后唤端到手淘，完成浏览任务
● 手淘端激励下单（适配商家电商预算、出价最高），当前仅支持服务端奖励回调：点击行动点后唤端到手淘，完成下单任务。希望媒体端能支持延迟发奖（由服务端延迟通知）或奖励退回（由媒体做相应扣回操作）。

（4）插屏
仅支持模板渲染接入，有图文样式
![image](https://github.com/user-attachments/assets/131a9518-8d92-4aba-8742-530619cbaf58)


2.接入优势
（1）接入开发高效
● 通过SDK包方式集成，开发者开发成本小，平均1~5天即可完成接入
● 轻量级包体，安卓包体0.5M、iOS包体2.1M，减少应用负担
● 接入过程中，技术团队钉钉在线答疑解决，响应速度快

（2）算法优化收益
● 强算法：策略团队针对媒体特性进行变现效率优化
● 高填充：预算倾斜，保障较高填充率
● 提收益：SDK接入方式相比于API，收益提升2倍以上
● 深共建：媒体深度共建，加深合作场景

（3）广告样式创新
● 提供丰富的电商组件、权益等产品能力，提升变现效率。开发者适配成本低，可无感接入。

3.详细文档链接
https://alidocs.dingtalk.com/i/nodes/MNDoBb60VLYDGNPytwYZm271JlemrZQ3

4.接入方式

(1) 使用CocoaPods依赖

1. 添加依赖：

```ruby
pod 'TanxSDK'版本
```

2. 添加必要的post_install钩子（**重要**）：

```ruby
post_install do |installer|
  installer.pods_project.targets.each do |target|
    target.build_configurations.each do |config|
      # 确保SDK特定的搜索路径包含所有需要的框架路径
      if config.build_settings['FRAMEWORK_SEARCH_PATHS[sdk=iphoneos*]'] 
        config.build_settings['FRAMEWORK_SEARCH_PATHS[sdk=iphoneos*]'] = config.build_settings['FRAMEWORK_SEARCH_PATHS']
      end
      if config.build_settings['FRAMEWORK_SEARCH_PATHS[sdk=iphonesimulator*]']
        config.build_settings['FRAMEWORK_SEARCH_PATHS[sdk=iphonesimulator*]'] = config.build_settings['FRAMEWORK_SEARCH_PATHS']
      end
      
      # 修复模拟器架构问题 - 确保模拟器只使用x86_64架构
      if config.name == 'Debug' || config.name == 'Release'
        config.build_settings['VALID_ARCHS[sdk=iphonesimulator*]'] = 'x86_64'
        config.build_settings['EXCLUDED_ARCHS[sdk=iphonesimulator*]'] = 'arm64 armv7 armv7s'
      end
    end
  end
  
  # 自动修复TanxMonitor.xcframework引用问题
  system <<-SHELL
    # 修复xcconfig文件
    echo "修复xcconfig文件..."
    sed -i '' 's/-framework "TanxMonitor\\.xcframework"//' ./Pods/Target\\ Support\\ Files/Pods-*/Pods-*.debug.xcconfig
    sed -i '' 's/-framework "TanxMonitor\\.xcframework"//' ./Pods/Target\\ Support\\ Files/Pods-*/Pods-*.release.xcconfig
    
    # 修复模拟器架构设置
    echo "修复模拟器架构设置..."
    sed -i '' 's/EXCLUDED_ARCHS\\[sdk=iphonesimulator\\*\\] = armv7 armv7s/EXCLUDED_ARCHS\\[sdk=iphonesimulator\\*\\] = armv7 armv7s arm64/' ./Pods/Target\\ Support\\ Files/Pods-*/Pods-*.debug.xcconfig
    sed -i '' 's/EXCLUDED_ARCHS\\[sdk=iphonesimulator\\*\\] = armv7 armv7s/EXCLUDED_ARCHS\\[sdk=iphonesimulator\\*\\] = armv7 armv7s arm64/' ./Pods/Target\\ Support\\ Files/Pods-*/Pods-*.release.xcconfig
    
    # 添加模拟器有效架构设置
    for config_file in ./Pods/Target\ Support\ Files/Pods-*/Pods-*.{debug,release}.xcconfig; do
      grep -q "VALID_ARCHS\\[sdk=iphonesimulator\\*\\]" "$config_file" || echo "VALID_ARCHS[sdk=iphonesimulator*] = x86_64" >> "$config_file"
    done
  SHELL
end
```

3. 安装依赖：

```bash
pod install
```
(2) 注意事项

1. **必须添加post_install钩子**：这是确保TanxSDK及其依赖的TanxMonitor.xcframework能正确编译的关键步骤。
2. **支持的平台**：SDK支持iOS 12.0及以上版本。
3. **架构支持**：
   - 真机: arm64
   - 模拟器: x86_64

## 常见问题

1. **编译错误 `-framework "TanxMonitor.xcframework"`**: 
   确保使用了上述post_install钩子。

2. **模拟器运行问题**:
   检查架构设置是否正确配置。

3. **符号链接问题**:
   如果在项目目录下发现TanxMonitor.xcframework符号链接，可以安全删除，因为真正的框架文件已在Pods/TanxSDK/目录下。

## 联系支持

如有任何问题，请联系：xuanjing.wjt@taobao.com
