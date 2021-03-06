//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIFocusRegionMapEntry.h>

@protocol _UILegacyFocusRegion;

__attribute__((visibility("hidden")))
@interface _UIFocusableRegionMapEntry : _UIFocusRegionMapEntry
{
    BOOL _isFocusGuide;
    BOOL _focusCandidate;
    id <_UILegacyFocusRegion> _focusableRegion;
}

@property(nonatomic, getter=isFocusCandidate) BOOL focusCandidate; // @synthesize focusCandidate=_focusCandidate;
@property(nonatomic) BOOL isFocusGuide; // @synthesize isFocusGuide=_isFocusGuide;
@property(nonatomic) __weak id <_UILegacyFocusRegion> focusableRegion; // @synthesize focusableRegion=_focusableRegion;
// - (void).cxx_destruct;
- (id)description;
- (void)drawVisualRepresentationInContext:(CGContextRef )arg1 imageFrame:(CGRect)arg2 isFinal:(BOOL)arg3;
- (id)visualRepresentationColor;
// - (id)copyWithZone:(_NSZone )arg1;

@end

