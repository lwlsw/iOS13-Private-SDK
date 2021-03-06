//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, UIButton, UIImageView, UILabel, _UIGrabber;
@protocol CKAppGrabberViewDelegate;

@interface CKAppGrabberView : UIView
{
    UIImageView *_iconImageView;
    UIImageView *_iconOutlineView;
    UILabel *_pluginTitleLabel;
    UIButton *_closeButton;
    UIView *_headerView;
    UIView *_grayLine;
    _UIGrabber *_chevronView;
    NSString *_appIdentifier;
    BOOL _showsAppTitle;
    BOOL _roundsTopCorners;
    id <CKAppGrabberViewDelegate> _delegate;
}

+ (double)compactRoundedCornerRadius;
+ (double)roundedCornerRadius;
@property(nonatomic) BOOL roundsTopCorners; // @synthesize roundsTopCorners=_roundsTopCorners;
@property(readonly, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) BOOL showsAppTitle; // @synthesize showsAppTitle=_showsAppTitle;
@property(nonatomic) __weak id <CKAppGrabberViewDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)iconImageView;
- (id)headerView;
- (void)updateHeaderFrame:(BOOL)arg1;
- (void)closeButtonTapped:(id)arg1;
- (void)updateAppTitle:(id)arg1 icon:(id)arg2 appIdentifier:(id)arg3;
- (double)chevronMaxYInView:(id)arg1;
- (double)visualOriginYInView:(id)arg1;
@property(readonly, nonatomic) double chevronMaxYOffset;
@property(readonly, nonatomic) double visualOriginYOffset;
@property(nonatomic) BOOL showsGrabberPill;
- (void)updateIconImageView:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

