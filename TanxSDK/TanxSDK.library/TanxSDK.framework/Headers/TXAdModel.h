//
//  TXAdModel.h
//  TanxSDK-iOS
//
//  Created by Evan on 2023/2/22.
//  Copyright © 2023 tanx.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TXAdJSONModel.h"
#import "TXAdPublicMacro.h"


@class TXAdBidModel;

@interface TXAdModel : TXAdJSONModel

/// 标识广告的唯一ID
@property (nonatomic,   copy, readonly) NSString *sessionId;

/// 广告创意的唯一标识
@property (nonatomic,   copy, readonly) NSString *creativeId;

/// 广告序号id
@property (nonatomic,   copy, readonly) NSString *adId;

/// 广告来源
@property (nonatomic,   copy, readonly) NSString *adSource;

/// 广告竞价model
@property (nonatomic, strong, readonly) TXAdBidModel *bid;

/// 广告类型
@property (nonatomic, assign) TanXAdType adType;

@property (nonatomic, assign, readonly) NSTimeInterval start;
@property (nonatomic, assign, readonly) NSTimeInterval end;

/**
 *  对外媒体暴露，渲染素材数据（目前仅开屏、信息流广告自渲染模式返回）
 *
 *  "title"                     :  "广告标题",
 *  "advName"           :  "广告主名称",
 *  "description"         :  "广告描述",                            // 可能为空
 *  "assetUrl"              :  "广告展示素材对应的URL",
 *  "advLogo"             : " 广告来源logo图",
 *  "height"                 : "图片宽度",
 *  "width"                  :  "图片高度",
 *  "smImageUrl"        : " 缩略图",                               // 可能为空
 *  "smImageWidth"   : "",                                           // 可能为空
 *  "smImageHeight"  :  "",                                          // 可能为空
 *  "videoWidth"         :  "视频宽"  ,                             // 可能为空
 *  "videoHeight"        :  "视频高",                               // 可能为空
 *  "videoUrl"              :  "视频url",                               // 可能为空
 *  "localVideoUrl"      :  "视频本地存储路径",              // 仅开屏自渲染返回，可能为空
 *  "localImageUrl"     :  "图片本地存储路径",              // 仅开屏自渲染返回，可能为空
 *
 */
@property (nonatomic, copy, readonly)   NSDictionary *adMaterialDict;

@end
