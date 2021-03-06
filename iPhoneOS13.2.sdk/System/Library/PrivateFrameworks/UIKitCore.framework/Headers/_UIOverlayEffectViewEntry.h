//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIVisualEffectViewEntry.h>

@class NSString, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface _UIOverlayEffectViewEntry : _UIVisualEffectViewEntry
{
    NSString *_filterType;
    UIColor *_color;
    UIImage *_image;
    double _alpha;
}

+ (id)newEntryWithFilterType:(id)arg1 image:(id)arg2 alpha:(double)arg3;
+ (id)newEntryWithFilterType:(id)arg1 color:(id)arg2 alpha:(double)arg3;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) UIColor *color; // @synthesize color=_color;
@property(copy, nonatomic) NSString *filterType; // @synthesize filterType=_filterType;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)canTransitionToEffect:(id)arg1;
- (void)removeEffectFromView:(id)arg1;
- (void)applyIdentityEffectToView:(id)arg1;
- (void)applyRequestedEffectToView:(id)arg1;
- (void)addEffectToView:(id)arg1;

@end

