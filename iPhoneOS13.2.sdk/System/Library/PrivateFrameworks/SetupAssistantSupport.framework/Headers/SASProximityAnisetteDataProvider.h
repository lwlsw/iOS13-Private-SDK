//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SetupAssistantSupport/AKAnisetteServiceProtocol-Protocol.h>

@class SASProximitySession;

@interface SASProximityAnisetteDataProvider : NSObject <NSCopying, AKAnisetteServiceProtocol>
{
    SASProximitySession *_session;
}

@property(retain) SASProximitySession *session; // @synthesize session=_session;
// - (void).cxx_destruct;
- (void)legacyAnisetteDataForDSID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)eraseAnisetteWithCompletion:(CDUnknownBlockType)arg1;
- (void)syncAnisetteWithSIMData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)provisionAnisetteWithCompletion:(CDUnknownBlockType)arg1;
// - (id)copyWithZone:(_NSZone )arg1;

@end

