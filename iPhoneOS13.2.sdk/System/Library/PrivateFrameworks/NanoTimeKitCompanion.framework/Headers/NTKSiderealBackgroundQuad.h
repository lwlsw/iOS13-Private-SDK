//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockKitUI/CLKUIQuad.h>

@class CLKDevice, MISSING_TYPE, MTLRenderPassDescriptor, NSArray, NSOrderedSet, NTKAltitudeColorCurve, NTKSiderealCachedMTLTexture, NTKSiderealDataSource;
@protocol MTLBuffer, MTLDevice, MTLRenderPipelineState, MTLTexture;

@interface NTKSiderealBackgroundQuad : CLKUIQuad
{
    CLKDevice *_clkDevice;
    id <MTLDevice> _device;
    id <MTLRenderPipelineState> _mtlSolidPipelineState;
    id <MTLRenderPipelineState> _mtlGradientPipelineState;
    id <MTLRenderPipelineState> _mtlGlowPipelineState;
    id <MTLRenderPipelineState> _mtlSpritePipelineState;
    id <MTLRenderPipelineState> _mtlBlurPipelineState;
    id <MTLRenderPipelineState> _mtlCompositePipelineState;
    id <MTLTexture> _gradientTex;
    id <MTLBuffer> _mtlIndexBuffer;
    id <MTLBuffer> _mtlSectorDescriptorBuffers[3];
    unsigned short _currentBufferIndex;
    NTKSiderealCachedMTLTexture *_dialTex;
    NTKSiderealCachedMTLTexture *_waypointTex;
    NTKSiderealCachedMTLTexture *_gnomonTexture;
    NTKSiderealCachedMTLTexture *_dayGnomonTexture;
    NTKSiderealCachedMTLTexture *_dayDiskBloomTexture;
    NTKSiderealCachedMTLTexture *_dayDiskTexture;
    NTKSiderealCachedMTLTexture *_nightGnomonTexture;
    NTKSiderealCachedMTLTexture *_nightDiskTexture;
    NTKSiderealCachedMTLTexture *_nightRingTexture;
    CGSize _size;
    NSOrderedSet *_sectors;
    double _dayProgress;
    NTKAltitudeColorCurve *_civilTwilightCurve;
    NTKAltitudeColorCurve *_nauticalTwilightCurve;
    NTKAltitudeColorCurve *_astronomicalTwilightCurve;
    NTKAltitudeColorCurve *_nightColorCurve;
    NTKAltitudeColorCurve *_bloomColorCurve;
    NSArray *_dayGradientCurves;
    NSArray *_dayGradientInterpolations;
    float _antiAliasWidth;
    MISSING_TYPE *_ticksColor_dim;
    MISSING_TYPE *_ticksColor_bright;
    MISSING_TYPE *_waypointsColor;
    NTKSiderealDataSource *_dataSource;
    double _glowStartAngle;
    double _glowEndAngle;
    float _diameter;
    float _orbitDiameter;
    MTLRenderPassDescriptor *_offscreenPassDescriptor;
    MTLRenderPassDescriptor *_verticalBlurPassDescriptor;
    MTLRenderPassDescriptor *_horizontalBlurPassDescriptor;
    id <MTLTexture> _offscreenBuffer;
    id <MTLTexture> _verticalBlurBuffer;
    id <MTLTexture> _horizontalBlurBuffer;
    float _blurOrbitRadius;
    float _blurRadius;
    BOOL _shouldDrawGlowPath;
    float _litProgress;
    float _backgroundDimming;
    float _blurScale;
    NSUInteger _renderingMode;
    id <MTLTexture> _dayMask;
    id <MTLTexture> _nightMask;
}

@property(retain, nonatomic) id <MTLTexture> nightMask; // @synthesize nightMask=_nightMask;
@property(retain, nonatomic) id <MTLTexture> dayMask; // @synthesize dayMask=_dayMask;
@property(nonatomic) NSUInteger renderingMode; // @synthesize renderingMode=_renderingMode;
@property(nonatomic) BOOL shouldDrawGlowPath; // @synthesize shouldDrawGlowPath=_shouldDrawGlowPath;
@property(nonatomic) float blurScale; // @synthesize blurScale=_blurScale;
@property(nonatomic) float backgroundDimming; // @synthesize backgroundDimming=_backgroundDimming;
@property(nonatomic) float litProgress; // @synthesize litProgress=_litProgress;
// - (void).cxx_destruct;
- (id)_currentBuffer;
- (void)renderForDisplayWithEncoder:(id)arg1;
- (void)performOffscreenPassesWithCommandBuffer:(id)arg1;
- (BOOL)prepareForTime:(double)arg1;
- (int)numSlicesForAngle:(double)arg1;
- (void)setSectors:(id)arg1;
- (void)setSolarDayProgress:(double)arg1;
- (void)loadGradientTexture:(CDUnknownBlockType)arg1;
- (id)generateGradientData:(CDUnknownBlockType)arg1;
- (void)updateAntiAliasWidth;
- (void)updateWaypointImage:(id)arg1;
- (void)setupForQuadView:(id)arg1;
- (void)setGlowViewStartAngle:(double)arg1 endAngle:(double)arg2;
- (void)dataSourceChanged;
- (id)initWithDevice:(id)arg1 orbitDiameter:(double)arg2 timeOrbitRadius:(double)arg3 timeRadius:(double)arg4 dialImage:(id)arg5 waypointImage:(id)arg6 gnomonImage:(id)arg7 dayGnomonImage:(id)arg8 dayDiskBloomImage:(id)arg9 dayDiscImage:(id)arg10 nightGnomonImage:(id)arg11 nightDiscImage:(id)arg12 nightRingImage:(id)arg13 dataSource:(id)arg14;

@end

