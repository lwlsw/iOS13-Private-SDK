//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIImageContent.h>

__attribute__((visibility("hidden")))
@interface _UIImageIOSurfaceContent : _UIImageContent
{
//     struct __IOSurface _surfaceRef;
}

- (BOOL)canProvideCGImage;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (CGSize)sizeInPixels;
- (BOOL)isIOSurface;
// - (struct __IOSurface )IOSurface;
- (void)dealloc;
- (id)initWithScale:(double)arg1;
// - (id)initWithIOSurface:(struct __IOSurface )arg1 scale:(double)arg2;

@end

