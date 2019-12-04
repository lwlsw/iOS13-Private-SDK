//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class VKMapView;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface MIController : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_connection;
    VKMapView *_mapView;
    _Bool _isActive;
}

+ (id)sharedController;
@property(readonly, nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
- (void)decodeDebugTreeData:(id)arg1;
- (void)sendData:(id)arg1;
- (void)recievedData:(id)arg1;
- (void)handleXPCEvent:(id)arg1;
- (void)deactivateController;
- (void)activateController:(id)arg1;
- (id)init;

@end
