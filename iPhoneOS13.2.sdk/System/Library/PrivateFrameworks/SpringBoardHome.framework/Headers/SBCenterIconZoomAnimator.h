//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBIconZoomAnimator.h>

#import <SpringBoardHome/SBIconListLayoutDelegate-Protocol.h>
#import <SpringBoardHome/SBIconListModelObserver-Protocol.h>

@class SBFolderController, UIView;
@protocol SBDockOffscreenFractionModifying;

@interface SBCenterIconZoomAnimator : SBIconZoomAnimator <SBIconListLayoutDelegate, SBIconListModelObserver>
{
    UIView *_zoomView;
    UIView *_folderView;
    double _iconZoomedZ;
    UIView *_extraViewsContainer;
    double _centerRow;
    double _centerCol;
    CGPoint _cameraPosition;
    BOOL _animatingIcons;
    id <SBDockOffscreenFractionModifying> _dockOffscreenFractionModifier;
}

@property(readonly, nonatomic) BOOL animatingIcons; // @synthesize animatingIcons=_animatingIcons;
@property(readonly, nonatomic) double centerCol; // @synthesize centerCol=_centerCol;
@property(readonly, nonatomic) double centerRow; // @synthesize centerRow=_centerRow;
@property(readonly, nonatomic) CGPoint cameraPosition; // @synthesize cameraPosition=_cameraPosition;
@property(readonly, nonatomic) UIView *zoomView; // @synthesize zoomView=_zoomView;
@property(retain, nonatomic) id <SBDockOffscreenFractionModifying> dockOffscreenFractionModifier; // @synthesize dockOffscreenFractionModifier=_dockOffscreenFractionModifier;
// - (void).cxx_destruct;
- (void)_calculateCentersAndCameraPosition;
- (void)_calculateCenters;
- (id)_animationFactoryForFolderView;
- (id)_animationFactoryForDock;
- (id)_animationFactoryForIcon:(id)arg1;
- (void)_positionView:(id)arg1 forIcon:(id)arg2;
- (void)iconList:(id)arg1 didRemoveIcon:(id)arg2;
- (void)iconList:(id)arg1 didMoveIcon:(id)arg2;
- (void)iconList:(id)arg1 didReplaceIcon:(id)arg2 withIcon:(id)arg3;
- (void)iconList:(id)arg1 didAddIcon:(id)arg2;
- (void)iconListViewIsNotDisplayingAnyIcons:(id)arg1;
//  (CGPoint)iconListView:(id)arg1 originForIconCoordinate:(struct SBIconCoordinate)arg2 proposedOrigin:(CGPoint)arg3;
- (void)enumerateExtraViewsWithHandler:(CDUnknownBlockType)arg1;
- (double)_iconZoomDelay;
- (void)_performAnimationToFraction:(double)arg1 withCentralAnimationSettings:(id)arg2 delay:(double)arg3 alreadyAnimating:(BOOL)arg4 sharedCompletion:(CDUnknownBlockType)arg5;
- (NSUInteger)_numberOfSignificantAnimations;
- (void)_cleanupAnimationIncludingDock:(BOOL)arg1;
- (void)_cleanupAnimation;
- (double)_zPositionForView:(id)arg1 center:(CGPoint)arg2 andFraction:(double)arg3;
- (void)_updateDockForFraction:(double)arg1;
- (void)_setAnimationFraction:(double)arg1 withCenter:(CGPoint)arg2;
- (void)_setAnimationFraction:(double)arg1;
- (void)setFraction:(double)arg1 withCenter:(CGPoint)arg2;
- (void)_prepareAnimation;
@property(readonly, nonatomic) SBFolderController *folderController;
- (id)initWithFolderController:(id)arg1;

@end

