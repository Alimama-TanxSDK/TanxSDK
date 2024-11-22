Pod::Spec.new do |spec|
  spec.name         = "TanxSDK"
  spec.version      = "3.6.5"
  spec.summary      = "an adSDK for media"
  spec.description  = <<-DESC
TanxSDK is a product provided by Alibaba Group for monetizing advertisements for external media.
  DESC
  spec.homepage     = "https://github.com/Alimama-TanxSDK/TanxSDK.git"
  spec.license      = { :type => 'MIT', :file => 'LICENSE' }
  spec.source       = { :git => "https://github.com/Alimama-TanxSDK/TanxSDK.git", :tag => "#{spec.version}" }
  spec.author       = { "tongyuecheng" => "wb-tyc866331@alibabapictures.com" }
  spec.platform     = :ios, "12.0"
  spec.ios.deployment_target = "12.0"

  # 指向现有目录
  spec.vendored_frameworks = 'TanxSDK/TanxSDK.library/*.framework'
  spec.resources = ['TanxSDK/TanxSDK.library/TanxSDK.framework/TanxID.bundle/**/*']

  # 添加以下代码将构建限制在 iOS
  spec.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  spec.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }

end