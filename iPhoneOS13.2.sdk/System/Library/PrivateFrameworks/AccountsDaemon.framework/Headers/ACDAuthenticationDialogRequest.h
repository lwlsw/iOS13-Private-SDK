//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface ACDAuthenticationDialogRequest : NSObject
{
    _Bool _confirmationRequired;
    NSURL *_url;
    ACAccount *_account;
    NSString *_authDelegateClassName;
    NSString *_authDelegateClassBundlePath;
    id /* block */ _completion;
}

@property(copy, nonatomic) id /* block */ completion; // @synthesize completion=_completion;
@property(copy, nonatomic) NSString *authDelegateClassBundlePath; // @synthesize authDelegateClassBundlePath=_authDelegateClassBundlePath;
@property(copy, nonatomic) NSString *authDelegateClassName; // @synthesize authDelegateClassName=_authDelegateClassName;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
@property(nonatomic) _Bool confirmationRequired; // @synthesize confirmationRequired=_confirmationRequired;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;

@end
