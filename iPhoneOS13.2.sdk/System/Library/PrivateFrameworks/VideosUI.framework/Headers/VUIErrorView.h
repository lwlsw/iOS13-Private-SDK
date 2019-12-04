//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class VUIErrorLayout, VUILabel;

__attribute__((visibility("hidden")))
@interface VUIErrorView : UIView
{
    VUIErrorLayout *_layout;
    VUILabel *_titleLabel;
    VUILabel *_descriptionLabel;
    VUILabel *_debugTextLabel;
    VUILabel *_debugTextLabel2;
}

@property(retain, nonatomic) VUILabel *debugTextLabel2; // @synthesize debugTextLabel2=_debugTextLabel2;
@property(retain, nonatomic) VUILabel *debugTextLabel; // @synthesize debugTextLabel=_debugTextLabel;
@property(retain, nonatomic) VUILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) VUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) VUIErrorLayout *layout; // @synthesize layout=_layout;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGSize)layoutSubviewsWithSize:(struct CGSize)arg1 computationOnly:(_Bool)arg2;

@end
