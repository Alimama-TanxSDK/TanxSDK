Pod::Spec.new do |s|
  s.platform = :ios
  s.ios.deployment_target = '12.0'
  s.name = 'TanxSDK'
  s.version  = "3.7.19"
  s.summary = "an adSDK for media"
  s.description = <<-DESC
TanxSDK is a product provided by Alibaba Group for monetizing advertisements for external media.
  DESC

  s.author = { "tongyuecheng" => "wb-tyc866331@alibabapictures.com" }
  s.homepage = 'https://github.com/Alimama-TanxSDK/TanxSDK.git'
  s.license = { :type => 'MIT', :file => 'LICENSE' }
  s.source = { :git => "https://github.com/Alimama-TanxSDK/TanxSDK.git", :tag => "#{s.version}" }
  
  # 正确处理框架
  s.vendored_frameworks = [
    'TanxSDK/TanxSDK.library/TanxSDK.framework',
    'TanxSDK/TanxSDK.library/TNXASDK.framework',
    'TanxSDK/TanxSDK.library/TanxMonitor.xcframework'
  ]
  
  # 为 XCFramework 专门添加配置
  s.pod_target_xcconfig = {
    'VALID_ARCHS[sdk=iphonesimulator*]' => 'x86_64 arm64',
    'EXCLUDED_ARCHS[sdk=iphoneos*]' => 'i386 armv7 armv7s',
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'armv7 armv7s',
    'OTHER_LDFLAGS' => '-ObjC',
    'FRAMEWORK_SEARCH_PATHS' => '$(inherited) "${PODS_ROOT}/TanxSDK/TanxSDK.library"',
    'HEADER_SEARCH_PATHS' => '$(inherited) "${PODS_ROOT}/TanxSDK/TanxSDK.library/TanxSDK.framework/Headers" "${PODS_ROOT}/TanxSDK/TanxSDK.library/TNXASDK.framework/Headers"'
  }

  # 修复用户target配置
  s.user_target_xcconfig = {
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'armv7 armv7s',
    'FRAMEWORK_SEARCH_PATHS' => '$(inherited) "${PODS_ROOT}/TanxSDK/TanxSDK.library"',
    'HEADER_SEARCH_PATHS' => '$(inherited) "${PODS_ROOT}/TanxSDK/TanxSDK.library/TanxSDK.framework/Headers" "${PODS_ROOT}/TanxSDK/TanxSDK.library/TNXASDK.framework/Headers"',
    'OTHER_LDFLAGS' => '$(inherited) -ObjC -framework TanxSDK -framework TNXASDK'
  }

  # 添加资源文件
  s.resources = ['TanxSDK/TanxSDK.library/TanxSDK.framework/TanxID.bundle/**/*']

  # 保留所有文件路径
  s.preserve_paths = [
    'TanxSDK/TanxSDK.library/TanxSDK.framework',
    'TanxSDK/TanxSDK.library/TNXASDK.framework',
    'TanxSDK/TanxSDK.library/TanxMonitor.xcframework'
  ]
  
  s.exclude_files = 'TanxSDK/TanxSDK.library/**/*.md'
  s.source_files = 'TanxSDK/TanxSDK.library/TanxSDK.framework/Headers/*.h'
end