//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSHashTable, NSLock, NSNumber, NSString, NSUUID;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PKSecureElement : NSObject
{
    BOOL _deletingAllApplets;
    NSObject<OS_dispatch_source> *_deletingAllAppletsTimer;
    NSObject<OS_dispatch_queue> *_deletingAllAppletsTimerConcurrentQueue;
    NSObject<OS_dispatch_queue> *_deletingAllAppletsPropertyConcurrentQueue;
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    id /* CDUnknownBlockType */ _secureElementSessionPrelude;
    id /* CDUnknownBlockType */ _secureElementSessionPostlude;
    NSHashTable *_observers;
    NSLock *_observersLock;
    BOOL _registeredForHardwareUpdates;
}

+ (id)secureElementIdentifiers;
+ (id)primarySecureElementIdentifier;
+ (BOOL)isInFailForward;
+ (BOOL)hardwareSupportsExpressMode:(id)arg1;
+ (BOOL)supportsExpressMode:(id)arg1 byHardware:(BOOL )arg2;
+ (BOOL)supportsExpressMode:(id)arg1;
+ (BOOL)hardwareSupportsExpressForAutomaticSelectionTechnologyType:(long long)arg1;
+ (BOOL)supportsExpressForAutomaticSelectionTechnologyType:(long long)arg1;
+ (BOOL)supportsExpressForAutomaticSelectionTechnologyType:(long long)arg1 byHardware:(BOOL )arg2;
+ (id)sharedSecureElement;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSUUID *ownerUserUUID;
@property(readonly, nonatomic) NSArray *secureElementIdentifiers;
@property(readonly, nonatomic) NSString *primarySecureElementIdentifier;
@property(readonly, nonatomic) NSNumber *primaryJSBLSequenceCounter;
@property(readonly, nonatomic) NSString *primaryRegionTopic;
@property(readonly, nonatomic) NSUInteger hardwareVersion;
@property(readonly, nonatomic) NSUInteger supportedTechnologies;
@property(readonly, nonatomic) BOOL isDeletingAllApplets;
@property(readonly, nonatomic) BOOL isInRestrictedMode;
@property(readonly, nonatomic) BOOL isProductionSigned;
@property(readonly, nonatomic) BOOL isOwnable;
@property(copy, nonatomic) id /* CDUnknownBlockType */ secureElementSessionPostlude;
@property(copy, nonatomic) id /* CDUnknownBlockType */ secureElementSessionPrelude;
- (BOOL)setOwnerUserUUID:(id)arg1 keybagUUID:(id)arg2;
- (NSUInteger)ownershipStateForUserUUID:(id)arg1;
- (BOOL)supportsExpressModeForExpressPassType:(long long)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (void)peerPaymentEnrollmentDataWithAlternateDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)connectToServerWithPushTopic:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)queueConnectionToServerForAppletIdentifiers:(id)arg1;
- (BOOL)queueConnectionToServerWithPushTopic:(id)arg1;
- (void)signedPlatformDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)stateInformationWithCompletion:(CDUnknownBlockType)arg1;
- (void)signatureForAuthToken:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)signChallenge:(id)arg1 signatureEntanglementMode:(NSUInteger)arg2 completion:(CDUnknownBlockType)arg3;
- (void)signChallenge:(id)arg1 forPaymentApplication:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)markAppletsWithIdentifiersForDeletion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)markAppletWithIdentifierForDeletion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)markAllAppletsForDeletionWithExternalAuthorization:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)appletWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)allAppletsWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)setRegistrationInformation:(id)arg1 primaryRegionTopic:(id)arg2;
- (BOOL)hasRegistrationInformation;
- (void)pairingStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)SEPPairingInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)initializeSecureElementQueuingServerConnection:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_updateHardwareManagerListener;
- (void)contactlessPaymentPassesAvailableDidChange;
- (void)dealloc;
- (id)init;

@end

