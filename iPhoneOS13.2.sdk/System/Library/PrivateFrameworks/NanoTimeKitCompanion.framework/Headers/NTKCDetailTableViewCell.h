//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIView;

@interface NTKCDetailTableViewCell : UITableViewCell
{
    _Bool _showsSeparator;
    _Bool _ignoresRTLCorrection;
    UIView *_separatorView;
}

+ (id)titleFont;
+ (id)defaultTextColor;
+ (id)reuseIdentifier;
@property(nonatomic) _Bool ignoresRTLCorrection; // @synthesize ignoresRTLCorrection=_ignoresRTLCorrection;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(nonatomic) _Bool showsSeparator; // @synthesize showsSeparator=_showsSeparator;
- (void)_fontSizeDidChange;
- (id)_fontForDetailTextLabel;
- (id)_fontForTextLabel;
- (_Bool)_visibleAtPoint:(struct CGPoint)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (id)init;
- (double)rowHeight;

@end
