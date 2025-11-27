//
//  TXAdTestInterface.h
//  TanxSDK
//
//  Created by Evan on 2023/5/6.
//  Copyright © 2023 tanx.com. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  仅为sdk测试使用，不对外开放
 */
@interface TXAdTestInterface : NSObject

/* ----------- videoCaches ----------- */
// 2 ---- 信息流；3 ---- 激励视频
+ (NSArray *)videoCache_getAllCacheURLWithType:(NSUInteger)type;
+ (void)videoCache_cleanAllCachesWithType:(NSUInteger)type;
+ (void)videoCache_cacheDeleteWithType:(NSUInteger)type fileName:(NSString *)fileName;
+ (void)videoCache_downLoadCacheFilesWithType:(NSUInteger)type url:(NSString *)url;

/* ----------- splash Caches action ----------- */
+ (NSArray *)splash_getMaterials;
+ (void)splash_loadResponse:(NSString *)pid completion:(void (^)(NSString *response))completion;
+ (void)splash_saveResponse:(NSString *)res pid:(NSString *)pid;
+ (void)splash_deleteResponse:(NSString *)pid;
+ (void)splash_deleteMaterial:(NSString *)path;


/**
 *  设置广告请求环境
 *
 *  @param env ，1- online，0-dev
 */
+ (void)setAdRequestEnv:(NSUInteger)env;
+ (NSUInteger)getAdRequestEnv;

/// 调用后会自动打开系统分享面板，可以分享出最近的广告网络请求数据
///  ** 注意，请只在调试场景下调用本方法 **
+ (void)shareRecentRequestLogs;

@end


