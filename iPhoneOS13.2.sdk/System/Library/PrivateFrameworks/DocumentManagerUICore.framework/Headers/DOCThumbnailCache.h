//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, NSMapTable;

@interface DOCThumbnailCache : NSObject
{
    NSMapTable *_cachedThumbnailItems;
    NSCache *_recentlyUsedItems;
}

@property(readonly, nonatomic) NSCache *recentlyUsedItems; // @synthesize recentlyUsedItems=_recentlyUsedItems;
@property(readonly, nonatomic) NSMapTable *cachedThumbnailItems; // @synthesize cachedThumbnailItems=_cachedThumbnailItems;
// - (void).cxx_destruct;
- (void)clear;
- (id)init;

@end

