//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBUIBiometricResourceObserver-Protocol.h>

@protocol SBUIBiometricResource;

@interface SBPearlInterlockObserver : NSObject <SBUIBiometricResourceObserver>
{
    id <SBUIBiometricResource> _biometricResource;
    BOOL _fired;
}

// - (void).cxx_destruct;
- (void)biometricResource:(id)arg1 matchingEnabledDidChange:(BOOL)arg2;
- (void)biometricResource:(id)arg1 observeEvent:(NSUInteger)arg2;
- (void)_fire;
- (void)_checkForLockout;
- (void)deactivate;
- (void)activate;
- (id)initWithBiometricResource:(id)arg1;

@end

