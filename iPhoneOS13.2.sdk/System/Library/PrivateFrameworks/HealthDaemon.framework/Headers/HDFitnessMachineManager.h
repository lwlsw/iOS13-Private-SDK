//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDFitnessMachinePairingManagerDelegate-Protocol.h>
#import <HealthDaemon/HDFitnessMachineStateTimersDelegate-Protocol.h>

@class HDFitnessMachineAnalyticsCollector, HDFitnessMachineDataCollector, HDFitnessMachineDataProducer, HDFitnessMachinePairingManager, HDFitnessMachineSession, HDFitnessMachineStateTimers, HDHealthServiceManager, HDProfile, HKObserverSet, NSDate, NSMutableArray;
@protocol HDFitnessMachineConnectionInitiatorProtocol, HDMetricsCollector, OS_dispatch_queue;

@interface HDFitnessMachineManager : NSObject <HDFitnessMachinePairingManagerDelegate, HDFitnessMachineStateTimersDelegate>
{
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_connections;
    HDFitnessMachineDataCollector *_collector;
    HDFitnessMachinePairingManager *_pairingManager;
    HDFitnessMachineSession *_fitnessMachineSession;
    BOOL _shouldReconnect;
    BOOL _resetInProgress;
    NSMutableArray *_characteristicDataBuffer;
    HKObserverSet *_fitnessMachineSessionObservers;
    HDFitnessMachineDataProducer *_fitnessMachineDataProducer;
    HDHealthServiceManager *_serviceManager;
    HDFitnessMachineStateTimers *_fitnessMachineStateTimers;
    HDFitnessMachineAnalyticsCollector *_analyticsCollector;
}

+ (id)fitnessMachineServerId;
@property(retain, nonatomic) HDFitnessMachineAnalyticsCollector *analyticsCollector; // @synthesize analyticsCollector=_analyticsCollector;
@property(retain, nonatomic) HDFitnessMachineStateTimers *fitnessMachineStateTimers; // @synthesize fitnessMachineStateTimers=_fitnessMachineStateTimers;
@property(nonatomic) __weak HDHealthServiceManager *serviceManager; // @synthesize serviceManager=_serviceManager;
@property(readonly, nonatomic) HDFitnessMachineDataProducer *fitnessMachineDataProducer; // @synthesize fitnessMachineDataProducer=_fitnessMachineDataProducer;
// - (void).cxx_destruct;
- (void)unitTest_receiveFakeCharacteristicUpdate:(id)arg1;
- (id)unitTest_currentFitnessMachineSession;
- (void)unitTest_fakeSession:(id)arg1;
- (void)unitTest_fakeMachineDiscoveryForType:(NSUInteger)arg1;
- (void)hktest_setMachinePreferredUntilDate:(id)arg1;
- (void)_queue_simulateDisconnect;
- (void)simulateDisconnect;
- (void)pairingManagerDidBeginPairing:(id)arg1;
- (void)pairingManagerReadyToConnect:(id)arg1;
- (void)pairingManager:(id)arg1 discoveredHealthService:(id)arg2 machineType:(NSUInteger)arg3;
- (void)pairingManagerReceivedActivityTypeAndPermission:(id)arg1;
- (void)pairingManager:(id)arg1 updatedConnectionStateFromState:(NSUInteger)arg2 toState:(NSUInteger)arg3;
- (void)pairingManagerUpdatedMachineInformation:(id)arg1;
- (id)pairingManagerRequestsOOBData:(id)arg1 error:(id )arg2;
- (void)pairingManager:(id)arg1 didChangeNFCEnabledState:(BOOL)arg2;
- (void)pairingManager:(id)arg1 failedPairingWithError:(id)arg2;
- (void)pairingManagerWillBeginPairing:(id)arg1 fitnessMachineToken:(id)arg2;
@property(readonly, nonatomic) id <HDMetricsCollector> metricsCollector;
@property(readonly, nonatomic) id <HDFitnessMachineConnectionInitiatorProtocol> connectionInitiatorServer;
- (void)_queue_performBlockOnConnections:(CDUnknownBlockType)arg1;
- (BOOL)_queue_connectionIsRegistered:(id)arg1;
- (void)_queue_removeConnectionWithUUID:(id)arg1;
- (void)_queue_addConnection:(id)arg1;
- (id)_queue_connectionWithUUID:(id)arg1;
- (void)_queue_registerClient:(id)arg1 withConnectionUUID:(id)arg2;
- (void)stateTimersMfaTimeout:(id)arg1;
- (void)stateTimersRetryConnectionTimeout:(id)arg1;
- (void)stateTimersDisconnectTimeout:(id)arg1;
- (void)stateTimersWaitForMachineStartTimeout:(id)arg1;
- (void)stateTimersPauseTimeout:(id)arg1;
- (void)_queue_handleMFASuccess;
- (void)_queue_deliverErrorToAllClients:(id)arg1;
- (void)_queue_deliverFailedWithError:(id)arg1 toConnectionUUID:(id)arg2;
- (void)_queue_deliverConnectionStateChangedFromState:(NSUInteger)arg1 toState:(NSUInteger)arg2 error:(id)arg3 notifyingPairingManager:(BOOL)arg4;
- (void)_queue_deliverMachineStateChangedFromState:(NSUInteger)arg1 date:(id)arg2;
- (void)_queue_deliverMachineInformationUpdatedNotifyingPairingManager:(BOOL)arg1;
- (void)_queue_deliverNFCDetected:(id)arg1;
- (void)_queue_recoverSessionWithConfiguration:(id)arg1;
- (void)_queue_setConnectionState:(NSUInteger)arg1 error:(id)arg2;
- (void)_queue_setMachineState:(NSUInteger)arg1 date:(id)arg2;
- (void)_queue_setDeviceInformation:(id)arg1;
- (void)_queue_tearDownAfterStopEvent;
- (void)_queue_resetConnectionForcing:(BOOL)arg1;
- (void)_queue_flushCharacteristicDataBuffer;
- (void)_queue_handleDataTransferRequirementsUpdated;
- (void)_queue_handleConnectionSuccessIfPossible;
- (void)_queue_handleBluetoothStatusUpdate:(long long)arg1 error:(id)arg2;
- (void)_queue_handleBeginPairing:(id)arg1;
- (void)_queue_handleBluetoothDisconnection;
- (void)_queue_disconnectFitnessMachineFromBluetooth;
- (BOOL)_queue_waitingOnInitialStatusAndData;
- (void)_queue_setMachinePreferredUntilDate:(id)arg1;
- (void)_queue_handleInitialStateIfNecessary;
- (BOOL)_queue_handleInitialMachineDataIfNecessary:(id)arg1;
- (BOOL)_queue_handleInitialMachineStatusIfNecessary:(id)arg1;
- (void)_queue_handleReceivedMachineStatus:(id)arg1;
- (void)_queue_handleReceivedEnhancedFTMSCharacteristic:(id)arg1;
- (void)_queue_handleReceivedDataCharacteristic:(id)arg1;
- (void)_queue_handleReceivedCharacteristic:(id)arg1 device:(id)arg2 error:(id)arg3;
- (void)_queue_handleOrBufferReceivedCharacteristic:(id)arg1 sessionIdentifier:(NSUInteger)arg2 device:(id)arg3 error:(id)arg4;
- (void)_queue_reconnectFitnessMachineWithError:(id)arg1;
- (void)_queue_handleConnectionStatus:(long long)arg1 finished:(BOOL)arg2 error:(id)arg3;
- (NSUInteger)connectionOptionsForSession:(id)arg1 isReconnect:(BOOL)arg2;
- (void)_queue_connectFitnessMachineIsReconnect:(BOOL)arg1;
- (void)removeFitnessMachineSessionObserver:(id)arg1;
- (void)addFitnessMachineSessionObserver:(id)arg1 queue:(id)arg2;
- (void)finishSessionWithConfiguration:(id)arg1;
- (void)recoverSessionWithConfiguration:(id)arg1;
- (id)currentSessionRecoveryConfiguration;
- (NSUInteger)fitnessMachineTypeForSessionUUID:(id)arg1;
- (void)clientInvalidatedWithConnectionUUID:(id)arg1;
- (void)_queue_endFitnessMachineConnectionForFitnessMachineSessionUUID:(id)arg1 withConnectionUUID:(id)arg2 forcingReset:(BOOL)arg3;
- (void)endFitnessMachineSessionWithUUID:(id)arg1;
- (void)endFitnessMachineConnectionForFitnessMachineSessionUUID:(id)arg1 withConnectionUUID:(id)arg2;
- (void)endFitnessMachineConnectionWithUUID:(id)arg1;
- (void)markClientReadyWithConnectionUUID:(id)arg1;
- (void)registerClient:(id)arg1 withConnectionUUID:(id)arg2;
@property(readonly, nonatomic) NSDate *machinePreferredUntilDate;
- (void)_setQueue:(id)arg1;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;

@end

