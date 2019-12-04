//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface NTKFaceSnapshotCache : NSObject
{
    NSMutableDictionary *_snapshots;
    NSMapTable *_callbacks;
    NSMapTable *_faceQOS;
    NSMapTable *_callCount;
    NSObject<OS_dispatch_queue> *_snapshotQueue;
}

+ (id)snapshotCache;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *snapshotQueue; // @synthesize snapshotQueue=_snapshotQueue;
@property(readonly, nonatomic) NSMapTable *callCount; // @synthesize callCount=_callCount;
@property(readonly, nonatomic) NSMapTable *faceQOS; // @synthesize faceQOS=_faceQOS;
@property(readonly, nonatomic) NSMapTable *callbacks; // @synthesize callbacks=_callbacks;
@property(readonly, nonatomic) NSMutableDictionary *snapshots; // @synthesize snapshots=_snapshots;
- (void)_invokeCallbacksOfFace:(id)arg1 withSnapshot:(id)arg2;
- (void)_snapshotProcessInterrupted:(id)arg1;
- (void)_attemptSnapshotOfFace:(id)arg1;
- (void)fetchSnapshotOfFace:(id)arg1 atQOS:(unsigned int)arg2 completion:(id /* block */)arg3;
- (id)cachedSnapshotOfFace:(id)arg1;
- (void)dealloc;
- (id)init;

@end
