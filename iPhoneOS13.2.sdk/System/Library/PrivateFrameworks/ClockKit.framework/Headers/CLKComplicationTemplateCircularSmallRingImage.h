//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKImageProvider;

@interface CLKComplicationTemplateCircularSmallRingImage : CLKComplicationTemplate
{
    float _fillFraction;
    CLKImageProvider *_imageProvider;
    long long _ringStyle;
}

+ (struct CGSize)_imageSize;
@property(nonatomic) long long ringStyle; // @synthesize ringStyle=_ringStyle;
@property(nonatomic) float fillFraction; // @synthesize fillFraction=_fillFraction;
@property(copy, nonatomic) CLKImageProvider *imageProvider; // @synthesize imageProvider=_imageProvider;
- (void)_enumerateIntegerKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateFloatKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateImageProviderKeysWithBlock:(id /* block */)arg1;
- (_Bool)isCompatibleWithFamily:(long long)arg1;

@end
