//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXGDataSourceDrivenLayout-Protocol.h>
#import <PhotosUICore/PXGDiagnosticsProvider-Protocol.h>
#import <PhotosUICore/PXGSpriteIndexReferencing-Protocol.h>

@class NSArray, NSIndexSet, NSMutableArray, NSString, PXGAnchor, PXGItemsLayout, PXGReusableAccessibilityContentInfo, PXGSpriteDataStore, PXGSpriteMetadataStore, PXGSublayoutDataStore, PXGViewEnvironment;
@protocol PXGDisplayAssetSource, PXGLayoutContentSource, PXGLayoutUpdateDelegate, PXGLayoutVisibleRectDelegate;

@interface PXGLayout : NSObject <PXGDataSourceDrivenLayout, PXGSpriteIndexReferencing, PXGDiagnosticsProvider>
{
//     CDStruct_d97c9657 _updateFlags;
    NSMutableArray *_changeDetails;
    NSMutableArray *_animations;
    NSMutableArray *_transitions;
    NSMutableArray *_fences;
    NSIndexSet *_localHiddenSpriteIndexes;
    NSIndexSet *_spriteIndexesWithInvalidatedStyle;
    BOOL _isRequestingVisibleRect;
    BOOL _isUpdatingSpriteStyling;
    BOOL _isLastVisibleAreaAnchoringInformationInvalidated;
    BOOL _isPerformingWithLocalUpdate;
    BOOL _needsUpdate;
    unsigned short _referenceOptions;
    unsigned int _numberOfSprites;
    PXGSpriteDataStore *_spriteDataStore;
    PXGSublayoutDataStore *_sublayoutDataStore;
    PXGLayout *_superlayout;
    PXGViewEnvironment *_viewEnvironment;
    double _screenScale;
    double _alpha;
    NSUInteger _userInterfaceDirection;
    long long _version;
    double _lastBaseline;
    id <PXGLayoutContentSource> _contentSource;
    id _userData;
    PXGSpriteMetadataStore *_spriteMetadataStore;
    id <PXGLayoutUpdateDelegate> _updateDelegate;
    id <PXGLayoutVisibleRectDelegate> _visibleRectDelegate;
    long long _updateCount;
    id <PXGDisplayAssetSource> _displayAssetSource;
    PXGAnchor *_activeAnchor;
    PXGAnchor *_lastVisibleAreaAnchor;
    PXGReusableAccessibilityContentInfo *_accessibilityGroupElement;
    long long _numberOfDescendantAnchors;
    CGSize _referenceSize;
    CGPoint _lastScrollDirection;
    CGSize _contentSize;
    CGSize _estimatedContentSize;
    CGRect _visibleRect;
    UIEdgeInsets _safeAreaInsets;
}

@property(readonly, nonatomic) long long numberOfDescendantAnchors; // @synthesize numberOfDescendantAnchors=_numberOfDescendantAnchors;
@property(retain, nonatomic) PXGReusableAccessibilityContentInfo *accessibilityGroupElement; // @synthesize accessibilityGroupElement=_accessibilityGroupElement;
@property(retain, nonatomic) PXGAnchor *lastVisibleAreaAnchor; // @synthesize lastVisibleAreaAnchor=_lastVisibleAreaAnchor;
@property(nonatomic) CGSize estimatedContentSize; // @synthesize estimatedContentSize=_estimatedContentSize;
@property(readonly, nonatomic) PXGAnchor *activeAnchor; // @synthesize activeAnchor=_activeAnchor;
@property(nonatomic) __weak id <PXGDisplayAssetSource> displayAssetSource; // @synthesize displayAssetSource=_displayAssetSource;
@property(readonly, nonatomic) long long updateCount; // @synthesize updateCount=_updateCount;
@property(nonatomic) __weak id <PXGLayoutVisibleRectDelegate> visibleRectDelegate; // @synthesize visibleRectDelegate=_visibleRectDelegate;
@property(nonatomic) __weak id <PXGLayoutUpdateDelegate> updateDelegate; // @synthesize updateDelegate=_updateDelegate;
@property(readonly, nonatomic) PXGSpriteMetadataStore *spriteMetadataStore; // @synthesize spriteMetadataStore=_spriteMetadataStore;
@property(retain, nonatomic) id userData; // @synthesize userData=_userData;
@property(nonatomic) __weak id <PXGLayoutContentSource> contentSource; // @synthesize contentSource=_contentSource;
@property(nonatomic) double lastBaseline; // @synthesize lastBaseline=_lastBaseline;
@property(nonatomic) CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(readonly, nonatomic) unsigned int numberOfSprites; // @synthesize numberOfSprites=_numberOfSprites;
@property(readonly, nonatomic) long long version; // @synthesize version=_version;
@property(readonly, nonatomic) BOOL needsUpdate; // @synthesize needsUpdate=_needsUpdate;
@property(nonatomic) NSUInteger userInterfaceDirection; // @synthesize userInterfaceDirection=_userInterfaceDirection;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) CGPoint lastScrollDirection; // @synthesize lastScrollDirection=_lastScrollDirection;
@property(nonatomic) double screenScale; // @synthesize screenScale=_screenScale;
@property(nonatomic) UIEdgeInsets safeAreaInsets; // @synthesize safeAreaInsets=_safeAreaInsets;
@property(nonatomic) CGRect visibleRect; // @synthesize visibleRect=_visibleRect;
@property(nonatomic) unsigned short referenceOptions; // @synthesize referenceOptions=_referenceOptions;
@property(nonatomic) CGSize referenceSize; // @synthesize referenceSize=_referenceSize;
@property(retain, nonatomic) PXGViewEnvironment *viewEnvironment; // @synthesize viewEnvironment=_viewEnvironment;
@property(nonatomic) __weak PXGLayout *superlayout; // @synthesize superlayout=_superlayout;
@property(readonly, nonatomic) PXGSublayoutDataStore *sublayoutDataStore; // @synthesize sublayoutDataStore=_sublayoutDataStore;
@property(readonly, nonatomic) PXGSpriteDataStore *spriteDataStore; // @synthesize spriteDataStore=_spriteDataStore;
// - (void).cxx_destruct;
- (void)enumerateDescendantsLayoutsBreadthFirstReverseUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateDescendantsLayoutsUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSString *accessibilityLabel;
@property(readonly, nonatomic) BOOL canSelectAccessibilityGroupElementsChildren;
@property(readonly, nonatomic) BOOL canSelectAccessibilityGroupElements;
@property(readonly, nonatomic) BOOL hasBodyContent;
@property(readonly, nonatomic) BOOL canCreateAccessibilityGroupElement;
- (void)_appendDescription:(id)arg1 atLevel:(long long)arg2;
- (id)_paddingForLevel:(long long)arg1;
@property(readonly, nonatomic) NSString *recursiveDescription;
@property(readonly, copy, nonatomic) NSString *diagnosticDescription;
// @property(readonly, nonatomic) CDStruct_3fe57b01 orientedContentTransform;
@property(readonly, nonatomic) NSUInteger fullyVisibleEdgesWithDefaultTolerance;
- (NSUInteger)fullyVisibleEdgesWithTolerance:(double)arg1;
//  (struct _PXGSpriteIndexRange)spriteIndexRangeCoveringRect:(CGRect)arg1;
// - (void)_enumerateSpritesInRect:(CGRect)arg1 transform:(CDStruct_3fe57b01)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateSpritesInRect:(CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)leafSublayoutForSpriteIndex:(unsigned int)arg1;
- (id)sublayoutForSpriteIndex:(unsigned int)arg1;
- (long long)sublayoutIndexForSpriteIndex:(unsigned int)arg1;
- (id)hitTestResultForSpriteIndex:(unsigned int)arg1;
// - (void)_enumerateSpritesInRange:(struct _PXGSpriteIndexRange)arg1 transform:(CDStruct_3fe57b01)arg2 spriteOffset:(unsigned int)arg3 stop:(BOOL )arg4 usingBlock:(CDUnknownBlockType)arg5;
//  (void)enumerateSpritesInRange:(struct _PXGSpriteIndexRange)arg1 options:(NSUInteger)arg2 usingBlock:(CDUnknownBlockType)arg3;
//  (void)enumerateSpritesInRange:(struct _PXGSpriteIndexRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
// - (void)copyLayoutForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 applySpriteTransforms:(BOOL)arg2 parentTransform:(CDStruct_3fe57b01)arg3 parentSublayoutOrigin:(CGPoint)arg4 geometries:(CDStruct_3ab912e1 )arg5 styles:(CDStruct_506f5052 )arg6 infos:(CDStruct_9d1ebe49 )arg7;
// - (void)copyLayoutForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 applySpriteTransforms:(BOOL)arg2 geometries:(CDStruct_3ab912e1 )arg3 styles:(CDStruct_506f5052 )arg4 infos:(CDStruct_9d1ebe49 )arg5;
// - (void)copyLayoutForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 geometries:(CDStruct_3ab912e1 )arg2 styles:(CDStruct_506f5052 )arg3 infos:(CDStruct_9d1ebe49 )arg4;
// - (CDStruct_506f5052)styleForSpriteAtIndex:(unsigned int)arg1;
// - (CDStruct_3ab912e1)geometryForSpriteAtIndex:(unsigned int)arg1;
- (void)contentSizeDidChange;
@property(readonly, copy, nonatomic) NSArray *fences;
- (void)removeAllFences;
- (void)_addFences:(id)arg1;
- (void)addFence:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *transitions;
- (void)removeAllTransitions;
- (void)addTransition:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *animations;
- (void)removeAllAnimations;
- (void)_addAnimations:(id)arg1;
- (void)addAnimation:(id)arg1;
- (unsigned int)spriteIndexForObjectReference:(id)arg1 options:(NSUInteger)arg2 updatedObjectReference:(out id )arg3;
- (unsigned int)spriteIndexForObjectReference:(id)arg1;
- (long long)sublayoutIndexForObjectReference:(id)arg1 options:(NSUInteger)arg2 updatedObjectReference:(out id )arg3;
- (id)objectReferenceForSpriteIndex:(unsigned int)arg1;
@property(readonly, nonatomic) BOOL allowsObjectReferenceSpriteIndexLookup;
@property(readonly, nonatomic) long long anchoredSublayoutIndex;
@property(readonly, nonatomic) BOOL shouldFaultInContentAtAnchoredContentEdges;
@property(readonly, nonatomic) NSUInteger anchoredContentEdges;
- (void)sublayout:(id)arg1 didRemoveAnchor:(id)arg2;
- (void)sublayout:(id)arg1 didAddAnchor:(id)arg2;
- (void)markLastVisibleAreaAnchoringInformationForInvalidation;
- (void)_updateAnchoring;
- (void)_updateVersion;
- (void)invalidateVersion;
- (void)removeAnchor:(id)arg1;
- (void)addAnchor:(id)arg1;
@property(readonly, nonatomic) BOOL canHandleVisibleRectRejection;
- (BOOL)changeVisibleRectToProposedVisibleRect:(CGRect)arg1;
- (void)enumerateVisibleAnchoringLayoutsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateVisibleAnchoringSpriteIndexesUsingBlock:(CDUnknownBlockType)arg1;
- (void)adjustReferencedSpriteIndexesWithChangeDetails:(id)arg1 appliedToLayout:(id)arg2;
- (void)_incrementNumberOfSprites:(long long)arg1;
- (id)convertChangeDetails:(id)arg1 fromSublayout:(id)arg2;
//  (struct _PXGSpriteIndexRange)convertRange:(struct _PXGSpriteIndexRange)arg1 fromSublayout:(id)arg2;
- (void)sublayout:(id)arg1 didApplySpriteChangeDetails:(id)arg2;
- (void)didApplySpriteChangeDetails:(id)arg1;
// - (unsigned short)addResizableCapInsets:(CDStruct_0054b44d)arg1;
- (void)applySpriteChangeDetails:(id)arg1 countAfterChanges:(unsigned int)arg2 initialState:(CDUnknownBlockType)arg3 modifyState:(CDUnknownBlockType)arg4;
- (void)modifySpritesAtIndexes:(id)arg1 state:(CDUnknownBlockType)arg2;
//  (void)modifySpritesInRange:(struct _PXGSpriteIndexRange)arg1 state:(CDUnknownBlockType)arg2;
//  (void)moveSpritesInRange:(struct _PXGSpriteIndexRange)arg1 toRange:(struct _PXGSpriteIndexRange)arg2;
- (void)removeSpritesAtIndexes:(id)arg1;
//  (void)removeSpritesInRange:(struct _PXGSpriteIndexRange)arg1;
- (void)addSpritesAtIndexes:(id)arg1 initialState:(CDUnknownBlockType)arg2;
//  (void)addSpritesInRange:(struct _PXGSpriteIndexRange)arg1 initialState:(CDUnknownBlockType)arg2;
//  (struct _PXGSpriteIndexRange)addSpriteCount:(unsigned int)arg1 withInitialState:(CDUnknownBlockType)arg2;
- (unsigned int)addSpriteWithInitialState:(CDUnknownBlockType)arg1;
- (CGRect)sublayout:(id)arg1 visibleRectForRequestedVisibleRect:(CGRect)arg2;
- (void)didChangeSublayoutOrigins;
- (void)sublayoutDidChangeLastBaseline:(id)arg1;
- (void)sublayoutDidChangeContentSize:(id)arg1;
- (void)sublayoutNeedsUpdate:(id)arg1;
- (id)sublayoutAtIndex:(long long)arg1 loadIfNeeded:(BOOL)arg2;
- (void)insertSublayoutProvider:(id)arg1 atIndexes:(id)arg2;
- (void)insertSublayoutProvider:(id)arg1 inRange:(NSRange *)arg2;
- (void)willRemoveSublayout:(id)arg1;
- (void)didAddSublayout:(id)arg1;
- (void)_willAddSublayout:(id)arg1;
- (void)willFaultOutSublayout:(id)arg1;
- (void)didFaultInSublayout:(id)arg1 fromEstimatedContentSize:(CGSize)arg2;
- (void)applySublayoutChangeDetails:(id)arg1 countAfterChanges:(long long)arg2 sublayoutProvider:(id)arg3;
- (void)replaceSublayoutAtIndex:(long long)arg1 withSublayout:(id)arg2;
- (void)removeSublayoutsAtIndexes:(id)arg1;
- (void)removeSublayoutsInRange:(NSRange *)arg1;
- (void)insertSublayout:(id)arg1 atIndex:(long long)arg2;
- (void)addSublayout:(id)arg1;
@property(readonly, nonatomic) long long numberOfSublayouts;
- (void)_ensureSublayoutDataStore;
- (void)_invalidateStyleOfSpritesWithIndexes:(id)arg1;
- (void)_addHiddenSpriteIndexes:(id)arg1;
- (void)_resetHiddenSpriteIndexes;
@property(copy, nonatomic) NSIndexSet *hiddenSpriteIndexes;
- (void)userInterfaceDirectionDidChange;
- (void)alphaDidChange;
- (void)lastScrollDirectionDidChange;
- (void)screenScaleDidChange;
- (void)safeAreaInsetsDidChange;
- (void)containingScrollViewDidScroll:(CGPoint)arg1;
- (void)visibleRectDidChange;
- (void)referenceOptionsDidChange;
- (void)referenceSizeDidChange;
- (void)viewEnvironmentDidChange;
- (void)performChangesWithLocalUpdate:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL isUpdatingSpriteStyling;
- (void)updateStylingForSpritesAtIndexes:(id)arg1;
- (void)update;
- (void)updateIfNeeded;
- (void)setNeedsUpdate;
- (unsigned int)convertSpriteIndex:(unsigned int)arg1 fromLayout:(id)arg2;
- (id)commonAncestorWithLayout:(id)arg1;
- (BOOL)isDescendantOfLayout:(id)arg1;
- (CGPoint)_offsetToDescendantLayout:(id)arg1;
- (CGPoint)convertPoint:(CGPoint)arg1 fromLayout:(id)arg2;
- (CGRect)convertRect:(CGRect)arg1 fromLayout:(id)arg2;
- (CGRect)convertRect:(CGRect)arg1 fromDescendantLayout:(id)arg2;
- (CGRect)convertRect:(CGRect)arg1 toDescendantLayout:(id)arg2;
//  (struct _PXGSpriteIndexRange)convertSpriteIndexRange:(struct _PXGSpriteIndexRange)arg1 fromDescendantLayout:(id)arg2;
- (unsigned int)convertSpriteIndex:(unsigned int)arg1 fromDescendantLayout:(id)arg2;
- (unsigned int)convertSpriteIndex:(unsigned int)arg1 toDescendantLayout:(id)arg2;
//  (void)enumerateLayoutsForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 options:(NSUInteger)arg2 usingBlock:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) PXGLayout *rootLayout;
- (void)getIsAnyLayoutAnimating:(out BOOL )arg1 zoomBehavior:(out NSUInteger )arg2;
@property(readonly, nonatomic) NSUInteger zoomBehavior;
@property(readonly, nonatomic) BOOL isAnimating;
@property(readonly, nonatomic) NSMutableArray *changeDetails;
@property(readonly, nonatomic) CGRect frame;
@property(readonly, nonatomic) unsigned int childrenNumberOfSprites;
@property(readonly, nonatomic) unsigned int localNumberOfSprites;
- (void)_recycleSpriteDataStore;
- (void)_ensureSpriteDataStore;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;
@property(readonly, nonatomic) NSArray *pendingFences;
- (id)createFenceWithType:(NSUInteger)arg1;
@property(readonly, nonatomic) PXGItemsLayout *itemsLayout;
- (CGRect)anchoringRectForSpriteAtIndex:(unsigned int)arg1;
- (void)invalidateLastVisibleAreaAnchoringInformation;
- (void)clearLastVisibleAreaAnchoringInformation;
- (id)_createAnchorWithAnchor:(id)arg1 resetPriority:(BOOL)arg2;
- (id)createAnchorWithAnchor:(id)arg1;
- (id)createAnchorFromSuperlayoutWithSublayoutIndex:(long long)arg1 sublayoutPositionEdges:(NSUInteger)arg2 ignoringScrollingAnimationAnchors:(BOOL)arg3;
- (id)createAnchorForScrollingAnimationTowardsContentEdges:(NSUInteger)arg1;
- (id)createAnchorForScrollingToContentEdges:(NSUInteger)arg1 padding:(UIEdgeInsets)arg2;
- (id)_createAnchorForContentEdges:(NSUInteger)arg1 priority:(long long)arg2;
- (id)createAnchorForContentEdges:(NSUInteger)arg1;
- (id)createAnchorForScrollingSpriteForSpriteReference:(id)arg1 toScrollPosition:(NSUInteger)arg2 padding:(UIEdgeInsets)arg3 customOffset:(CDUnknownBlockType)arg4;
- (id)createAnchorForScrollingSpriteForSpriteReference:(id)arg1 toScrollPosition:(NSUInteger)arg2 padding:(UIEdgeInsets)arg3;
- (id)createAnchorForScrollingSpriteAtIndex:(unsigned int)arg1 toScrollPosition:(NSUInteger)arg2 padding:(UIEdgeInsets)arg3;
- (id)createAnchorForScrollingSpriteForObjectReference:(id)arg1 toScrollPosition:(NSUInteger)arg2 padding:(UIEdgeInsets)arg3;
- (id)_createAnchorWithPriority:(long long)arg1 constraints:(CDUnknownBlockType)arg2;
- (id)createAnchorWithConstraints:(CDUnknownBlockType)arg1;
- (id)createAnchorForSpriteReferences:(id)arg1;
- (id)createAnchorForSpriteAtIndex:(unsigned int)arg1;
- (id)createAnchorForVisibleAreaIgnoringEdges:(NSUInteger)arg1;
- (id)createAnchorForVisibleArea;
@property(readonly, nonatomic) PXGItemsLayout *layoutForItemChanges;
- (void)applySectionedChangedDetailsForSingleSection:(id)arg1 dataSourceAfterChanges:(id)arg2 changeMediaVersionHandler:(CDUnknownBlockType)arg3;
- (void)applySectionedChangeDetails:(id)arg1 dataSourceAfterChanges:(id)arg2 sublayoutProvider:(id)arg3 outChangedSections:(id )arg4 outSectionsWithItemChanges:(id )arg5 changeMediaVersionHandler:(CDUnknownBlockType)arg6;
- (void)animationDidComplete:(id)arg1;
@property(readonly, nonatomic) NSArray *pendingAnimations;
- (id)createAnimation;
- (CGSize)minPlayableSizeForSpriteAtIndex:(unsigned int)arg1;
- (id)createCuratedLibraryLayoutTransitionIfNeededWithContext:(long long)arg1;
- (id)createCuratedLibraryLayoutAnimationIfNeededWithContext:(long long)arg1;
//  (id)createCuratedLibraryLayoutSkimmingSlideshowAnimationFromSectionIndexPath:(struct PXSimpleIndexPath)arg1 toSectionIndexPath:(struct PXSimpleIndexPath)arg2;
- (id)createCuratedLibraryLayoutZoomLevelChangeAnimationFromZoomLevel:(long long)arg1 toZoomLevel:(long long)arg2 withContext:(long long)arg3;
- (id)createCuratedLibraryLayoutAnimationIfNeededWithContext:(long long)arg1 userData:(id)arg2;
- (id)createTransitionWithAnimations:(id)arg1;
@property(readonly, nonatomic) BOOL shouldUpdateDecorationMediaTargetSizes;
@property(readonly, nonatomic) BOOL shouldInvalidateDecorationForModifiedSprites;
- (BOOL)isSpriteIndex:(unsigned int)arg1 decoratingSpriteWithIndex:(out unsigned int )arg2;
//  (void)_invalidateDecorationForSpriteRange:(struct _PXGSpriteIndexRange)arg1 inLayout:(id)arg2;
//  (void)invalidateDecorationForSpritesInRange:(struct _PXGSpriteIndexRange)arg1;
- (void)invalidateDecoration;
- (long long)sublayoutIndexForSpriteReference:(id)arg1 options:(NSUInteger)arg2;
- (unsigned int)spriteIndexForSpriteReference:(id)arg1 options:(NSUInteger)arg2;
- (id)spriteReferenceForSpriteReference:(id)arg1;
- (id)dynamicSpriteReferenceForObjectReference:(id)arg1;
- (id)spriteReferenceForObjectReference:(id)arg1;
- (id)spriteReferenceForSpriteIndex:(unsigned int)arg1 objectReference:(id)arg2;
- (unsigned int)spriteIndexForSpriteReference:(id)arg1;
- (id)spriteReferenceForSpriteIndex:(unsigned int)arg1;

@end

