//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUtils/CBCentralManagerDelegate-Protocol.h>
#import <CoreUtils/CBPeripheralManagerDelegate-Protocol.h>

@class CBCentralManager, CBPeripheralManager, NSData, NSString;
@protocol OS_dispatch_queue;

@interface CUBluetoothClient : NSObject <CBCentralManagerDelegate, CBPeripheralManagerDelegate>
{
    NSData *_btAdvertisingAddress;
    CBCentralManager *_btCentralManager;
    _Bool _btCentralManagerNeeded;
    CBPeripheralManager *_btPeripheralManager;
    _Bool _btPeripheralManagerNeeded;
    struct {
        CDUnknownFunctionPointerType accessoryEvent;
        CDUnknownFunctionPointerType accessorySetupCommand;
    } _btAccessoryCallbacks;
    _Bool _btAccessoryEventsNeeded;
    _Bool _btAccessoryEventsRegistered;
    struct BTAccessoryManagerImpl *_btAccessoryManager;
    _Bool _btConnectionDevicesInitialized;
    _Bool _btConnectionEventsNeeded;
    struct BTSessionImpl *_btSession;
    _Bool _btSessionAddedServiceCallback;
    _Bool _btSessionAttaching;
    _Bool _btSessionNeeded;
    _Bool _btSessionStarted;
    struct BTLocalDeviceImpl *_btLocalDevice;
    NSData *_btLocalDeviceAddr;
    _Bool _btLocalDeviceAddrNeeded;
    struct {
        CDUnknownFunctionPointerType statusEvent;
        CDUnknownFunctionPointerType leTestStopped;
        CDUnknownFunctionPointerType afhMapChanged;
    } _btLocalDeviceCallbacks;
    _Bool _btLocalDeviceCallbacksNeeded;
    _Bool _btLocalDeviceCallbacksRegistered;
    struct BTPairingAgentImpl *_btPairingAgent;
    _Bool _btPairingAgentNeeded;
    _Bool _btPairingAgentStarted;
    struct NSMutableDictionary *_btConnectedDevices;
    struct NSMutableDictionary *_btPairedDevices;
    _Bool _btPairedDevicesInitialized;
    struct NSMutableArray *_findDeviceRequests;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    struct LogCategory *_ucat;
    int _bluetoothState;
    unsigned int _flags;
    unsigned int _statusFlags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_label;
    id /* block */ _bluetoothAddressChangedHandler;
    id /* block */ _bluetoothStateChangedHandler;
    id /* block */ _deviceConnectedHandler;
    id /* block */ _deviceDisconnectedHandler;
    id /* block */ _devicePairedHandler;
    id /* block */ _deviceUnpairedHandler;
    id /* block */ _interruptionHandler;
    id /* block */ _invalidationHandler;
}

@property(copy, nonatomic) id /* block */ invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) id /* block */ interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(copy, nonatomic) id /* block */ deviceUnpairedHandler; // @synthesize deviceUnpairedHandler=_deviceUnpairedHandler;
@property(copy, nonatomic) id /* block */ devicePairedHandler; // @synthesize devicePairedHandler=_devicePairedHandler;
@property(copy, nonatomic) id /* block */ deviceDisconnectedHandler; // @synthesize deviceDisconnectedHandler=_deviceDisconnectedHandler;
@property(copy, nonatomic) id /* block */ deviceConnectedHandler; // @synthesize deviceConnectedHandler=_deviceConnectedHandler;
@property(copy, nonatomic) id /* block */ bluetoothStateChangedHandler; // @synthesize bluetoothStateChangedHandler=_bluetoothStateChangedHandler;
@property(copy, nonatomic) id /* block */ bluetoothAddressChangedHandler; // @synthesize bluetoothAddressChangedHandler=_bluetoothAddressChangedHandler;
@property(nonatomic) unsigned int statusFlags; // @synthesize statusFlags=_statusFlags;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) int bluetoothState; // @synthesize bluetoothState=_bluetoothState;
- (void)updateStatusFlags;
- (void)updateDevice:(id)arg1 btDevice:(struct BTDeviceImpl *)arg2;
- (void)peripheralManagerDidUpdateState:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_handlePairingStatusChanged;
- (void)_handleDeviceDisconnected:(struct BTDeviceImpl *)arg1;
- (void)_handleDeviceConnected:(struct BTDeviceImpl *)arg1;
- (void)_handleConnectedDevicesInit;
- (void)_handleBluetoothAddressChanged;
- (id)_createCUBluetoothDeviceWithBTDevice:(struct BTDeviceImpl *)arg1;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)_btAccessoryPlacementChanged:(struct BTAccessoryManagerImpl *)arg1 device:(struct BTDeviceImpl *)arg2;
- (void)_btEnsureStopped;
- (void)_btEnsureStarted;
- (void)_processFindDeviceRequests;
- (void)_findDeviceByAddress:(CDStruct_83abfce7)arg1 completion:(id /* block */)arg2;
- (void)findDeviceByAddress:(CDStruct_83abfce7)arg1 completion:(id /* block */)arg2;
- (void)_invalidated;
- (void)invalidate;
- (void)_interrupted;
- (void)activate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
