//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUIPRLikenessProvider-Protocol.h>

@class CNCache;
@protocol CNScheduler;

@interface CNUIPRLikenessLoadingPlaceholderProvider : NSObject <CNUIPRLikenessProvider>
{
    id <CNScheduler> _resourceLock;
    CNCache *_cache;
}

@property(readonly, nonatomic) CNCache *cache; // @synthesize cache=_cache;
@property(readonly, nonatomic) id <CNScheduler> resourceLock; // @synthesize resourceLock=_resourceLock;
// - (void).cxx_destruct;
- (NSUInteger)_cnui_likenessType;
- (id)_cnui_likenessForSize:(CGSize)arg1 scale:(double)arg2;
- (CGImageRef)_cnui_roundedRectImageForSize:(CGSize)arg1 scale:(double)arg2;
- (CGImageRef)_cnui_circularImageForSize:(CGSize)arg1 scale:(double)arg2;
- (CGImageRef)renderRoundedRectImageForSize:(CGSize)arg1 scale:(double)arg2;
- (CGImageRef)renderCircularImageForSize:(CGSize)arg1 scale:(double)arg2;
- (id)init;

@end

