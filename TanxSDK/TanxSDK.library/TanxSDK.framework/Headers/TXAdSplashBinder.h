//
//  TXAdSplashBinder.h
//  TanxSDK-iOS
//
//  Created by Evan on 2024.07.31.
//  Copyright © 2024 tanx.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class TXAdSplashView, TXAdModel;

@interface TXAdSplashBinder : NSObject

/**
 *  绑定开屏自渲染view
 *
 *  @param splashView               自渲染的开屏容器view，可以直接 or 继承创建使用，广告subview须加载到splashView里
 *  @return NSError                       针对splashView等检查判断，如不满足，则返回error；
 */
- (nullable NSError *)bindContainerView:(TXAdSplashView *)splashView;

/**
 *  调用方在广告正常结束展示时调用，广告SDK依赖此时机发送监测事件。（需在调用bindFeedView:之后使用）
 *
 *  @param  model                        广告数据
 *  @return NSError                      针对数据model等进行判断，如不满足，则返回error；
 */
- (nullable NSError *)onSplashAdFinish:(TXAdModel *)model;

/**
 *  调用方在广告被关闭时调用，广告SDK依赖此时机发送监测事件。（点击跳过使用，需在调用bindFeedView:之后使用）
 *
 *  @param  model                        广告数据
 *  @return NSError                      针对数据model等进行判断，如不满足，则返回error；
 */
- (nullable NSError *)onSplashAdClose:(TXAdModel *)model;

/**
 *  调用方在广告被点击时调用，广告SDK依赖此时机发送点击监测。（需在调用bindFeedView:之后使用）
 *
 *  @param  model                        广告数据
 *  @return NSError                      针对数据model等进行判断，如不满足，则返回error；
 */
- (nullable NSError *)onSplashAdClick:(TXAdModel *)model;

/**
 *  调用方在广告发生错误时调用，广告SDK会将错误码及错误原因上报以便后续分析。（需在调用bindFeedView:之后使用）
 *
 *  @param  model                       广告数据
 *  @param  error                       错误信息
 */
- (void)onSplashAdError:(TXAdModel *)model error:(NSError *)error;

/**
 *  调用方在广告互动层展示时调用，广告SDK依赖此时机发送互动展示监测事件。（需在调用bindFeedView:之后使用）
 *
 *  @param  model                      广告数据
 *  @return NSError                    针对数据model等进行判断，如不满足，则返回error；
 */
- (nullable NSError *)onSplashAdInteractStart:(TXAdModel *)model;

/**
 *  调用方在广告互动层点击调用，广告SDK依赖此时机发送互动点击监测事件。（需在调用bindFeedView:之后使用）
 *
 *  @param  model                      广告数据
 *  @return NSError                    针对数据model等进行判断，如不满足，则返回error；
 */
- (nullable NSError *)onSplashAdInteractClick:(TXAdModel *)model;

/**
 *  调用方在广告互动成功时调用，广告SDK依赖此时机发送互动成功监测事件。（需在调用bindFeedView:之后使用）
 *
 *  @param  model                      广告数据
 *  @return NSError                    针对数据model等进行判断，如不满足，则返回error；
 */
- (nullable NSError *)onSplashAdInteractDone:(TXAdModel *)model;

@end

NS_ASSUME_NONNULL_END
