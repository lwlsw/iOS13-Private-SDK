//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CNUIImageProvider : NSObject
{
}

+ (id)cacheKeyForImageResourceName:(id)arg1 template:(BOOL)arg2;
+ (id)uncachedImageForResource:(id)arg1 template:(BOOL)arg2;
+ (id)imageForResource:(id)arg1 template:(BOOL)arg2;
+ (id)imageForResource:(id)arg1 template:(BOOL)arg2 onCacheMiss:(CDUnknownBlockType)arg3;
+ (id)imageForResource:(id)arg1;

@end

