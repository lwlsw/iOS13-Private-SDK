//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <HomeUI/HULayoutAnchorProviding-Protocol.h>

@interface UIView (HUAdditions) <HULayoutAnchorProviding>
+ (void)hu_enableAnimations:(BOOL)arg1 forBlock:(CDUnknownBlockType)arg2;
- (BOOL)hu_isDescendantOfPickerView;
- (BOOL)hu_isHomeAffordancePresent;
- (void)hu_autoSizeByConstrainingWidth:(double)arg1;
- (void)hu_traverseViewHierarchy:(CDUnknownBlockType)arg1;
- (void)hu_setFramePreservingTransform:(CGRect)arg1;
- (CGRect)hu_frameInGlobalCoordinateSpace;
- (CGPoint)hu_centerInGlobalCoordinateSpace;
@end

