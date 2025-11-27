//
//  TXAdSlotModel.h
//  TanxSDK-iOS
//
//  Created by Evan on 2023/2/22.
//  Copyright © 2023 tanx.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/**
 * 媒体接入配置model
 */
@interface TXAdSlotModel : NSObject

/// 广告pid
@property (nonatomic, copy) NSString *pid;

/// 是否仅wifi下载视频素材，默认：NO
@property (nonatomic, assign) BOOL downLoadAdVideoFilesOnWifi;

@end


