//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNPrimitiveUserDefaults-Protocol.h>

@class NSString;

@interface CNCFPreferencesPrimitiveUserDefaults : NSObject <CNPrimitiveUserDefaults>
{
    NSString *_applicationID;
    long long _autosyncTimerIsActive;
}

// - (void).cxx_destruct;
- (void)setupAutosync;
- (BOOL)synchronize;
- (void)primitiveRemoveObjectForKey:(id)arg1;
- (BOOL)primitiveBoolValueForKey:(id)arg1 keyExists:(BOOL )arg2;
- (long long)primitiveIntegerValueForKey:(id)arg1 keyExists:(BOOL )arg2;
- (void)setPrimitiveObject:(id)arg1 forKey:(id)arg2;
- (id)primitiveObjectForKey:(id)arg1;
//  (struct __CFString )CFApplicationID;
- (id)initWithApplicationID:(id)arg1;

@end

