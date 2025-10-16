#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class TanxMonitorTanxMonitorManager, TanxMonitorTanxMonitorModel, TanxMonitorTanxMonitorConfig, TanxMonitorTanxMonitorSingleUrlModel, TanxMonitorTanxMonitorType, TanxMonitorTanxMonitorTypeCompanion, TanxMonitorContainerTypeCompanion, TanxMonitorContainerType, NSObject, TanxMonitorTaskExecutor, TanxMonitorTimerTask, TanxMonitorAppLifecycleManagerCompanion, TanxMonitorLogCompanion, TanxMonitorLogUtilCompanion, TanxMonitorTanxConstantCompanion, TanxMonitorTanxFileUtilCompanion, TanxMonitorTanxJsonUtil, TanxMonitorTanxPlatformUtilCompanion, TanxMonitorTanxResponse, TanxMonitorTanxUrlUtilCompanion, TanxMonitorTanxUtUtil;

@protocol TanxMonitorITanxMonitorTracker, TanxMonitorITanxCommitStatus, TanxMonitorKMPTaskExecutor, TanxMonitorKMPTimerTask, TanxMonitorIAppLifecycleListener;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface TanxMonitorBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface TanxMonitorBase (TanxMonitorBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface TanxMonitorMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface TanxMonitorMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorTanxMonitorKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface TanxMonitorNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface TanxMonitorByte : TanxMonitorNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface TanxMonitorUByte : TanxMonitorNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface TanxMonitorShort : TanxMonitorNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface TanxMonitorUShort : TanxMonitorNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface TanxMonitorInt : TanxMonitorNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface TanxMonitorUInt : TanxMonitorNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface TanxMonitorLong : TanxMonitorNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface TanxMonitorULong : TanxMonitorNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface TanxMonitorFloat : TanxMonitorNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface TanxMonitorDouble : TanxMonitorNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface TanxMonitorBoolean : TanxMonitorNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TanxMonitorManager")))
@interface TanxMonitorTanxMonitorManager : TanxMonitorBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)tanxMonitorManager __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TanxMonitorTanxMonitorManager *shared __attribute__((swift_name("shared")));
- (void)commitClickEventModel:(TanxMonitorTanxMonitorModel *)model __attribute__((swift_name("commitClickEvent(model:)")));
- (void)commitExposeEventModel:(TanxMonitorTanxMonitorModel *)model __attribute__((swift_name("commitExposeEvent(model:)")));
- (void)commitInteractEventModel:(TanxMonitorTanxMonitorModel *)model __attribute__((swift_name("commitInteractEvent(model:)")));
- (void)doInitConfig:(TanxMonitorTanxMonitorConfig *)config __attribute__((swift_name("doInit(config:)")));
- (void)onAppEnterBackground __attribute__((swift_name("onAppEnterBackground()")));
@property (readonly) TanxMonitorTanxMonitorConfig *config __attribute__((swift_name("config")));
@end

__attribute__((swift_name("ITanxCommitStatus")))
@protocol TanxMonitorITanxCommitStatus
@required
- (void)failModel:(TanxMonitorTanxMonitorSingleUrlModel *)model __attribute__((swift_name("fail(model:)")));
- (void)successModel:(TanxMonitorTanxMonitorSingleUrlModel *)model __attribute__((swift_name("success(model:)")));
@end

__attribute__((swift_name("ITanxMonitorTracker")))
@protocol TanxMonitorITanxMonitorTracker
@required
- (void)trackPage:(NSString *)page eventId:(int32_t)eventId arg1:(NSString *)arg1 arg2:(NSString * _Nullable)arg2 arg3:(NSString * _Nullable)arg3 args:(TanxMonitorMutableDictionary<NSString *, NSString *> *)args __attribute__((swift_name("track(page:eventId:arg1:arg2:arg3:args:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TanxMonitorConfig")))
@interface TanxMonitorTanxMonitorConfig : TanxMonitorBase
- (instancetype)initWithUserTracker:(id<TanxMonitorITanxMonitorTracker>)userTracker __attribute__((swift_name("init(userTracker:)"))) __attribute__((objc_designated_initializer));
@property id _Nullable androidContext __attribute__((swift_name("androidContext")));
@property BOOL enableLog __attribute__((swift_name("enableLog")));
@property BOOL enableOffline __attribute__((swift_name("enableOffline")));
@property BOOL enableRetry __attribute__((swift_name("enableRetry")));
@property int32_t maxRetryTimes __attribute__((swift_name("maxRetryTimes")));
@property (readonly) id<TanxMonitorITanxMonitorTracker> userTracker __attribute__((swift_name("userTracker")));
@property int32_t utEventId __attribute__((swift_name("utEventId")));
@end

__attribute__((swift_name("TanxMonitorModel")))
@interface TanxMonitorTanxMonitorModel : TanxMonitorBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithUrls:(NSArray<NSString *> *)urls nameSpace:(NSString *)nameSpace pid:(NSString *)pid __attribute__((swift_name("init(urls:nameSpace:pid:)"))) __attribute__((objc_designated_initializer));
- (TanxMonitorMutableDictionary<NSString *, NSString *> *)toUTMap __attribute__((swift_name("toUTMap()")));
@property id<TanxMonitorITanxCommitStatus> _Nullable callback __attribute__((swift_name("callback")));
@property BOOL duplicateFilterEnable __attribute__((swift_name("duplicateFilterEnable")));
@property TanxMonitorInt * _Nullable errorCode __attribute__((swift_name("errorCode")));
@property NSString * _Nullable errorMsg __attribute__((swift_name("errorMsg")));
@property NSDictionary<NSString *, NSString *> *macroArgs __attribute__((swift_name("macroArgs")));
@property TanxMonitorTanxMonitorType *monitorType __attribute__((swift_name("monitorType")));
@property NSString *nameSpace __attribute__((swift_name("nameSpace")));
@property NSString *pid __attribute__((swift_name("pid")));
@property NSArray<NSString *> *urls __attribute__((swift_name("urls")));
@property TanxMonitorMutableDictionary<NSString *, NSString *> *utArgs __attribute__((swift_name("utArgs")));
@property NSString * _Nullable utMonitorType __attribute__((swift_name("utMonitorType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TanxMonitorSingleUrlModel")))
@interface TanxMonitorTanxMonitorSingleUrlModel : TanxMonitorTanxMonitorModel
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithOriginUrl:(NSString *)originUrl __attribute__((swift_name("init(originUrl:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithUrls:(NSArray<NSString *> *)urls nameSpace:(NSString *)nameSpace pid:(NSString *)pid __attribute__((swift_name("init(urls:nameSpace:pid:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property int64_t currentDateMills __attribute__((swift_name("currentDateMills")));
@property NSString *handledUrl __attribute__((swift_name("handledUrl")));
@property BOOL isRetry __attribute__((swift_name("isRetry")));
@property NSString *originUrl __attribute__((swift_name("originUrl")));
@property TanxMonitorTanxMonitorModel * _Nullable parent __attribute__((swift_name("parent")));
@property int32_t retryTimes __attribute__((swift_name("retryTimes")));
@property NSString *urlHash __attribute__((swift_name("urlHash")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TanxMonitorType")))
@interface TanxMonitorTanxMonitorType : TanxMonitorBase
@property (class, readonly, getter=companion) TanxMonitorTanxMonitorTypeCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TanxMonitorType.Companion")))
@interface TanxMonitorTanxMonitorTypeCompanion : TanxMonitorBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TanxMonitorTanxMonitorTypeCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (TanxMonitorTanxMonitorType *)fromOrdinalOrdinal:(int32_t)ordinal __attribute__((swift_name("fromOrdinal(ordinal:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (TanxMonitorTanxMonitorType *)fromStringValue:(NSString *)value __attribute__((swift_name("fromString(value:)")));
@property (readonly) TanxMonitorTanxMonitorType *CLICK __attribute__((swift_name("CLICK")));
@property (readonly) TanxMonitorTanxMonitorType *EXPOSE __attribute__((swift_name("EXPOSE")));
@property (readonly) TanxMonitorTanxMonitorType *INTERACT __attribute__((swift_name("INTERACT")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Concurrent")))
@interface TanxMonitorConcurrent : TanxMonitorBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<TanxMonitorKMPTaskExecutor>)doInitTaskExecutor __attribute__((swift_name("doInitTaskExecutor()")));
- (id<TanxMonitorKMPTimerTask>)doInitTimerTask __attribute__((swift_name("doInitTimerTask()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContainerType")))
@interface TanxMonitorContainerType : TanxMonitorBase
@property (class, readonly, getter=companion) TanxMonitorContainerTypeCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContainerType.Companion")))
@interface TanxMonitorContainerTypeCompanion : TanxMonitorBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TanxMonitorContainerTypeCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (TanxMonitorContainerType *)fromStringName:(NSString *)name __attribute__((swift_name("fromString(name:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (TanxMonitorContainerType *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) TanxMonitorContainerType *KGlobal __attribute__((swift_name("KGlobal")));
@property (readonly) TanxMonitorContainerType *KMain __attribute__((swift_name("KMain")));
@property (readonly) TanxMonitorContainerType *KParallel __attribute__((swift_name("KParallel")));
@property (readonly) TanxMonitorContainerType *KSerial __attribute__((swift_name("KSerial")));
@end

__attribute__((swift_name("KMPTaskExecutor")))
@protocol TanxMonitorKMPTaskExecutor
@required
- (void)createContainerLabel:(NSString *)label type:(TanxMonitorContainerType *)type maxNum:(int32_t)maxNum __attribute__((swift_name("createContainer(label:type:maxNum:)")));
- (void)shutdown __attribute__((swift_name("shutdown()")));
- (void)startAsyncTaskTask:(void (^)(void))task __attribute__((swift_name("startAsyncTask(task:)")));
- (void)startDelayTaskTimeDelayMs:(double)timeDelayMs task:(void (^)(void))task __attribute__((swift_name("startDelayTask(timeDelayMs:task:)")));
- (void)startTaskOnMainTask:(void (^)(void))task __attribute__((swift_name("startTaskOnMain(task:)")));
@end

__attribute__((swift_name("KMPTimerTask")))
@protocol TanxMonitorKMPTimerTask
@required
- (void)destroy __attribute__((swift_name("destroy()")));
- (void)resume __attribute__((swift_name("resume()")));
- (void)startTimerTaskOnTick:(void (^)(void))onTick rep:(BOOL)rep periodTimeMs:(int64_t)periodTimeMs times:(int32_t)times containerService:(id<TanxMonitorKMPTaskExecutor> _Nullable)containerService __attribute__((swift_name("startTimerTask(onTick:rep:periodTimeMs:times:containerService:)")));
- (void)stopTimerTask __attribute__((swift_name("stopTimerTask()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TanxAtomicInt")))
@interface TanxMonitorTanxAtomicInt : TanxMonitorBase
- (instancetype)initWithInitialValue:(int32_t)initialValue __attribute__((swift_name("init(initialValue:)"))) __attribute__((objc_designated_initializer));
- (BOOL)compareAndSetExpectedValue:(int32_t)expectedValue newValue:(int32_t)newValue __attribute__((swift_name("compareAndSet(expectedValue:newValue:)")));
- (int32_t)decrementAndGet __attribute__((swift_name("decrementAndGet()")));
- (int32_t)get __attribute__((swift_name("get()")));
- (int32_t)getAndIncrement __attribute__((swift_name("getAndIncrement()")));
- (int32_t)incrementAndGet __attribute__((swift_name("incrementAndGet()")));
- (void)setNewValue:(int32_t)newValue __attribute__((swift_name("set(newValue:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TaskExecutor")))
@interface TanxMonitorTaskExecutor : TanxMonitorBase <TanxMonitorKMPTaskExecutor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)createContainerLabel:(NSString *)label type:(TanxMonitorContainerType *)type maxNum:(int32_t)maxNum __attribute__((swift_name("createContainer(label:type:maxNum:)")));
- (NSObject * _Nullable)getQueue __attribute__((swift_name("getQueue()")));
- (TanxMonitorTaskExecutor *)doInitTaskExecutor __attribute__((swift_name("doInitTaskExecutor()")));
- (void)shutdown __attribute__((swift_name("shutdown()")));
- (void)startAsyncTaskTask:(void (^)(void))task __attribute__((swift_name("startAsyncTask(task:)")));
- (void)startDelayTaskTimeDelayMs:(double)timeDelayMs task:(void (^)(void))task __attribute__((swift_name("startDelayTask(timeDelayMs:task:)")));
- (void)startTaskOnMainTask:(void (^)(void))task __attribute__((swift_name("startTaskOnMain(task:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerTask")))
@interface TanxMonitorTimerTask : TanxMonitorBase <TanxMonitorKMPTimerTask>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)destroy __attribute__((swift_name("destroy()")));
- (TanxMonitorTimerTask *)doInitTimerTask __attribute__((swift_name("doInitTimerTask()")));
- (void)resume __attribute__((swift_name("resume()")));
- (void)startTimerTaskOnTick:(void (^)(void))onTick rep:(BOOL)rep periodTimeMs:(int64_t)periodTimeMs times:(int32_t)times containerService:(id<TanxMonitorKMPTaskExecutor> _Nullable)containerService __attribute__((swift_name("startTimerTask(onTick:rep:periodTimeMs:times:containerService:)")));
- (void)stopTimerTask __attribute__((swift_name("stopTimerTask()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppLifecycleManager")))
@interface TanxMonitorAppLifecycleManager : TanxMonitorBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) TanxMonitorAppLifecycleManagerCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppLifecycleManager.Companion")))
@interface TanxMonitorAppLifecycleManagerCompanion : TanxMonitorBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TanxMonitorAppLifecycleManagerCompanion *shared __attribute__((swift_name("shared")));
- (void)addListenerListener:(id<TanxMonitorIAppLifecycleListener>)listener __attribute__((swift_name("addListener(listener:)")));
- (void)removeListenerListener:(id<TanxMonitorIAppLifecycleListener>)listener __attribute__((swift_name("removeListener(listener:)")));
@end

__attribute__((swift_name("IAppLifecycleListener")))
@protocol TanxMonitorIAppLifecycleListener
@required
- (void)onEnterBackground __attribute__((swift_name("onEnterBackground()")));
- (void)onEnterForeground __attribute__((swift_name("onEnterForeground()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Log")))
@interface TanxMonitorLog : TanxMonitorBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) TanxMonitorLogCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Log.Companion")))
@interface TanxMonitorLogCompanion : TanxMonitorBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TanxMonitorLogCompanion *shared __attribute__((swift_name("shared")));
- (void)dTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("d(tag:message:)")));
- (void)eTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("e(tag:message:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogUtil")))
@interface TanxMonitorLogUtil : TanxMonitorBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) TanxMonitorLogUtilCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogUtil.Companion")))
@interface TanxMonitorLogUtilCompanion : TanxMonitorBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TanxMonitorLogUtilCompanion *shared __attribute__((swift_name("shared")));
- (void)dTag:(NSString *)tag method:(NSString *)method message:(NSString *)message __attribute__((swift_name("d(tag:method:message:)")));
- (void)eTag:(NSString *)tag method:(NSString *)method message:(NSString *)message __attribute__((swift_name("e(tag:method:message:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TanxConstant")))
@interface TanxMonitorTanxConstant : TanxMonitorBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) TanxMonitorTanxConstantCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TanxConstant.Companion")))
@interface TanxMonitorTanxConstantCompanion : TanxMonitorBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TanxMonitorTanxConstantCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *FILE_NAME __attribute__((swift_name("FILE_NAME")));
@property (readonly) NSString *SUCCESS_URL_HASH_FILE_NAME __attribute__((swift_name("SUCCESS_URL_HASH_FILE_NAME")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TanxFileUtil")))
@interface TanxMonitorTanxFileUtil : TanxMonitorBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) TanxMonitorTanxFileUtilCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TanxFileUtil.Companion")))
@interface TanxMonitorTanxFileUtilCompanion : TanxMonitorBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TanxMonitorTanxFileUtilCompanion *shared __attribute__((swift_name("shared")));
- (void)deleteFileFileName:(NSString *)fileName __attribute__((swift_name("deleteFile(fileName:)")));
- (NSString *)getFilePath __attribute__((swift_name("getFilePath()")));
- (NSString *)readFromFileFileName:(NSString *)fileName __attribute__((swift_name("readFromFile(fileName:)")));
- (void)writeToFileFileName:(NSString *)fileName content:(NSString *)content __attribute__((swift_name("writeToFile(fileName:content:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TanxJsonUtil")))
@interface TanxMonitorTanxJsonUtil : TanxMonitorBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)tanxJsonUtil __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TanxMonitorTanxJsonUtil *shared __attribute__((swift_name("shared")));
- (NSArray<TanxMonitorTanxMonitorSingleUrlModel *> * _Nullable)decodeMonitorModelsString:(NSString *)string __attribute__((swift_name("decodeMonitorModels(string:)")));
- (NSSet<NSString *> *)decodeStringSetString:(NSString *)string __attribute__((swift_name("decodeStringSet(string:)")));
- (NSString *)encodeMonitorModelsModels:(NSArray<TanxMonitorTanxMonitorSingleUrlModel *> *)models __attribute__((swift_name("encodeMonitorModels(models:)")));
- (NSString *)encodeStringSetSet:(NSSet<NSString *> *)set __attribute__((swift_name("encodeStringSet(set:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TanxPlatformUtil")))
@interface TanxMonitorTanxPlatformUtil : TanxMonitorBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) TanxMonitorTanxPlatformUtilCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TanxPlatformUtil.Companion")))
@interface TanxMonitorTanxPlatformUtilCompanion : TanxMonitorBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TanxMonitorTanxPlatformUtilCompanion *shared __attribute__((swift_name("shared")));
- (int64_t)getCurrentTime __attribute__((swift_name("getCurrentTime()")));
- (TanxMonitorTanxResponse *)httpRequestUrl:(NSString *)url __attribute__((swift_name("httpRequest(url:)")));
- (NSString *)md5Content:(NSString *)content __attribute__((swift_name("md5(content:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TanxResponse")))
@interface TanxMonitorTanxResponse : TanxMonitorBase
- (instancetype)initWithCode:(int32_t)code message:(NSString *)message response:(NSString *)response __attribute__((swift_name("init(code:message:response:)"))) __attribute__((objc_designated_initializer));
- (TanxMonitorTanxResponse *)doCopyCode:(int32_t)code message:(NSString *)message response:(NSString *)response __attribute__((swift_name("doCopy(code:message:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) NSString *response __attribute__((swift_name("response")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TanxUrlUtil")))
@interface TanxMonitorTanxUrlUtil : TanxMonitorBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) TanxMonitorTanxUrlUtilCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TanxUrlUtil.Companion")))
@interface TanxMonitorTanxUrlUtilCompanion : TanxMonitorBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TanxMonitorTanxUrlUtilCompanion *shared __attribute__((swift_name("shared")));
- (NSString *)getUriHostUri:(NSString *)uri __attribute__((swift_name("getUriHost(uri:)")));
- (NSString *)replaceMacrosUrl:(NSString *)url macros:(NSDictionary<NSString *, NSString *> *)macros __attribute__((swift_name("replaceMacros(url:macros:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TanxUtUtil")))
@interface TanxMonitorTanxUtUtil : TanxMonitorBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)tanxUtUtil __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TanxMonitorTanxUtUtil *shared __attribute__((swift_name("shared")));
- (void)commitArg1:(NSString *)arg1 args:(TanxMonitorMutableDictionary<NSString *, NSString *> *)args __attribute__((swift_name("commit(arg1:args:)")));
- (void)exposeExceptionMsg:(NSString *)msg __attribute__((swift_name("exposeException(msg:)")));
- (void)exposeInvalidUrlModel:(TanxMonitorTanxMonitorModel *)model errMsg:(NSString *)errMsg __attribute__((swift_name("exposeInvalidUrl(model:errMsg:)")));
- (void)exposeInvokeErrorModel:(TanxMonitorTanxMonitorModel *)model errMsg:(NSString *)errMsg __attribute__((swift_name("exposeInvokeError(model:errMsg:)")));
- (void)exposeInvokeSuccessModel:(TanxMonitorTanxMonitorModel *)model __attribute__((swift_name("exposeInvokeSuccess(model:)")));
- (void)exposeRequestDuplicatedModel:(TanxMonitorTanxMonitorModel *)model __attribute__((swift_name("exposeRequestDuplicated(model:)")));
- (void)exposeRequestFailModel:(TanxMonitorTanxMonitorSingleUrlModel *)model host:(NSString *)host urlHash:(NSString *)urlHash __attribute__((swift_name("exposeRequestFail(model:host:urlHash:)")));
- (void)exposeRequestSuccessModel:(TanxMonitorTanxMonitorSingleUrlModel *)model host:(NSString *)host urlHash:(NSString *)urlHash __attribute__((swift_name("exposeRequestSuccess(model:host:urlHash:)")));
- (void)exposeStartRequestModel:(TanxMonitorTanxMonitorModel *)model host:(NSString *)host urlHash:(NSString *)urlHash __attribute__((swift_name("exposeStartRequest(model:host:urlHash:)")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
