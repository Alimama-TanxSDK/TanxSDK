//
//  TXAdNetworkCacheManager.h
//  TanxCoreSDK
//
//  Created by 黄锦阳 on 2025/5/22.
//  Copyright © 2025 tanx.com. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// 缓存最近的广告请求参数和返回结果
@interface TXAdNetworkCacheManager: NSObject 

+ (instancetype)sharedInstance;

/// 缓存请求数据和对应的返回数据。最多保存十条数据，LRU
- (void)cacheRequest:(NSData *)requestData response:(NSData *)responseData;

/// 分享缓存的请求数据 
- (void)shareCacheData;

@end

NS_ASSUME_NONNULL_END
