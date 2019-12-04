//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface HMDPowerManager : HMFObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _networkInterfaceActive;
    _Bool _networkAccessRequired;
    unsigned int _powerAssertion;
    struct __SCDynamicStore *_scStore;
    void *_scContext;
    _Bool _started;
}

@property(nonatomic, getter=isNetworkAccessRequired) _Bool networkAccessRequired; // @synthesize networkAccessRequired=_networkAccessRequired;
- (void)_ensureNetworkInterfaceMonitorStopped;
- (int)_ensureNetworkInterfaceMonitorStarted;
- (void)_update;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)init;

@end
