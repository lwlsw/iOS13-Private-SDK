//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSOrderedSet, NSString;

@interface SBPlatformController : NSObject
{
    NSDictionary *_defaultIconState;
    NSOrderedSet *_defaultIconStateDisplayIdentifiers;
    NSString *_localizedDeviceName;
    BOOL _internalInstall;
    BOOL _carrierInstall;
    long long _medusaCapabilities;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)_loadDefaultIconInfo;
- (BOOL)isRoundCornerPad;
- (BOOL)isRoundCornerPhone;
- (BOOL)supportsGestureInitiatedAutoPiP;
- (BOOL)prefersAlwaysOnOrientation;
- (BOOL)isHomeGestureEnabled;
- (BOOL)isiPadMini;
- (long long)medusaCapabilities;
- (BOOL)isDeveloperDevice;
- (BOOL)isCarrierInstall;
- (BOOL)isInternalInstall;
- (id)localizedPlatformName;
- (id)defaultIconStateDisplayIdentifiers;
- (id)defaultIconState;
- (id)uniqueDeviceIdentifier;
- (id)deviceClass;
- (id)productType;
- (id)hardwareModel;
- (id)systemBuildVersion;
- (id)init;

@end

