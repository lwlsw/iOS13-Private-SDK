//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>


#import <SOS/SOSInternalServerProtocol-Protocol.h>
#import <SOS/SOSPersistentTimerLocationManagerDelegate-Protocol.h>
#import <SOS/SOSServerProtocol-Protocol.h>

@class CLLocation, FKFriendsManager, NSDate, NSMutableArray, NSString, SOSContactsManager, SOSPersistentTimerLocationManager, _MKLocationShifter;

@interface SOSEngine : NSObject <SOSInternalServerProtocol, SOSPersistentTimerLocationManagerDelegate, SOSServerProtocol, NSXPCListenerDelegate>
{
    SOSPersistentTimerLocationManager *_sosPersistentTimerLocationManager;
    NSDate *_timeToStopSendingMessages;
    NSDate *_timeLastMessageSent;
    CLLocation *_lastLocationSent;
    SOSContactsManager *_contactsManager;
    NSString *_medicalIDName;
    long long _notifyContactsReason;
    FKFriendsManager *_friendsManager;
    _MKLocationShifter *_locationShifter;
    NSMutableArray *_clientConnections;
}

+ (_Bool)authorizedToUseContactStore;
+ (id)contactStore;
+ (void)preloadContactStoreIfNecessary;
+ (id)additionalTextForCallbackNumber:(id)arg1 fullName:(id)arg2 firstName:(id)arg3;
+ (id)additionalTextForCallbackNumber:(id)arg1;
+ (id)GPSCoordinatesURLForLocation:(id)arg1;
+ (id)_sosMessageForLocation:(id)arg1 isFirstMessage:(_Bool)arg2 withMMS:(_Bool)arg3 myFullName:(id)arg4 myFirstName:(id)arg5 callbackNumber:(id)arg6 Reason:(long long)arg7;
+ (id)_sosMessageForLocation:(id)arg1 isFirstMessage:(_Bool)arg2 withMMS:(_Bool)arg3 callbackNumber:(id)arg4 medicalIDName:(id)arg5 Reason:(long long)arg6;
+ (id)firstNameForContact:(id)arg1;
+ (id)fullNameForContact:(id)arg1;
+ (id)meContact;
+ (_Bool)_isBasebandDevice;
+ (void)shiftedLocationWithLocation:(id)arg1 completion:(id /* block */)arg2;
+ (id)locationShifter;
+ (void)_sendCKMessage:(id)arg1 failureBlock:(id /* block */)arg2;
+ (void)_sendMessage:(id)arg1 location:(id)arg2 recipients:(id)arg3 useStandalone:(_Bool)arg4 failureBlock:(id /* block */)arg5;
+ (void)_sendSMSMessage:(id)arg1 MMSMessage:(id)arg2 location:(id)arg3 recipients:(id)arg4 failureBlock:(id /* block */)arg5;
+ (void)_sendMessageToRecipients:(id)arg1 withLocation:(id)arg2 isFirstMessage:(_Bool)arg3 medicalIDName:(id)arg4 Reason:(long long)arg5;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *clientConnections; // @synthesize clientConnections=_clientConnections;
@property(retain, nonatomic) _MKLocationShifter *locationShifter; // @synthesize locationShifter=_locationShifter;
@property(retain, nonatomic) FKFriendsManager *friendsManager; // @synthesize friendsManager=_friendsManager;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)fetchMedicalIDName;
- (void)contactStoreDidChange;
- (_Bool)locationIsValidToSend:(id)arg1;
- (void)isSendingLocationUpdate:(id /* block */)arg1;
- (void)mostRecentLocationSentWithCompletion:(id /* block */)arg1;
- (long long)currentSOSInitiationState;
- (_Bool)isSendingLocationUpdate;
- (void)stopSendingLocationUpdate;
- (void)startSendingLocationUpdateWithCompletion:(id /* block */)arg1;
- (void)startSendingLocationUpdateForReason:(long long)arg1 WithCompletion:(id /* block */)arg2;
- (void)willStartSendingLocationUpdate;
- (_Bool)notificationEnabledAndContactsExist;
- (void)sosPersistentTimerLocationMangerTimerFired:(id)arg1 location:(id)arg2;
- (void)didDismissSOSBeforeSOSCall:(long long)arg1;
- (void)dismissSOSWithCompletion:(id /* block */)arg1;
- (void)updateCurrentSOSInteractiveState:(long long)arg1;
- (void)updateCurrentSOSInitiationState:(long long)arg1;
- (void)SOSSendingLocationUpdateChanged:(id)arg1;
- (id)contactsManager;
- (void)dealloc;
- (void)start;
- (id)initWithoutEntitlement;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
