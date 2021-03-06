//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, UIButton, UIImage, UIImageView, UILabel;

@interface SKUIEmptyContentPlaceholderView : UIView
{
    UIEdgeInsets _imageInsets;
    UIImageView *_imageView;
    UILabel *_label;
    UIButton *_signInButton;
}

@property(nonatomic) UIEdgeInsets placeholderImageInsets; // @synthesize placeholderImageInsets=_imageInsets;
// - (void).cxx_destruct;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
@property(nonatomic) BOOL showsSignInButton;
@property(readonly, nonatomic) UIButton *signInButton;
@property(copy, nonatomic) NSString *placeholderMessage;
@property(retain, nonatomic) UIImage *placeholderImage;
@property(readonly, nonatomic) UILabel *placeholderMessageLabel;
- (void)maskPlaceholdersInBackdropView:(id)arg1;

@end

