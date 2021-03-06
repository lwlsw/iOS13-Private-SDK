//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NviContext;
@protocol NviDataReceiver;

@protocol NviDataSource <NSObject>
@property(readonly, nonatomic) NSUInteger type;
- (void)stopWithDidStopHandler:(void (^)(BOOL, NSError *))arg1;
- (void)startWithNviContext:(NviContext *)arg1 didStartHandler:(void (^)(BOOL, NSError *))arg2;
- (void)removeReceiver:(id <NviDataReceiver>)arg1;
- (void)addReceiver:(id <NviDataReceiver>)arg1;
@end

