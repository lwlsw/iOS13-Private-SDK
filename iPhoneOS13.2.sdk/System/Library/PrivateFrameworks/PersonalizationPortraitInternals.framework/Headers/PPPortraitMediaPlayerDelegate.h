//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortraitInternals/MPRequestResponseControllerDelegate-Protocol.h>

@class MPCPlayerResponse, MPRequestResponseController, NSDate, PPNamedEntityStore;
@protocol OS_dispatch_queue;

@interface PPPortraitMediaPlayerDelegate : NSObject <MPRequestResponseControllerDelegate>
{
    PPNamedEntityStore *_namedEntityStore;
    double _donationDelaySeconds;
    BOOL _useSGNamedEntityDissector;
    MPRequestResponseController *_requestController;
    MPCPlayerResponse *_pendingDonation;
    NSDate *_pendingDonationTimestamp;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (id)bundleIdOfCurrentForegroundApp;
+ (BOOL)_response:(id)arg1 isEqualTo:(id)arg2;
+ (id)_setupRequest;
// - (void).cxx_destruct;
- (void)waitForQueueEmpty;
- (void)processResponse:(id)arg1;
- (void)_donateDelayedResponse:(id)arg1 timePlayed:(double)arg2 bundleId:(id)arg3;
- (void)controller:(id)arg1 defersResponseReplacement:(CDUnknownBlockType)arg2;
- (id)initWithNamedEntityStore:(id)arg1 donationDelaySeconds:(double)arg2 registersResponseLoading:(BOOL)arg3 useSGNamedEntityDissector:(BOOL)arg4;
- (id)init;

@end

