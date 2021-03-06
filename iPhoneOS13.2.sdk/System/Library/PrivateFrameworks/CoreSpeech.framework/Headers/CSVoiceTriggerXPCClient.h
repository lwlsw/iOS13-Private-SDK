//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CSVoiceTriggerXPCClientDelegate, OS_xpc_object;

@interface CSVoiceTriggerXPCClient : NSObject
{
    id <CSVoiceTriggerXPCClientDelegate> _delegate;
    NSObject<OS_xpc_object> *_xpcConnection;
}

@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(nonatomic) __weak id <CSVoiceTriggerXPCClientDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_sendMessage:(id)arg1 connection:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)notifyVoiceTriggeredSiriSessionCancelled;
- (void)setPhraseSpotterBypassing:(BOOL)arg1 timeout:(double)arg2;
- (void)enableVoiceTrigger:(BOOL)arg1 withAssertion:(id)arg2 timestamp:(double)arg3;
- (void)_handleListenerDisconnectedError:(id)arg1;
- (void)_handleListenerError:(id)arg1;
- (void)_handleListenerEvent:(id)arg1;
- (void)dealloc;
- (void)connect;
- (id)init;

@end

