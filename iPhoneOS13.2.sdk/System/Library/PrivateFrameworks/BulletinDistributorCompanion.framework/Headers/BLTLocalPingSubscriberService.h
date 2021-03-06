//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinDistributorCompanion/BLTPingService-Protocol.h>

@class BLTBulletinDistributorSubscriber;

@interface BLTLocalPingSubscriberService : NSObject <BLTPingService>
{
    BLTBulletinDistributorSubscriber *_subscriber;
}

@property(retain, nonatomic) BLTBulletinDistributorSubscriber *subscriber; // @synthesize subscriber=_subscriber;
// - (void).cxx_destruct;
- (void)subscribeWithMachServiceName:(id)arg1;
- (void)getWillNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendBulletinSummary:(id)arg1;
- (void)subscribeToSectionID:(id)arg1 forFullBulletins:(BOOL)arg2 withAck:(BOOL)arg3 ackAllowedOnLocalConnection:(BOOL)arg4;
- (void)unsubscribeFromSectionID:(id)arg1;

@end

