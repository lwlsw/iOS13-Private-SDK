//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _PASLock, _PASNotificationToken;

@interface PPNamedEntityToTopicMapping : NSObject
{
    _PASLock *_lock;
    _PASNotificationToken *_assetUpdateNotificationToken;
}

+ (id)_filesystemAssetPath;
+ (id)currentTrieSha256;
+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)dealloc;
- (id)mappedTopicForEntity:(id)arg1;
- (id)init;
- (BOOL)_loadAssetData;

@end

