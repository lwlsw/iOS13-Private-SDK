//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIButton, UILabel;
@protocol DOCViewServiceErrorViewDelegate;

@interface DOCViewServiceErrorView : UIView
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_tryAgainButton;
    id <DOCViewServiceErrorViewDelegate> _delegate;
}

@property __weak id <DOCViewServiceErrorViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *tryAgainButton; // @synthesize tryAgainButton=_tryAgainButton;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)didTapTryAgain;
- (id)init;

@end
