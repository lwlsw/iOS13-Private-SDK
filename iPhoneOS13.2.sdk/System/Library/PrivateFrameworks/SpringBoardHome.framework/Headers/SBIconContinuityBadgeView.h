//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <SpringBoardHome/SBIconAccessoryView-Protocol.h>

@class SBDarkeningImageView, SBIconAccessoryImage, UIImageView;
@protocol SBIconListLayout;

@interface SBIconContinuityBadgeView : UIView <SBIconAccessoryView>
{
    id <SBIconListLayout> _listLayout;
    long long _badgeType;
    SBIconAccessoryImage *_backgroundImage;
    SBIconAccessoryImage *_foregroundImage;
    SBDarkeningImageView *_backgroundView;
    UIImageView *_foregroundView;
}

+ (id)_checkoutImageForContinuityBadgeType:(long long)arg1 highlighted:(BOOL)arg2;
+ (id)backgroundImageCache;
@property(readonly, nonatomic) UIImageView *foregroundView; // @synthesize foregroundView=_foregroundView;
@property(readonly, nonatomic) SBDarkeningImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) SBIconAccessoryImage *foregroundImage; // @synthesize foregroundImage=_foregroundImage;
@property(readonly, nonatomic) SBIconAccessoryImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(nonatomic) long long badgeType; // @synthesize badgeType=_badgeType;
@property(retain, nonatomic) id <SBIconListLayout> listLayout; // @synthesize listLayout=_listLayout;
// - (void).cxx_destruct;
- (void)_clearIcon;
- (id)_checkoutBackgroundImage;
- (void)setAccessoryBrightness:(double)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (CGSize)intrinsicContentSize;
- (CGPoint)accessoryCenterForIconBounds:(CGRect)arg1;
- (void)prepareForReuse;
- (BOOL)displayingAccessory;
- (void)configureForIcon:(id)arg1 infoProvider:(id)arg2;
- (void)configureAnimatedForIcon:(id)arg1 infoProvider:(id)arg2 animator:(id)arg3;
- (void)layoutSubviews;
- (CGSize)badgeSize;
- (CGPoint)layoutOffset;
- (void)dealloc;
- (id)init;

@end

