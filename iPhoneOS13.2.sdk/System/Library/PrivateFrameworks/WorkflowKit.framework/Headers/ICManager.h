//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFApplicationStateObserver-Protocol.h>

@class ICScheme, NSLock, NSMutableArray;

@interface ICManager : NSObject <WFApplicationStateObserver>
{
    BOOL _allowsOpeningFromBackground;
    BOOL _enteringForeground;
    BOOL _resignedActiveWhileOpeningURL;
    ICScheme *_callbackScheme;
    NSMutableArray *_queuedRequests;
    NSLock *_queueLock;
}

+ (id)sharedManager;
@property(nonatomic) BOOL resignedActiveWhileOpeningURL; // @synthesize resignedActiveWhileOpeningURL=_resignedActiveWhileOpeningURL;
@property(nonatomic) BOOL enteringForeground; // @synthesize enteringForeground=_enteringForeground;
@property(retain, nonatomic) NSLock *queueLock; // @synthesize queueLock=_queueLock;
@property(retain, nonatomic) NSMutableArray *queuedRequests; // @synthesize queuedRequests=_queuedRequests;
@property(nonatomic) BOOL allowsOpeningFromBackground; // @synthesize allowsOpeningFromBackground=_allowsOpeningFromBackground;
@property(retain, nonatomic) ICScheme *callbackScheme; // @synthesize callbackScheme=_callbackScheme;
// - (void).cxx_destruct;
- (void)_performRequest:(id)arg1;
- (void)performRequest:(id)arg1;
- (void)performQueuedRequestIfApplicable;
- (id)popQueuedRequest;
- (void)queueRequest:(id)arg1;
- (void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2;
- (void)removeHandlerForIncomingRequestsWithAction:(id)arg1 scheme:(id)arg2;
- (void)registerHandler:(CDUnknownBlockType)arg1 forIncomingRequestsWithAction:(id)arg2 legacyAction:(id)arg3 scheme:(id)arg4;
- (void)registerHandler:(CDUnknownBlockType)arg1 forIncomingRequestsWithAction:(id)arg2 scheme:(id)arg3;
- (BOOL)handleIncomingRequest:(id)arg1;
- (BOOL)handleOpenURL:(id)arg1 fromSourceApplication:(id)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;

@end

