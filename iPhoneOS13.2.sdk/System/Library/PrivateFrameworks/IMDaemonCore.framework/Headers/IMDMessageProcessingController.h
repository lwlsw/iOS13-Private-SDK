//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;
@protocol IMDMessagePTaskStore;

@interface IMDMessageProcessingController : NSObject
{
    id <IMDMessagePTaskStore> _pTaskStore;
    NSTimer *_processingTimer;
}

@property(retain, nonatomic) NSTimer *processingTimer; // @synthesize processingTimer=_processingTimer;
@property(retain, nonatomic) id <IMDMessagePTaskStore> pTaskStore; // @synthesize pTaskStore=_pTaskStore;
- (void)messageProcessingTaskAdded:(id)arg1;
- (void)_indexSpotlightIfNeedForPTask:(id)arg1;
- (void)_processingTimerFired;
- (void)_scheduleDeferredProcessingWithTimeInterval:(double)arg1;
- (BOOL)_pref_IMDCoreSpotlightHasMigrated;
- (void)_xpc_IMDCoreSpotlightAddMessageGUID:(id)arg1;
- (void)scheduleInitialProcessingCheck;
- (void)dealloc;
- (id)init;
- (id)initWithMessagesPTaskStore:(id)arg1;

@end

