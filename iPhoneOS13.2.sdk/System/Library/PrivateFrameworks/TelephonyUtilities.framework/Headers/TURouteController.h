//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSHashTable, TURoute;
@protocol OS_dispatch_queue, TURouteControllerActions;

@interface TURouteController : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    id <TURouteControllerActions> _actionsDelegate;
    NSHashTable *_delegates;
    NSDictionary *_routesByUniqueIdentifier;
}

@property(copy, nonatomic) NSDictionary *routesByUniqueIdentifier; // @synthesize routesByUniqueIdentifier=_routesByUniqueIdentifier;
@property(readonly, nonatomic) NSHashTable *delegates; // @synthesize delegates=_delegates;
@property(readonly, nonatomic) __weak id <TURouteControllerActions> actionsDelegate; // @synthesize actionsDelegate=_actionsDelegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)handleServerDisconnect;
- (void)handleServerReconnect;
- (void)handleRoutesByUniqueIdentifierUpdated:(id)arg1;
- (void)requeryRoutes;
- (void)pickRouteWhenAvailableWithUniqueIdentifier:(id)arg1;
- (void)pickRouteWithUniqueIdentifier:(id)arg1;
- (void)pickRoute:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
@property(readonly, copy, nonatomic) TURoute *speakerRoute;
@property(readonly, copy, nonatomic) TURoute *receiverRoute;
@property(readonly, copy, nonatomic) TURoute *pickedRoute;
@property(readonly, copy, nonatomic) NSArray *routes;
- (id)initWithActionsDelegate:(id)arg1 serialQueue:(id)arg2;

@end
