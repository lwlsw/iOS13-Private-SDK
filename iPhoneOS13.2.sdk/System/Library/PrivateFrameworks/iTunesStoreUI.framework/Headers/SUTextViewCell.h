//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUTableCell.h>


@class SUTextContentView, UIScrollView;
@protocol SUTextViewCellDelegate;

@interface SUTextViewCell : SUTableCell <UITextContentViewDelegate>
{
    id <SUTextViewCellDelegate> _delegate;
    UIScrollView *_scrollView;
    SUTextContentView *_textContentView;
}

@property(readonly, nonatomic) SUTextContentView *textContentView; // @synthesize textContentView=_textContentView;
@property(nonatomic) id <SUTextViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)textContentViewShouldEndEditing:(id)arg1;
- (BOOL)textContentViewShouldBeginEditing:(id)arg1;
- (void)textContentViewDidChange:(id)arg1;
- (BOOL)textContentView:(id)arg1 shouldScrollForPendingContentSize:(CGSize)arg2;
- (BOOL)textContentView:(id)arg1 shouldChangeSizeForContentSize:(CGSize)arg2;
- (void)textContentView:(id)arg1 didChangeSize:(CGSize)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setFrame:(CGRect)arg1;
- (void)setBackgroundColor:(id)arg1;
- (BOOL)resignFirstResponder;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

