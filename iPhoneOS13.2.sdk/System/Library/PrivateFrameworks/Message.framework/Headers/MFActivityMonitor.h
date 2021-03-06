//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailFoundation/EFPriorityDesignator.h>

#import <Message/EFCancelable-Protocol.h>

@class MFError, MFInvocationQueue, MFMailboxUid, NSMutableSet, NSString, NSThread;

@interface MFActivityMonitor : EFPriorityDesignator <EFCancelable>
{
    NSThread *_runningThread;
    NSString *_displayName;
    NSString *_statusMessage;
    NSString *_descriptionString;
    MFInvocationQueue *_ourQueue;
    double _percentDone;
    unsigned int _key:13;
    unsigned int _canCancel:1;
    unsigned int _shouldCancel:1;
    unsigned int _isActive:1;
    unsigned int _changeCount:8;
    id _delegate;
    id _target;
    MFError *_error;
    NSUInteger _expectedLength;
    NSUInteger _maxCount;
    NSUInteger _currentCount;
    double _currentItemPercentDone;
    unsigned int _supportsPerItemProgress:1;
    MFMailboxUid *_mailbox;
    double _lastTime;
    double _startTime;
    NSUInteger _gotNewMessagesState;
    NSUInteger _bytesRead;
    NSUInteger _bytesWritten;
    NSMutableSet *_reasons;
    NSMutableSet *_associatedCancelables;
    BOOL _isRemoteSearch;
    id /* CDUnknownBlockType */ _startedFetch;
    long long _transportType;
}

+ (void)destroyMonitor;
+ (id)pushNewMonitor;
+ (id)currentMonitor;
@property(readonly, nonatomic) long long transportType; // @synthesize transportType=_transportType;
@property(nonatomic) BOOL isRemoteSearch; // @synthesize isRemoteSearch=_isRemoteSearch;
@property(copy) id /* CDUnknownBlockType */ startedFetch; // @synthesize startedFetch=_startedFetch;
@property(retain) MFMailboxUid *mailbox; // @synthesize mailbox=_mailbox;
// - (void).cxx_destruct;
- (void)recordTransportType:(long long)arg1;
@property(readonly, nonatomic) NSUInteger bytesWritten;
@property(readonly, nonatomic) NSUInteger bytesRead;
- (void)recordBytesWritten:(NSUInteger)arg1;
- (void)recordBytesRead:(NSUInteger)arg1;
- (void)resetConnectionStats;
@property(retain, nonatomic) MFError *error;
- (void)setPercentDone:(double)arg1 withKey:(int)arg2;
- (void)setStatusMessage:(id)arg1 withKey:(int)arg2;
- (void)setStatusMessage:(id)arg1 percentDone:(double)arg2 withKey:(int)arg3;
- (void)relinquishExclusiveAccessKey:(int)arg1;
- (int)acquireExclusiveAccessKey;
- (void)setInvocationQueue:(id)arg1;
- (void)cancel;
- (void)_cancelAssociatedCancelables;
- (void)removeCancelable:(id)arg1;
- (void)addCancelable:(id)arg1;
@property(nonatomic) BOOL shouldCancel;
@property(nonatomic) BOOL canBeCancelled;
- (id)activityTargets;
@property(retain, nonatomic) id primaryTarget;
- (void)removeActivityTarget:(id)arg1;
- (void)addActivityTargets:(id)arg1;
- (void)addActivityTarget:(id)arg1;
- (BOOL)_lockedAddActivityTarget:(id)arg1;
@property(retain, nonatomic) id activityTarget;
@property(copy, nonatomic) NSString *displayName;
- (void)setDisplayName:(id)arg1 maxCount:(NSUInteger)arg2;
@property(readonly, copy) NSString *description;
@property(nonatomic) NSUInteger expectedLength;
@property(readonly, nonatomic) double startTime;
@property(nonatomic) double percentDone;
@property(copy, nonatomic) NSString *statusMessage;
- (void)setStatusMessage:(id)arg1 percentDone:(double)arg2;
@property(readonly, nonatomic) int changeCount;
- (id)reasons;
- (BOOL)hasReason:(id)arg1;
- (void)addReason:(id)arg1;
@property(nonatomic) NSUInteger gotNewMessagesState;
- (void)reset;
- (void)setPercentDoneOfCurrentItem:(double)arg1;
- (id)_ntsThrottledUserInfoDict;
- (void)setSupportsPerItemProgress:(BOOL)arg1;
- (void)setCurrentCount:(NSUInteger)arg1;
- (void)setMaxCount:(NSUInteger)arg1;
- (void)_didChange;
- (void)postDidChangeWithUserInfo:(id)arg1;
- (id)userInfoForNotification;
- (void)notifyConnectionEstablished;
- (void)finishedActivity:(id)arg1;
- (void)startActivity;
- (void)postActivityFinished:(id)arg1;
- (void)postActivityStarting;
- (void)cancelMessage;
- (void)setDelegate:(id)arg1;
- (BOOL)isActive;
- (id)init;

@end

