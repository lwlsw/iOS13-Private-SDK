//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//





@class CLKDevice, NTKStackedImagesComplicationImageView;
@protocol CLKMonochromeFilterProvider;

@interface NTKRichComplicationImageView : UIView
{
    BOOL _useAccentColor;
    BOOL _hostingOverrideView;
    BOOL _paused;
    BOOL _inMonochromeMode;
    BOOL _prefersFilterOverTransition;
    id _filterProvider;
    CLKDevice *_device;
    UIView *_richComplicationImageView;
    NTKStackedImagesComplicationImageView *_monochromeImageView;
    long long _imageViewContentMode;
    long long _monochromeFilterType;
}

@property(nonatomic) BOOL prefersFilterOverTransition; // @synthesize prefersFilterOverTransition=_prefersFilterOverTransition;
@property(nonatomic) BOOL inMonochromeMode; // @synthesize inMonochromeMode=_inMonochromeMode;
@property(nonatomic) long long monochromeFilterType; // @synthesize monochromeFilterType=_monochromeFilterType;
@property(nonatomic, getter=isPaused) BOOL paused; // @synthesize paused=_paused;
@property(readonly, nonatomic) long long imageViewContentMode; // @synthesize imageViewContentMode=_imageViewContentMode;
@property(nonatomic, getter=isHostingOverrideView) BOOL hostingOverrideView; // @synthesize hostingOverrideView=_hostingOverrideView;
@property(nonatomic) __weak NTKStackedImagesComplicationImageView *monochromeImageView; // @synthesize monochromeImageView=_monochromeImageView;
@property(nonatomic) __weak UIView *richComplicationImageView; // @synthesize richComplicationImageView=_richComplicationImageView;
@property(readonly, nonatomic) BOOL useAccentColor; // @synthesize useAccentColor=_useAccentColor;
@property(readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
@property(nonatomic) __weak id filterProvider; // @synthesize filterProvider=_filterProvider;
// - (void).cxx_destruct;
- (BOOL)viewShouldIgnoreTwoPieceImage:(id)arg1;
- (id)interpolatedColorForView:(id)arg1;
- (id)colorForView:(id)arg1 accented:(BOOL)arg2;
- (id)filterForView:(id)arg1 style:(long long)arg2;
- (id)filterForView:(id)arg1 style:(long long)arg2 fraction:(double)arg3;
- (long long)_filterStyle;
- (void)updateMonochromeColor;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)layoutSubviews;
- (void)setImageProvider:(id)arg1 reason:(long long)arg2;
- (id)initWithDevice:(id)arg1 useAccentColor:(BOOL)arg2;

@end

