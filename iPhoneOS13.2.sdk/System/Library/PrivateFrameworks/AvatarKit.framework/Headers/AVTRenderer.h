//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/SCNRenderer.h>

#import <AvatarKit/SCNSceneRendererDelegate-Protocol.h>
#import <AvatarKit/_SCNSceneRendererDelegateSPI-Protocol.h>

@class AVTAvatar, AVTAvatarEnvironment, AVTFaceTracker, NSLock, SCNNode;
@protocol SCNSceneRendererDelegate;

@interface AVTRenderer : SCNRenderer <SCNSceneRendererDelegate, _SCNSceneRendererDelegateSPI>
{
    AVTAvatarEnvironment *_environment;
    AVTAvatar *_avatar;
    SCNNode *_avatarNode;
    NSLock *_lock;
    id <SCNSceneRendererDelegate> _fwdDelegate;
    BOOL _pauseSimulation;
    BOOL _arMode;
    BOOL _enableDepthMask;
    AVTFaceTracker *_faceTracker;
    NSUInteger _antialiasingMode;
}

+ (id)renderer;
+ (id)rendererWithDevice:(id)arg1 options:(id)arg2;
// - (void).cxx_destruct;
- (void)renderer:(id)arg1 didRenderScene:(id)arg2 atTime:(double)arg3;
- (void)renderer:(id)arg1 willRenderScene:(id)arg2 atTime:(double)arg3;
- (void)renderer:(id)arg1 didApplyConstraintsAtTime:(double)arg2;
- (void)renderer:(id)arg1 didSimulatePhysicsAtTime:(double)arg2;
- (void)renderer:(id)arg1 updateAtTime:(double)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)_renderer:(id)arg1 didBuildSubdivDataForHash:(id)arg2 dataProvider:(CDUnknownBlockType)arg3;
- (id)_renderer:(id)arg1 subdivDataForHash:(id)arg2;
- (void)renderer:(id)arg1 didApplyAnimationsAtTime:(double)arg2;
- (id)transitionTexture;
- (void)fadePuppetToWhite:(float)arg1;
- (void)avatarDidChange;
- (void)_setAvatar:(id)arg1;
- (void)__setAvatar:(id)arg1;
@property(retain, nonatomic) AVTAvatar *avatar;
@property(retain, nonatomic) AVTFaceTracker *faceTracker;
@property(nonatomic) NSUInteger avt_antialiasingMode;
- (void)faceTrackerDidUpdate:(id)arg1 trackingInfo:(id)arg2;
@property(nonatomic) BOOL pauseSimulation;
@property(nonatomic) BOOL arMode;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setEnableDepthMask:(BOOL)arg1 withFlippedDepth:(BOOL)arg2;
@property(nonatomic) BOOL enableDepthMask;
- (void)_updateFocal;
- (void)_updateAvatarForARMode;
- (void)dealloc;
- (void)_avtSetup;

@end

