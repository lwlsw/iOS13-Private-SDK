//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AAUIServerUIHookHandler, ACAccount;

@interface AAUICDPStingrayRemoteUIController : NSObject
{
    AAUIServerUIHookHandler *_serverHookHandler;
    ACAccount *_account;
}

// - (void).cxx_destruct;
- (void)setPresentingController:(id)arg1;
- (void)processObjectModel:(id)arg1 isModal:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)processObjectModel:(id)arg1 isModal:(BOOL)arg2;
- (void)attachAuthHandler:(CDUnknownBlockType)arg1;
- (void)attachRepairHandler:(CDUnknownBlockType)arg1;
- (void)attachPasscodeHandler:(CDUnknownBlockType)arg1;
- (void)attachRecoveryKeyHandler:(CDUnknownBlockType)arg1;
- (void)attachAllHandlers;
- (id)initWithRemoteUIController:(id)arg1 appleAccount:(id)arg2;
- (id)initWithRemoteUIController:(id)arg1;

@end

