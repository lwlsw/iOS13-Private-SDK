//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TUCallCenter;

@interface SBConferenceManager : NSObject
{
    BOOL _hasFaceTimeCapability;
//    struct MGNotificationTokenStruct _faceTimeCapabilityUpdateToken;
    TUCallCenter *_sharedCallCenter;
}

+ (void)initialize;
+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)endFaceTime;
- (void)_faceTimeStateChanged:(id)arg1;
- (void)dealloc;
- (BOOL)canStartFaceTime;
- (id)currentFaceTimeCall;
- (id)activeFaceTimeCall;
- (id)incomingFaceTimeCall;
- (BOOL)inFaceTimeVideo;
- (BOOL)inFaceTime;
- (BOOL)activeFaceTimeCallExists;
- (BOOL)faceTimeInvitationExists;
- (BOOL)faceTimeIsAvailable;
- (BOOL)hasFaceTimeCapability;
- (id)init;

@end

