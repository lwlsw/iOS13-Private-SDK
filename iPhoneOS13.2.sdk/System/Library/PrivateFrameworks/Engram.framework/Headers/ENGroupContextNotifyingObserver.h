//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Engram/ENGroupContextObserverMiddleware-Protocol.h>

@protocol OS_dispatch_queue;

@interface ENGroupContextNotifyingObserver : NSObject <ENGroupContextObserverMiddleware>
{
    NSObject<OS_dispatch_queue> *_queue;
    id /* CDUnknownBlockType */ _onGroupCache;
    id /* CDUnknownBlockType */ _onGroupCreate;
    id /* CDUnknownBlockType */ _onGroupUpdate;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ onGroupUpdate; // @synthesize onGroupUpdate=_onGroupUpdate;
@property(copy, nonatomic) id /* CDUnknownBlockType */ onGroupCreate; // @synthesize onGroupCreate=_onGroupCreate;
@property(copy, nonatomic) id /* CDUnknownBlockType */ onGroupCache; // @synthesize onGroupCache=_onGroupCache;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
// - (void).cxx_destruct;
- (void)groupContext:(id)arg1 didUpdateGroup:(id)arg2 withNewGroup:(id)arg3;
- (void)groupContext:(id)arg1 didCacheGroup:(id)arg2;
- (void)groupContext:(id)arg1 didCreateGroup:(id)arg2;
- (id)initWithQueue:(id)arg1;

@end

