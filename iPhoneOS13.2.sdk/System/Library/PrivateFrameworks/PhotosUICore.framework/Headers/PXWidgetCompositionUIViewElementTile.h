//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXUIViewBasicTile-Protocol.h>
#import <PhotosUICore/PXWidgetContentViewTransitionCoordinator-Protocol.h>

@class PXBasicTileAnimationOptions, UIView, _PXWidgetCompositionUIViewElementTileTransitionContext;
@protocol PXWidget;

@interface PXWidgetCompositionUIViewElementTile : NSObject <PXWidgetContentViewTransitionCoordinator, PXUIViewBasicTile>
{
    BOOL __didEmbedContentView;
    id <PXWidget> _widget;
    UIView *__containerView;
    _PXWidgetCompositionUIViewElementTileTransitionContext *__currentTransitionContext;
}

@property(retain, nonatomic, setter=_setCurrentTransitionContext:) _PXWidgetCompositionUIViewElementTileTransitionContext *_currentTransitionContext; // @synthesize _currentTransitionContext=__currentTransitionContext;
@property(nonatomic, setter=_setDidEmbedContentView:) BOOL _didEmbedContentView; // @synthesize _didEmbedContentView=__didEmbedContentView;
@property(readonly, nonatomic) UIView *_containerView; // @synthesize _containerView=__containerView;
@property(readonly, nonatomic) id <PXWidget> widget; // @synthesize widget=_widget;
// - (void).cxx_destruct;
- (void)animateAlongsideTransition:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) PXBasicTileAnimationOptions *animationOptions;
@property(readonly, nonatomic) UIView *view;
//  (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
- (void)_didCompleteTileAnimationWithContext:(id)arg1;
- (void)_didAnimateTileWithContext:(id)arg1;
//  (id)_willAnimateTileToGeometry:(struct PXTileGeometry)arg1 withOptions:(id)arg2;
- (void)_embedContentView;
- (id)initWithWidget:(id)arg1;

@end

