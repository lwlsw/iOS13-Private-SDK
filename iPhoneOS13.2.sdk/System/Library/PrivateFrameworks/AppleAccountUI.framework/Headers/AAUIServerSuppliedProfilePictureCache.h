//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AAUIServerSuppliedProfilePictureCache : NSObject
{
    NSMutableDictionary *_personIDToEntryMap;
    double _pictureDiameter;
}

+ (id)sharedCache;
// - (void).cxx_destruct;
- (BOOL)updateProfilePicture:(id)arg1 didReceiveNewPicture:(BOOL)arg2 serverCacheTag:(id)arg3 forPersonID:(id)arg4;
- (void)profilePictureForPersonID:(id)arg1 diameter:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (id)profilePictureForPersonID:(id)arg1 diameter:(double)arg2 serverFetchBlock:(CDUnknownBlockType)arg3;
- (void)_ensureMinimumPictureDiameter_mustBeSynchronized:(double)arg1;
@property(readonly, nonatomic) double pictureDiameter;
- (id)init;

@end

