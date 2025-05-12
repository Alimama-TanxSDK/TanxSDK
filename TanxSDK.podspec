Pod::Spec.new do |s|
  s.platform = :ios
  s.ios.deployment_target = '12.0'
  s.name = 'TanxSDK'
  s.version  = "3.7.3"
  s.summary = 'TanxSDK'
  s.description = 'TanxSDK for iOS'
  s.homepage = 'http://gitlab.alibaba-inc.com/alimamaad/TanxSDK-iOS'
  s.license = {
    :type => 'Copyright',
    :text => <<-LICENSE
              Alibaba-Inc copyright
    LICENSE
  }
  s.requires_arc = true
  s.authors = {'author'=>'jiangtao.wd@alibaba-inc.com'}
  s.source = {:git=>'git@gitlab.alibaba-inc.com:alimamaad/TanxSDK-iOS.git'}
  
  # 正确处理框架 - 将所有框架一次性定义
  s.vendored_frameworks = [
    'TanxSDK.framework',
    'TNXASDK.framework',
    'TanxMonitor.xcframework'
  ]
  
  # 为 XCFramework 专门添加配置
  s.pod_target_xcconfig = {
    'VALID_ARCHS[sdk=iphonesimulator*]' => 'x86_64 arm64',
    'EXCLUDED_ARCHS[sdk=iphoneos*]' => 'i386 armv7 armv7s',
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'armv7 armv7s',
    'OTHER_LDFLAGS' => '-ObjC',
    # 添加通用框架搜索路径
    'FRAMEWORK_SEARCH_PATHS' => '$(inherited) $(PODS_ROOT)/TanxSDK',
    # 同时保留特定SDK的框架搜索路径，但添加$(inherited)以保留所有其他路径
    'FRAMEWORK_SEARCH_PATHS[sdk=iphoneos*]' => '$(inherited) $(PODS_ROOT)/TanxSDK $(PODS_ROOT)/TanxSDK/TanxMonitor.xcframework/ios-arm64',
    'FRAMEWORK_SEARCH_PATHS[sdk=iphonesimulator*]' => '$(inherited) $(PODS_ROOT)/TanxSDK $(PODS_ROOT)/TanxSDK/TanxMonitor.xcframework/ios-arm64_x86_64-simulator',
    'HEADER_SEARCH_PATHS' => '$(inherited) $(PODS_ROOT)/TanxSDK/TanxMonitor.xcframework/**/Headers',
  }

  # 修复用户target配置
  s.user_target_xcconfig = {
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'armv7 armv7s',
    # 添加通用框架搜索路径
    'FRAMEWORK_SEARCH_PATHS' => '$(inherited) $(PODS_ROOT)/TanxSDK',
    # 同时保留特定SDK的框架搜索路径，但添加$(inherited)以保留所有其他路径
    'FRAMEWORK_SEARCH_PATHS[sdk=iphoneos*]' => '$(inherited) $(PODS_ROOT)/TanxSDK $(PODS_ROOT)/TanxSDK/TanxMonitor.xcframework/ios-arm64',
    'FRAMEWORK_SEARCH_PATHS[sdk=iphonesimulator*]' => '$(inherited) $(PODS_ROOT)/TanxSDK $(PODS_ROOT)/TanxSDK/TanxMonitor.xcframework/ios-arm64_x86_64-simulator',
    'HEADER_SEARCH_PATHS' => '$(inherited) $(PODS_ROOT)/TanxSDK/TanxMonitor.xcframework/**/Headers',
    # 添加正确的链接标志
    'OTHER_LDFLAGS' => '$(inherited) -ObjC -framework TanxMonitor'
  }

  # 添加资源文件
  s.resources = [
    'TanxSDK.framework/TanxID.bundle',
    'TanxSDK.framework/PrivacyInfo.xcprivacy'
  ]
end