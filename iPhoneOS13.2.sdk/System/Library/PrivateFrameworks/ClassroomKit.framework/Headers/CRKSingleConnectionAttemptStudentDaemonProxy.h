//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CATTaskClientDelegate-Protocol.h>
#import <ClassroomKit/CRKRequestPerformingProtocol-Protocol.h>

@class CATTaskClient, NSError, NSString;
@protocol CRKTransportProviding;

@interface CRKSingleConnectionAttemptStudentDaemonProxy : NSObject <CATTaskClientDelegate, CRKRequestPerformingProtocol>
{
    id <CRKTransportProviding> mTransportProvider;
    CATTaskClient *mTaskClient;
    NSError *mError;
    _Bool mDidAttemptToConnect;
}

- (void)client:(id)arg1 didInterruptWithError:(id)arg2;
- (id)operationForRequest:(id)arg1;
- (void)failWithError:(id)arg1;
- (void)connect;
- (void)connectIfNeeded;
- (id)initWithTransportProvider:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
