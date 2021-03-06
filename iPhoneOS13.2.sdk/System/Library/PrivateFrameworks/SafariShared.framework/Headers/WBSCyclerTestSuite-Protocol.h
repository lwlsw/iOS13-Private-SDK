//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString;
@protocol WBSCyclerTestTarget;

@protocol WBSCyclerTestSuite <NSObject>
- (void)runWithTarget:(id <WBSCyclerTestTarget>)arg1 completionHandler:(void (^)(NSError *))arg2;
- (id)init;

@optional
+ (BOOL)setValue:(NSString *)arg1 forConfigurationKey:(NSString *)arg2;
@property(readonly, nonatomic, getter=isFinished) BOOL finished;
- (void)handleRequest:(NSString *)arg1 withTarget:(id <WBSCyclerTestTarget>)arg2 completionHandler:(void (^)(NSError *))arg3;
- (BOOL)canHandleRequest:(NSString *)arg1;
- (void)tearDown;
- (void)setUp;
@end

