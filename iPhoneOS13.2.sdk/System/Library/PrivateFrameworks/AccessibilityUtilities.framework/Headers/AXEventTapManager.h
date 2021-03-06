//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, NSRecursiveLock;

@interface AXEventTapManager : NSObject
{
    NSMutableArray *_eventTaps;
    NSMutableArray *_addedEventTapPairs;
    NSMutableSet *_removedEventTapIdentifiers;
    BOOL _isEnumeratingEventTaps;
    BOOL _shouldReorderEventTaps;
    id /* CDUnknownBlockType */ _installationGSCallback;
    id /* CDUnknownBlockType */ _installationHIDCallback;
    NSRecursiveLock *_eventTapLock;
//    struct __IOHIDEventSystemClient _ioSystemPostBackClient;
    id /* CDUnknownBlockType */ _installationEventRepPost;
}

+ (id)sharedManager;
@property(copy, nonatomic) id /* CDUnknownBlockType */ installationEventRepPost; // @synthesize installationEventRepPost=_installationEventRepPost;
@property(copy, nonatomic) id /* CDUnknownBlockType */ installationHIDCallback; // @synthesize installationHIDCallback=_installationHIDCallback;
@property(copy, nonatomic) id /* CDUnknownBlockType */ installationGSCallback; // @synthesize installationGSCallback=_installationGSCallback;
// - (void).cxx_destruct;
- (void)_runMatchingServiceHandler:(id)arg1;
- (void)runMatchingServiceHandlerForEventTap:(id)arg1;
- (void)_removeHIDEventTapFilter:(id)arg1;
- (void)removeEventTap:(id)arg1;
- (id)installKeyboardEventTap:(CDUnknownBlockType)arg1 identifier:(id)arg2 matchingServiceHandler:(CDUnknownBlockType)arg3;
- (id)installEventTap:(CDUnknownBlockType)arg1 identifier:(id)arg2 type:(int)arg3 skipDeviceMatching:(BOOL)arg4 wantsDigitizerEvents:(BOOL)arg5 wantsKeyboardEvents:(BOOL)arg6 wantsATVRemoteEvents:(BOOL)arg7 wantsLisaEvents:(BOOL)arg8 wantsMouseEvents:(BOOL)arg9 matchingServiceHandler:(CDUnknownBlockType)arg10;
- (id)installEventTap:(CDUnknownBlockType)arg1 identifier:(id)arg2 type:(int)arg3 skipDeviceMatching:(BOOL)arg4 wantsDigitizerEvents:(BOOL)arg5 wantsKeyboardEvents:(BOOL)arg6 wantsATVRemoteEvents:(BOOL)arg7 wantsLisaEvents:(BOOL)arg8 wantsMouseEvents:(BOOL)arg9;
- (id)installEventTap:(CDUnknownBlockType)arg1 identifier:(id)arg2 type:(int)arg3;
- (void)_installSystemEventTap:(id)arg1;
- (void)_installHIDFilter:(id)arg1 skipDeviceMatching:(BOOL)arg2 wantsDigitizerEvents:(BOOL)arg3 wantsKeyboardEvents:(BOOL)arg4 wantsATVRemoteEvents:(BOOL)arg5 wantsLisaEvents:(BOOL)arg6 wantsMouseEvents:(BOOL)arg7;
- (void)_installEventTap:(id)arg1 skipDeviceMatching:(BOOL)arg2 wantsDigitizerEvents:(BOOL)arg3 wantsKeyboardEvents:(BOOL)arg4 wantsATVRemoteEvents:(BOOL)arg5 wantsLisaEvents:(BOOL)arg6 wantsMouseEvents:(BOOL)arg7;
- (void)_setEventTapPriority:(id)arg1 priority:(int)arg2;
//  (void)_passivelyPeakAtHIDEventWithTarget:(void )arg1 tapPair:(id)arg2 sender:(void )arg3 event:(struct __IOHIDEvent )arg4 axEventRep:(id)arg5 didHandle:(BOOL)arg6;
- (void)setEventTapPriority:(id)arg1 priority:(int)arg2;
- (void)_reorderEventTaps;
// - (BOOL)_processGSEvent:(CDStruct_7f3c0925 )arg1;
//  (BOOL)_processHIDEvent:(struct __IOHIDEvent )arg1 taskPort:(unsigned int)arg2 bundleId:(id)arg3;
//  (void)_handleTestIOHIDEvent:(struct __IOHIDEvent )arg1;
- (void)sendEvent:(id)arg1 afterTap:(id)arg2 useGSEvent:(BOOL)arg3 namedTaps:(id)arg4 options:(NSUInteger)arg5;
- (void)sendHIDSystemEvent:(id)arg1 repostCreatorHIDEvent:(BOOL)arg2 senderID:(NSUInteger)arg3;
- (void)sendHIDSystemEvent:(id)arg1 senderID:(NSUInteger)arg2;
- (void)_enumerateEventTapPairsUsingBlock:(CDUnknownBlockType)arg1;
- (id)_copyCurrentEventTapPairs;
- (void)_setHIDEventTapCallback:(void )arg1;
- (void)_setGSEventTapCallback:(void )arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end

