//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CDPLocalDeviceSecretProxy;

@interface CDPLocalDevice : NSObject
{
    id <CDPLocalDeviceSecretProxy> _localSecretProxy;
}

+ (BOOL)hasLocalSecret;
+ (id)sharedInstance;
// - (void).cxx_destruct;
- (BOOL)_isHomePod;
- (BOOL)_currentProcessHasEntitlement:(id)arg1;
- (BOOL)_currentProcessCreatesDaemonTypeProxy;
- (id)deviceName;
- (id)serialNumber;
- (id)deviceClass;
- (id)osVersion;
- (id)modelVersion;
- (id)hardwareModel;
- (id)marketingModel;
- (BOOL)supportsSecureBackupRecovery;
- (BOOL)hasLocalSecret;
- (id)init;

@end

