//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaControls/MediaControlsVolumeSliderView.h>

@interface SBElasticSliderView : MediaControlsVolumeSliderView
{
    double _additiveGlyphScaleFactor;
}

@property(nonatomic) double additiveGlyphScaleFactor; // @synthesize additiveGlyphScaleFactor=_additiveGlyphScaleFactor;
- (void)_updateGlyphScaleForAdditiveScaleOrAxisUpdate;
- (CGPoint)glyphCenter;
- (void)setAxis:(int)arg1;
- (void)stopGlyphAnimations;
- (id)initWithFrame:(CGRect)arg1;

@end

