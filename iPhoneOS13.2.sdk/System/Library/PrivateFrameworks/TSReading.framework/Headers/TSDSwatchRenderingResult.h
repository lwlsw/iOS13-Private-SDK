//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSDSwatchRenderingResult : NSObject
{
    CGImageRef foreground;
    CGImageRef background;
}

+ (id)renderingResultWithForeground:(CGImageRef)arg1 background:(CGImageRef)arg2;
@property(readonly, nonatomic) CGImageRef background; // @synthesize background;
@property(readonly, nonatomic) CGImageRef foreground; // @synthesize foreground;
- (void)dealloc;

@end

