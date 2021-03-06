//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSLayoutConstraint, UIImageView;

@interface GKRatingView : UIView
{
    double _value;
    UIImageView *_backgroundImageView;
    UIImageView *_foregroundImageView;
    NSLayoutConstraint *_foregroundWidthConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *foregroundWidthConstraint; // @synthesize foregroundWidthConstraint=_foregroundWidthConstraint;
@property(retain, nonatomic) UIImageView *foregroundImageView; // @synthesize foregroundImageView=_foregroundImageView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) double value; // @synthesize value=_value;
- (CGSize)intrinsicContentSize;
- (void)dealloc;
- (void)commonSetup;
- (id)initWithFrame:(CGRect)arg1;
- (void)awakeFromNib;

@end

