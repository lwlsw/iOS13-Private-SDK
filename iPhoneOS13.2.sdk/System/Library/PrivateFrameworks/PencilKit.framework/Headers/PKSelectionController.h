//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSUUID, PKSelectionView, PKSpaceInsertionController, PKStrokeSelection, PKTiledView, UIDropInteraction;
@protocol OS_dispatch_queue;

@interface PKSelectionController : NSObject <UIDropInteractionDelegate_Private>
{
    CGPoint _dropPosition;
    NSUUID *_previousDrawingUUIDForSelection;
    int _selectionViewCount;
    double _cachedStrokeImageScale;
    PKSpaceInsertionController *_spaceInsertionController;
    UIDropInteraction *_dropInteraction;
    BOOL _hasCurrentSelection;
    BOOL _isCurrentlyAddingSpace;
    PKTiledView *_tiledView;
    PKStrokeSelection *_currentStrokeSelection;
    NSObject<OS_dispatch_queue> *_selectionHullQueue;
    PKSelectionView *_selectionView;
    CGAffineTransform _selectionTransform;
}

@property(retain, nonatomic) PKSelectionView *selectionView; // @synthesize selectionView=_selectionView;
@property(nonatomic) BOOL isCurrentlyAddingSpace; // @synthesize isCurrentlyAddingSpace=_isCurrentlyAddingSpace;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *selectionHullQueue; // @synthesize selectionHullQueue=_selectionHullQueue;
@property(nonatomic) CGAffineTransform selectionTransform; // @synthesize selectionTransform=_selectionTransform;
@property(retain, nonatomic) PKStrokeSelection *currentStrokeSelection; // @synthesize currentStrokeSelection=_currentStrokeSelection;
@property(nonatomic) BOOL hasCurrentSelection; // @synthesize hasCurrentSelection=_hasCurrentSelection;
@property(nonatomic) __weak PKTiledView *tiledView; // @synthesize tiledView=_tiledView;
// - (void).cxx_destruct;
- (CGPoint)closestPointForPastedSelectionRect:(CGRect)arg1 withDrawing:(id )arg2;
- (id)_attachmentForSelectionRect:(CGRect)arg1;
- (CGRect)_extendedBoundsForDrawing:(id)arg1;
- (CGRect)_visibleOnscreenBoundsForDrawing:(id)arg1;
- (void)applyCommand:(id)arg1 toDrawing:(id)arg2;
- (CGPoint)_selectionOffsetForDrawing:(id)arg1;
- (id)_drawingForSelectionRect:(CGRect)arg1;
- (id)_drawingForLiveAttachment;
- (BOOL)_liveDrawingIsAtEndOfDocument;
- (BOOL)_isValidDropPointForStrokes:(CGPoint)arg1;
- (id)drawingForUUID:(id)arg1;
- (id)_visibleStrokesWithinExtendedBounds:(id)arg1 forDrawing:(id)arg2;
- (CGRect)_scrollViewVisibleBounds;
- (CGRect)boundsForDrawing:(id)arg1;
- (CGRect)_scrollViewDrawingFrame;
- (CGPoint)_pointInStrokeSpace:(CGPoint)arg1 inDrawing:(id)arg2;
- (void)_setAdditionalStrokes:(id)arg1 inDrawing:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_resetSelectedStrokeStateForRenderer;
- (void)_selectionRefreshWithChangeToDrawings:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_selectionRefreshWithChangeToDrawings:(id)arg1;
- (id)topView;
- (CGAffineTransform)_selectionDrawingTransformForDrawing:(id)arg1;
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
- (void)didMoveStrokeSelectionToLocation:(CGPoint)arg1 transform:(CGAffineTransform)arg2;
- (long long)_dropInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (BOOL)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (BOOL)didResizeWhitespace;
- (void)dismissSpacingResizeHandles;
- (void)hideStrokes:(id)arg1 inDrawing:(id)arg2;
- (id)strokesForSpaceInsertionWithStrokeSelection:(id)arg1 inDrawing:(id)arg2 offset:(double)arg3;
- (void)didBeginSpaceInsertionWithLassoStroke:(id)arg1 drawing:(id)arg2;
- (id)setupSpaceInsertionControllerIfNecessary;
- (void)updateCurrentStrokeSelectionTransformForLocation:(id)arg1 atLocation:(CGPoint)arg2 offsetInTouchView:(CGPoint)arg3 transform:(CGAffineTransform)arg4;
- (CGAffineTransform)_selectionTransformForStrokes:(id)arg1 atLocation:(CGPoint)arg2 dragOffsetInDragView:(CGPoint)arg3 transform:(CGAffineTransform)arg4 constrainSelection:(BOOL)arg5 inDrawing:(id)arg6;
- (void)_createSelectionViewForDropSession:(id)arg1 removeFromSource:(BOOL)arg2 withStrokeSelection:(id)arg3;
- (void)_createSelectionViewForDropSession:(id)arg1 removeFromSource:(BOOL)arg2;
- (void)_pasteStrokeSelection:(id)arg1 atPoint:(CGPoint)arg2 inDrawing:(id)arg3;
- (void)changeColorOfSelection:(id)arg1;
- (void)paste:(id)arg1;
- (void)duplicate:(id)arg1;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (void)delete:(id)arg1;
- (void)commitStrokesWithCompletion:(CDUnknownBlockType)arg1;
- (void)clearSelectionIfNecessaryAnimated:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)clearSelectionIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)clearSelectionIfNecessary;
- (void)_addItemsToPasteboard:(id)arg1;
- (void)resetStrokesAndClearSelection;
- (void)registerCommandWithUndoManager:(id)arg1;
- (void)eraseSelection;
- (void)didScroll:(CGPoint)arg1;
- (id)_newInk:(id)arg1 withChange:(id)arg2;
- (id)_commitStrokeSelection:(id)arg1 toDrawing:(id)arg2 selectionAction:(long long)arg3 inkChanges:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (id)_commitStrokeSelection:(id)arg1 toDrawing:(id)arg2 selectionAction:(long long)arg3;
- (id)newStrokesForSelection:(id)arg1 toDrawing:(id)arg2;
- (void)_removeSelectionViewAnimated:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_removeSelectionView;
- (id)rotateUIImage:(id)arg1 clockwise:(BOOL)arg2;
- (id)_rotateImageIfNecessary:(id)arg1;
- (void)setImageOnSelectionViewForStrokeSelection:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)generateImageForStrokeSelection:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_addViewForStrokeSelection:(id)arg1 isDragSource:(BOOL)arg2 drawing:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (CGRect)_calculateFrameForSelectionView:(id)arg1 inDrawing:(id)arg2;
- (CGSize)viewSizeForStrokeSelection:(id)arg1;
- (void)moveSelectionViewBasedOnStrokeTransform:(CGAffineTransform)arg1 drawing:(id)arg2;
- (void)didSelect:(id)arg1 lassoStroke:(id)arg2 transform:(CGAffineTransform)arg3 drawing:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)didSelect:(id)arg1 lassoStroke:(id)arg2 transform:(CGAffineTransform)arg3 drawing:(id)arg4;
- (void)didSelectStrokesNotification:(id)arg1;
- (CGPoint)intersectionPointAlongStroke:(id)arg1 fromPoint:(CGPoint)arg2 toPoint:(CGPoint)arg3;
- (id)intersectedStrokesFromStroke:(id)arg1 drawing:(id)arg2 visibleOnscreenStrokes:(id)arg3;
- (id)intersectedStrokesFromStroke:(id)arg1 drawing:(id)arg2;
@property(readonly, nonatomic) BOOL shouldClampInputPoints;
- (void)_layoutViewsIfNecessary;
- (void)dealloc;
- (id)initWithTiledView:(id)arg1;

@end

