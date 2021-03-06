//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class PKContinuousButton, PKDiscoveryArticleLayout, PKDiscoveryCallToActionFooterView, PKDiscoveryCard, PKDiscoveryMedia, UIImageView, UILabel, UITapGestureRecognizer;
@protocol PKDiscoveryCardViewDelegate;

@interface PKDiscoveryCardView : UIView
{
    PKDiscoveryCard *_card;
    PKDiscoveryMedia *_media;
    UIImageView *_backgroundImageView;
    UILabel *_headingLabel;
    UILabel *_titleLabel;
    UIImageView *_shadowView;
    UIImageView *_maskImageView;
    PKDiscoveryCallToActionFooterView *_ctaFooterView;
    UITapGestureRecognizer *_tapRecognizer;
    PKContinuousButton *_dismissButton;
    BOOL _removing;
    BOOL _hasSafeAreaInsetOverride;
    PKDiscoveryArticleLayout *_articleLayout;
    id <PKDiscoveryCardViewDelegate> _delegate;
    long long _displayType;
    id /* CDUnknownBlockType */ _callToActionTappedOverride;
    id /* CDUnknownBlockType */ _dismissAction;
    UIEdgeInsets _safeAreaOverrideInsets;
}

+ (double)cornerRadius;
+ (CGSize)compressedSize;
+ (double)compressedHeight;
+ (double)compressedWidth;
+ (CGSize)expandedSize;
+ (double)expandedHeight;
+ (double)expandedWidth;
@property(copy, nonatomic) id /* CDUnknownBlockType */ dismissAction; // @synthesize dismissAction=_dismissAction;
@property(copy, nonatomic) id /* CDUnknownBlockType */ callToActionTappedOverride; // @synthesize callToActionTappedOverride=_callToActionTappedOverride;
@property(nonatomic) UIEdgeInsets safeAreaOverrideInsets; // @synthesize safeAreaOverrideInsets=_safeAreaOverrideInsets;
@property(nonatomic) BOOL hasSafeAreaInsetOverride; // @synthesize hasSafeAreaInsetOverride=_hasSafeAreaInsetOverride;
@property(nonatomic, getter=isRemoving) BOOL removing; // @synthesize removing=_removing;
@property(nonatomic) long long displayType; // @synthesize displayType=_displayType;
@property(nonatomic) __weak id <PKDiscoveryCardViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PKDiscoveryArticleLayout *articleLayout; // @synthesize articleLayout=_articleLayout;
// - (void).cxx_destruct;
- (id)_dismissButtonTintColor;
- (id)_headingLabelTextColor;
- (id)_titleLabelTextColor;
- (void)_updateForDisplayType;
- (void)_loadImageData;
- (double)_yOffsetToHeadingLabel;
- (UIEdgeInsets)_currentContentInsets;
- (void)tapGestureRecognized:(id)arg1;
- (void)_dismissButtonPressed:(id)arg1;
- (id)_headingLabelFont;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithArticleLayout:(id)arg1 displayType:(long long)arg2 dismissImage:(id)arg3 callToActionTappedOverride:(CDUnknownBlockType)arg4;
- (id)initWithArticleLayout:(id)arg1 displayType:(long long)arg2 dismissImage:(id)arg3;

@end

