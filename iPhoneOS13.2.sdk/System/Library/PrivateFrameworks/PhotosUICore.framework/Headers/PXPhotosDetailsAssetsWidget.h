//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXActionPerformerDelegate-Protocol.h>
#import <PhotosUICore/PXAssetsSceneDelegate-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXEngineDrivenAssetsTilingLayoutDelegate-Protocol.h>
#import <PhotosUICore/PXOneUpPresentationDelegate-Protocol.h>
#import <PhotosUICore/PXPhotosDetailsInlinePlaybackControllerDelegate-Protocol.h>
#import <PhotosUICore/PXScrollViewControllerObserver-Protocol.h>
#import <PhotosUICore/PXSwipeSelectionManagerDelegate-Protocol.h>
#import <PhotosUICore/PXTileSource-Protocol.h>
#import <PhotosUICore/PXTilingControllerScrollDelegate-Protocol.h>
#import <PhotosUICore/PXTilingControllerTransitionDelegate-Protocol.h>
#import <PhotosUICore/PXUIPlayButtonTileDelegate-Protocol.h>
#import <PhotosUICore/PXUIWidget-Protocol.h>

@class NSDate, NSMutableSet, NSSet, NSString, PXAssetReference, PXBasicUIViewTileAnimator, PXLayoutGenerator, PXOneUpPresentation, PXPhotoKitAssetsDataSourceManager, PXPhotoKitUIMediaProvider, PXPhotosDataSource, PXPhotosDataSourceStressTest, PXPhotosDetailsAssetsSpecManager, PXPhotosDetailsContext, PXPhotosDetailsInlinePlaybackController, PXPhotosDetailsLoadCoordinationToken, PXSectionedLayoutEngine, PXSectionedSelectionManager, PXSwipeSelectionManager, PXTilingController, PXTouchingUIGestureRecognizer, PXUIAssetsScene, PXUITapGestureRecognizer, PXWidgetSpec, UIPinchGestureRecognizer;
@protocol PXWidgetDelegate, UIDragSession;

@interface PXPhotosDetailsAssetsWidget : NSObject <PXAssetsSceneDelegate, PXTileSource, PXTilingControllerTransitionDelegate, PXScrollViewControllerObserver, PXTilingControllerScrollDelegate, PXChangeObserver, PXEngineDrivenAssetsTilingLayoutDelegate, PXSwipeSelectionManagerDelegate, PXUIPlayButtonTileDelegate, UIGestureRecognizerDelegate, PXActionPerformerDelegate, PXPhotosDetailsInlinePlaybackControllerDelegate, UIDragInteractionDelegate, PXUIWidget, PXOneUpPresentationDelegate>
{
    NSMutableSet *_tilesInUse;
    NSDate *_loadStartDate;
    BOOL _selecting;
    BOOL _faceModeEnabled;
    BOOL _userInteractionEnabled;
    BOOL __autoPlayVideoInOneUp;
    BOOL __curate;
    BOOL __showCurationButton;
    BOOL __showSelectionButton;
    BOOL __transitionWithoutAnimation;
    BOOL _hasLoadedContentData;
    BOOL __needsAggdLoggingForCuratedAssetsCount;
    BOOL __needsAggdLoggingForUncuratedAssetsCount;
    PXOneUpPresentation *_oneUpPresentation;
    id <PXWidgetDelegate> _widgetDelegate;
    PXWidgetSpec *_spec;
    PXPhotoKitAssetsDataSourceManager *_dataSourceManager;
    PXSectionedSelectionManager *_selectionManager;
    PXPhotosDetailsAssetsSpecManager *__specManager;
    PXPhotosDetailsContext *_context;
    PXPhotosDataSource *__photosDataSource;
    PXPhotoKitUIMediaProvider *__mediaProvider;
    PXTilingController *__tilingController;
    PXBasicUIViewTileAnimator *__tileAnimator;
    PXUIAssetsScene *__assetsScene;
    PXPhotosDetailsInlinePlaybackController *__inlinePlaybackController;
    PXLayoutGenerator *__layoutGenerator;
    PXSectionedLayoutEngine *__layoutEngine;
    PXAssetReference *__navigatedAssetReference;
    NSSet *__hiddenAssetReferences;
    NSSet *__draggingAssetReferences;
    PXSwipeSelectionManager *__swipeSelectionManager;
    PXUITapGestureRecognizer *__tapGesture;
    UIPinchGestureRecognizer *__pinchGesture;
    PXTouchingUIGestureRecognizer *__touchGesture;
    PXAssetReference *__highlightedAssetReference;
    PXAssetReference *__focusedAssetReference;
    PXPhotosDetailsLoadCoordinationToken *__loadCoordinationToken;
    PXPhotosDataSourceStressTest *__currentDataSourceStressTest;
    id <UIDragSession> _dragSession;
    CGPoint __visibleOriginScrollTarget;
}

@property(retain, nonatomic) id <UIDragSession> dragSession; // @synthesize dragSession=_dragSession;
@property(nonatomic, setter=_setNeedsAggdLoggingForUncuratedAssetsCount:) BOOL _needsAggdLoggingForUncuratedAssetsCount; // @synthesize _needsAggdLoggingForUncuratedAssetsCount=__needsAggdLoggingForUncuratedAssetsCount;
@property(nonatomic, setter=_setNeedsAggdLoggingForCuratedAssetsCount:) BOOL _needsAggdLoggingForCuratedAssetsCount; // @synthesize _needsAggdLoggingForCuratedAssetsCount=__needsAggdLoggingForCuratedAssetsCount;
@property(retain, nonatomic, setter=_setCurrentDataSourceStressTest:) PXPhotosDataSourceStressTest *_currentDataSourceStressTest; // @synthesize _currentDataSourceStressTest=__currentDataSourceStressTest;
@property(nonatomic, setter=_setHasLoadedContentData:) BOOL hasLoadedContentData; // @synthesize hasLoadedContentData=_hasLoadedContentData;
@property(retain, nonatomic, setter=_setLoadCoordinationToken:) PXPhotosDetailsLoadCoordinationToken *_loadCoordinationToken; // @synthesize _loadCoordinationToken=__loadCoordinationToken;
@property(retain, nonatomic, setter=_setFocusedAssetReference:) PXAssetReference *_focusedAssetReference; // @synthesize _focusedAssetReference=__focusedAssetReference;
@property(retain, nonatomic, setter=_setHighlightedAssetReference:) PXAssetReference *_highlightedAssetReference; // @synthesize _highlightedAssetReference=__highlightedAssetReference;
@property(nonatomic, setter=_setTransitionWithoutAnimation:) BOOL _transitionWithoutAnimation; // @synthesize _transitionWithoutAnimation=__transitionWithoutAnimation;
@property(nonatomic, setter=_setVisibleOriginScrollTarget:) CGPoint _visibleOriginScrollTarget; // @synthesize _visibleOriginScrollTarget=__visibleOriginScrollTarget;
@property(readonly, nonatomic) PXTouchingUIGestureRecognizer *_touchGesture; // @synthesize _touchGesture=__touchGesture;
@property(readonly, nonatomic) UIPinchGestureRecognizer *_pinchGesture; // @synthesize _pinchGesture=__pinchGesture;
@property(readonly, nonatomic) PXUITapGestureRecognizer *_tapGesture; // @synthesize _tapGesture=__tapGesture;
@property(readonly, nonatomic) PXSwipeSelectionManager *_swipeSelectionManager; // @synthesize _swipeSelectionManager=__swipeSelectionManager;
@property(nonatomic, setter=_setShowSelectionButton:) BOOL _showSelectionButton; // @synthesize _showSelectionButton=__showSelectionButton;
@property(nonatomic, setter=_setShowCurationButton:) BOOL _showCurationButton; // @synthesize _showCurationButton=__showCurationButton;
@property(nonatomic, setter=_setCurate:) BOOL _curate; // @synthesize _curate=__curate;
@property(retain, nonatomic, setter=_setDraggingAssetReferences:) NSSet *_draggingAssetReferences; // @synthesize _draggingAssetReferences=__draggingAssetReferences;
@property(retain, nonatomic, setter=_setHiddenAssetReferences:) NSSet *_hiddenAssetReferences; // @synthesize _hiddenAssetReferences=__hiddenAssetReferences;
@property(readonly, nonatomic) BOOL _autoPlayVideoInOneUp; // @synthesize _autoPlayVideoInOneUp=__autoPlayVideoInOneUp;
@property(readonly, nonatomic) PXAssetReference *_navigatedAssetReference; // @synthesize _navigatedAssetReference=__navigatedAssetReference;
@property(retain, nonatomic, setter=_setLayoutEngine:) PXSectionedLayoutEngine *_layoutEngine; // @synthesize _layoutEngine=__layoutEngine;
@property(retain, nonatomic, setter=_setLayoutGenerator:) PXLayoutGenerator *_layoutGenerator; // @synthesize _layoutGenerator=__layoutGenerator;
@property(readonly, nonatomic) PXPhotosDetailsInlinePlaybackController *_inlinePlaybackController; // @synthesize _inlinePlaybackController=__inlinePlaybackController;
@property(readonly, nonatomic) PXUIAssetsScene *_assetsScene; // @synthesize _assetsScene=__assetsScene;
@property(readonly, nonatomic) PXBasicUIViewTileAnimator *_tileAnimator; // @synthesize _tileAnimator=__tileAnimator;
@property(readonly, nonatomic) PXTilingController *_tilingController; // @synthesize _tilingController=__tilingController;
@property(readonly, nonatomic) PXPhotoKitUIMediaProvider *_mediaProvider; // @synthesize _mediaProvider=__mediaProvider;
@property(retain, nonatomic, setter=_setPhotosDataSource:) PXPhotosDataSource *_photosDataSource; // @synthesize _photosDataSource=__photosDataSource;
@property(retain, nonatomic) PXPhotosDetailsContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) PXSectionedSelectionManager *_selectionManager; // @synthesize _selectionManager;
@property(readonly, nonatomic) PXPhotoKitAssetsDataSourceManager *_dataSourceManager; // @synthesize _dataSourceManager;
@property(nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled; // @synthesize userInteractionEnabled=_userInteractionEnabled;
@property(nonatomic, getter=isFaceModeEnabled) BOOL faceModeEnabled; // @synthesize faceModeEnabled=_faceModeEnabled;
@property(nonatomic, getter=isSelecting) BOOL selecting; // @synthesize selecting=_selecting;
@property(retain, nonatomic) PXWidgetSpec *spec; // @synthesize spec=_spec;
@property(nonatomic) __weak id <PXWidgetDelegate> widgetDelegate; // @synthesize widgetDelegate=_widgetDelegate;
@property(retain, nonatomic) PXOneUpPresentation *oneUpPresentation; // @synthesize oneUpPresentation=_oneUpPresentation;
// - (void).cxx_destruct;
- (BOOL)actionPerformer:(id)arg1 dismissViewController:(NSObject )arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)actionPerformer:(id)arg1 presentViewController:(NSObject )arg2;
- (id)dragInteraction:(id)arg1 sessionForAddingItems:(id)arg2 withTouchAtPoint:(CGPoint)arg3;
- (void)dragInteraction:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3;
- (void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(NSUInteger)arg3;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(CGPoint)arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (void)_presentConfidentialityWarning;
- (BOOL)_canDragAssetReferences:(id)arg1;
- (void)_updateDraggingAssetReferencesWithDataSource:(id)arg1;
- (BOOL)_addAssetReferencesToDrag:(id)arg1;
- (id)_dragItemForAssetReference:(id)arg1;
- (id)_imageTileForDragItem:(id)arg1;
- (BOOL)_canDragOut;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (CGSize)minimumItemSizeForPlaybackInController:(id)arg1;
- (BOOL)shouldEnablePlaybackForController:(id)arg1;
//  (struct PXSimpleIndexPath)swipeSelectionManager:(id)arg1 itemIndexPathClosestAboveLocation:(CGPoint)arg2;
//  (struct PXSimpleIndexPath)swipeSelectionManager:(id)arg1 itemIndexPathClosestLeadingLocation:(CGPoint)arg2;
//  (struct PXSimpleIndexPath)swipeSelectionManager:(id)arg1 itemIndexPathAtLocation:(CGPoint)arg2;
- (BOOL)swipeSelectionManager:(id)arg1 shouldBeginSelectionAtLocation:(CGPoint)arg2;
- (void)swipeSelectionManagerAutomaticallyTransitionToMultiSelectMode:(id)arg1;
- (BOOL)swipeSelectionManagerIsInMultiSelectMode:(id)arg1;
- (void)scrollViewControllerContentBoundsDidChange:(id)arg1;
- (void)scrollViewControllerDidScroll:(id)arg1;
- (void)scrollViewControllerWillBeginScrolling:(id)arg1;
- (BOOL)oneUpPresentationShouldAutoPlay:(id)arg1;
- (void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2;
- (void)oneUpPresentation:(id)arg1 scrollAssetReferenceToVisible:(id)arg2;
- (id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2;
- (id)oneUpPresentation:(id)arg1 currentImageForAssetReference:(id)arg2;
- (id)oneUpPresentationActionManagerForPreviewing:(id)arg1;
- (id)oneUpPresentationInitialAssetReference:(id)arg1;
- (id)oneUpPresentationPhotosDetailsContext:(id)arg1;
- (id)oneUpPresentationMediaProvider:(id)arg1;
- (id)oneUpPresentationDataSourceManager:(id)arg1;
- (long long)oneUpPresentationOrigin:(id)arg1;
- (void)playButtonTileWasTapped:(id)arg1;
- (void)_handleTapOnAssetReference:(id)arg1 autoPlayVideo:(BOOL)arg2;
- (void)handleTouch:(id)arg1;
- (void)handlePinch:(id)arg1;
- (void)handleTap:(id)arg1;
- (id)tilingController:(id)arg1 transitionAnimationCoordinatorForChange:(id)arg2;
- (id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2;
- (CGPoint)tilingController:(id)arg1 targetVisibleOriginForLayout:(id)arg2 proposedVisibleOrigin:(CGPoint)arg3;
- (CGPoint)tilingController:(id)arg1 initialVisibleOriginForLayout:(id)arg2;
//  (void)checkInTile:(void )arg1 withIdentifier:(struct PXTileIdentifier)arg2;
//  (void )checkOutTileForIdentifier:(struct PXTileIdentifier)arg1 layout:(id)arg2;
- (id)assetsScene:(id)arg1 tileIdentifierConverterForChange:(id)arg2;
- (id)assetsScene:(id)arg1 layoutForDataSource:(id)arg2;
- (void)assetsScene:(id)arg1 didTransitionToDataSource:(id)arg2;
- (void)assetsScene:(id)arg1 willTransitionToDataSource:(id)arg2;
- (void)observable:(id)arg1 didChange:(NSUInteger)arg2 context:(void )arg3;
//  (CGRect)engineDrivenLayout:(id)arg1 contentsRectForItemAtIndexPath:(struct PXSimpleIndexPath)arg2 forAspectRatio:(double)arg3;
//  (double)engineDrivenLayout:(id)arg1 zPositionForItemAtIndexPath:(struct PXSimpleIndexPath)arg2;
//  (double)engineDrivenLayout:(id)arg1 aspectRatioForItemAtIndexPath:(struct PXSimpleIndexPath)arg2;
- (void)commitPreviewViewController:(id)arg1;
- (void)didDismissPreviewViewController:(id)arg1 committing:(BOOL)arg2;
- (NSObject )previewViewControllerAtLocation:(CGPoint)arg1 fromSourceView:(NSObject )arg2;
- (BOOL)containsPoint:(CGPoint)arg1 forCoordinateSpace:(id)arg2;
- (id)imageViewBasicTileForPreviewingAtPoint:(CGPoint)arg1;
- (void)contentViewDidDisappear;
- (void)contentViewWillAppear;
- (void)environmentDidUpdateFocusInContext:(id)arg1;
@property(readonly, nonatomic) BOOL supportsFaceMode;
@property(readonly, nonatomic) BOOL supportsSelection;
- (void)userDidSelectDisclosureControl;
- (void)userDidSelectSubtitle;
- (void)_userDidSelectCurationButton;
@property(readonly, nonatomic) BOOL allowUserInteractionWithSubtitle;
@property(readonly, nonatomic) NSString *localizedSubtitle;
@property(readonly, nonatomic) NSString *localizedDisclosureTitle;
@property(readonly, nonatomic) NSString *localizedTitle;
- (id)_curationButtonTitle;
- (id)_subtitle;
- (id)_title;
@property(readonly, nonatomic) long long contentLayoutStyle;
@property(readonly, nonatomic) PXTilingController *contentTilingController;
- (void)loadContentData;
- (id)_extendedTraitCollection;
- (void)_updateDebugBadgeManager;
@property(readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
- (id)dataSourceManager;
- (void)_fallBackByTogglingCurationIfNeeded;
- (id)_regionOfInterestForAssetReference:(id)arg1;
- (void)_performTilingChangeWithoutAnimationTransition:(CDUnknownBlockType)arg1;
- (BOOL)_isLocationWithinCurrentLayoutBounds:(CGPoint)arg1;
- (id)_assetReferenceAtPoint:(CGPoint)arg1 padding:(UIEdgeInsets)arg2;
//  (struct PXSimpleIndexPath)_assetIndexPathAtLocation:(CGPoint)arg1 padding:(UIEdgeInsets)arg2;
- (void)_logAggdCounterForAssetCountsIfNecessary;
- (void)_updateShowSelectionButton;
- (void)_updateShowCurationButton;
- (void)_updateHasLoadedContentData;
- (void)_updateTilingLayoutIfNeeded;
- (void)_configureLayout:(id)arg1;
- (id)_createNewLayout;
- (void)_updateLayoutEngineIfNeeded;
- (void)_invalidateLayoutGenerator;
- (void)_loadTilingController;
@property(readonly, nonatomic) PXPhotosDetailsAssetsSpecManager *_specManager; // @synthesize _specManager=__specManager;
- (void)dealloc;
- (id)init;
- (void)_setNavigatedAssetReference:(id)arg1 autoPlayVideo:(BOOL)arg2;

@end

