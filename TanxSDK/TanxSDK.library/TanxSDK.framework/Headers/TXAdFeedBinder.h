//
//  TXAdFeedBinder.h
//  TanxSDK
//
//  Created by Yueyang Gu on 2022/5/11.
//  Copyright © 2022 tanx.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class TXAdFeedTemplateConfig,TXAdModel,TXAdFeedView,TXAdFeedPlayerView;

@interface TXAdFeedBinder : NSObject

@property(nonatomic, strong, readonly) TXAdModel *adModel;
@property(nonatomic, strong, readonly) TXAdFeedView *feedView;

/**
 *  绑定信息流自渲染view：
 *      1、只传了closeView，而dislikeViews为空的情况下，则点击closeView就是关闭广告；
 *         点击该视图会触发 TXAdFeedManager 的代理方法  onClickCloseFeed:
 *
 *      2、在有dislikeViews的情况下，则选择了具体的关闭理由的视图才是关闭广告。
 *         点击视图会触发 TXAdFeedManager 的代理方法  didCloseFeed:atIndex:
 *
 *  @param feedView               必须继承自TXAdFeedView，自渲染的信息流主视图，广告subview必须加载到feedView里面
 *  @param closeView            关闭按钮视图，可选。
 *  @param dislikeViews     关闭理由视图数组，可选。
 *  @return NSError                 针对feedView会进行判断，如不满足，则返回error；
 */
- (nullable NSError *)bindFeedView:(TXAdFeedView *)feedView
                         closeView:(nullable UIView *)closeView
                      dislikeViews:(nullable NSArray<UIView *> *)dislikeViews;

/**
 *  获取播放器view，需加到feedView使用
 *      1、由于视频播放器比较耗内存，建议使用的时候进行获取，不使用时调用destoryBinder及时释放
 *
 *  @param frame           播放器大小
 *  @return playerView  播放器view
 */
- (nullable TXAdFeedPlayerView *)getVideoAdViewWithFrame:(CGRect)frame
                                              playConfig:(TXAdFeedTemplateConfig *)playConfig;

/**
 *  支持自渲染feedView设置点击区域：
 *      0、一般接入方不需要实现，如需实现请咨询广告sdk开发同学
 *      1、需在bindFeedView:closeView:dislikeViews: 之后调用 ，避免出错
 *      2、传入clickableViews不为空时， clickableViews区域点击跳转广告落地页，
 *                               点击feedView区域，会产生回调，不会直接跳转落地页，
 *                               例：广告类型是视频的话由接入方控制视频的播放、暂停逻辑；
 *      3、传入clickableViews为空时，默认整个广告可点击跳转广告落地页；
 *
 *  @param clickableViews    需要点击的views，注：不是透传feedview；透传的views不要加在feedview上；
 *  @return NSError                    针对feedView、clickableViews会进行判断，如不满足，则返回error；
 */
- (nullable NSError *)registerFeedViewClickableViews:(NSArray<UIView *> *)clickableViews;

/**
 *  需要媒体主动调用销毁Binder，避免出现内存泄露（包含释放播放器）
 */
- (void)destoryBinder;

@end

NS_ASSUME_NONNULL_END
