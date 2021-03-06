//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <AssetExplorer/PXReusableObject-Protocol.h>
#import <AssetExplorer/PXUIViewBasicTile-Protocol.h>

@class AEGridOverlayConfiguration;

__attribute__((visibility("hidden")))
@interface AEGridOverlayView : UIView <PXUIViewBasicTile, PXReusableObject>
{
    AEGridOverlayConfiguration *_overlayConfiguration;
}

+ (id)loopBadge;
+ (id)videoBadge;
+ (id)cloudBadge;
+ (id)gradientShadow;
+ (id)gridOverlayLayoutInfo;
@property(retain, nonatomic, setter=_setOverlayConfiguration:) AEGridOverlayConfiguration *overlayConfiguration; // @synthesize overlayConfiguration=_overlayConfiguration;
// - (void).cxx_destruct;
- (void)prepareForReuse;
- (void)becomeReusable;
//  (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
@property(readonly, nonatomic) UIView *view;
- (CGRect)_loopRect;
- (CGRect)_videoRect;
- (CGRect)_cloudRect;
- (void)drawRect:(CGRect)arg1;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (id)init;

@end

