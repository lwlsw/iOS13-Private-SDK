//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _TRUserNotification;

@interface TRUserNotificationManager : NSObject
{
    _TRUserNotification *_activeUserNotification;
}

+ (id)sharedInstance;
@property(retain, nonatomic) _TRUserNotification *activeUserNotification; // @synthesize activeUserNotification=_activeUserNotification;
// - (void).cxx_destruct;
- (void)presentLegacyAuthenticationFailedDialogWithMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestLegacyAuthenticationWithAccountID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancel;
- (void)presentWiFiNetworkConnectionError:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentErrorWithTitle:(id)arg1 message:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestPermissionForDiagnosticSubmissionWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentAuthenticationFailureWithMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestAppleIDAuthenticationWithAccountID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestAuthenticationWithAccountID:(id)arg1 message:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestPermissionToInitiateSetupWithCompletion:(CDUnknownBlockType)arg1;
- (void)_showUserNotificationWithDictionary:(id)arg1 options:(NSUInteger)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;

@end

