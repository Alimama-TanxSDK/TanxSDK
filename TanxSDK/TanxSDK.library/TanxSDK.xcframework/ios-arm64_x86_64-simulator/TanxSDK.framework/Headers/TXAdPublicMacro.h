//
//  TXAdPublicMacro.h
//  TanxSDK
//
//  Created by Evan on 2024/08/15.
//

#ifndef TXAdPublicMacro_h
#define TXAdPublicMacro_h

@class TXAdModel;

/// 广告页面打开方式
typedef NS_ENUM(NSInteger, TXAdViewOpenType) {
    TXAdViewOpenTypePush      = 1,
    TXAdViewOpenTypePresent   = 2,
};

/// 渲染模式枚举
typedef NS_ENUM(NSUInteger, TXAdRenderMode) {
    /// 模板渲染
    TXAdRenderModeTemplate = 1,
    
    /// 自渲染
    TXAdRenderModeCustom = 2,
};

/// 广告类型枚举
typedef NS_ENUM(NSInteger ,TanXAdType) {
    
    /// 异常广告数据
    TanXAdTypeUnknown = -1,
    
    /// 开屏广告-图片
    TanXAdTypeSplash = 1,
    
    /// 信息流广告-图片，适合信息流场景
    TanXAdTypeFeedImage,
    
    /// 信息流广告-自渲染视频，适合信息流场景
    TanXAdTypeFeedVideo,
    
    /// 激励广告-视频（当前app内展示），展示整个屏幕
    TanXAdTypeRewardVideo,
    
    /// 插屏广告，展示整个屏幕
    TanXAdTypeTableScreen,
    
    /// 激励广告-浏览（当前app内展示）
    TanXAdTypeRewardBrowse,
    
    /// 激励广告-换端（唤端手淘app内展示，如唤端失败-则在当前app内展示）
    TanXAdTypeRewardArousal,
    
    /// 信息流广告-自渲染视频，9:16沉浸式视频，适合类似抖音、快手视频场景
    TanXAdTypeFeedImmersiveVideo,
    
    /// 开屏广告-视频（模版类型仅支持图片，自渲染支持）
    TanXAdTypeSplashVideo,
};

/// 获取广告数据回调block
typedef void(^TXGetAdDatasBlock)(NSArray <TXAdModel *> * _Nullable adModels, NSError * _Nullable error);

#endif /* TXAdPublicMacro_h */
