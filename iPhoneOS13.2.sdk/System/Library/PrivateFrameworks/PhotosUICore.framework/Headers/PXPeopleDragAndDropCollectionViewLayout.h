//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSIndexPath, NSTimer;
@protocol PXPeopleDragAndDropCollectionViewDelegateLayout;

@interface PXPeopleDragAndDropCollectionViewLayout : UICollectionViewFlowLayout
{
    BOOL _performActualRearrange;
    NSTimer *_dragPauseTimer;
    NSIndexPath *_dragIndexPathForMerge;
    NSIndexPath *_targetIndexPathForMerge;
    CGPoint _lastDragPoint;
    CGPoint _currentPosition;
}

@property(retain, nonatomic) NSIndexPath *targetIndexPathForMerge; // @synthesize targetIndexPathForMerge=_targetIndexPathForMerge;
@property(retain, nonatomic) NSIndexPath *dragIndexPathForMerge; // @synthesize dragIndexPathForMerge=_dragIndexPathForMerge;
@property(nonatomic) BOOL performActualRearrange; // @synthesize performActualRearrange=_performActualRearrange;
@property(nonatomic) CGPoint currentPosition; // @synthesize currentPosition=_currentPosition;
@property(nonatomic) CGPoint lastDragPoint; // @synthesize lastDragPoint=_lastDragPoint;
@property(retain, nonatomic) NSTimer *dragPauseTimer; // @synthesize dragPauseTimer=_dragPauseTimer;
// - (void).cxx_destruct;
- (void)_cancelDragPauseTimer;
- (void)_updateDragPause;
- (void)_potentialMergeWithDragIndexPath:(id)arg1 ontoIndexPath:(id)arg2 withPosition:(CGPoint)arg3;
- (void)dealloc;
@property(readonly, nonatomic) id <PXPeopleDragAndDropCollectionViewDelegateLayout> mergeDelegate;
- (BOOL)performMergeIfPossible;
- (id)targetIndexPathForInteractivelyMovingItem:(id)arg1 withPosition:(CGPoint)arg2;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg1 withTargetPosition:(CGPoint)arg2;
- (id)init;

@end

