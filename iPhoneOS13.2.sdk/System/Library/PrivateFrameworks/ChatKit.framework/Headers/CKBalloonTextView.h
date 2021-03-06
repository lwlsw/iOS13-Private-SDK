//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//



@class NSAttributedString, NSString;
@protocol CKBalloonTextViewInteractionDelegate;

@interface CKBalloonTextView : UITextView <NSLayoutManagerDelegate>
{
    NSAttributedString *_attributedText;
    id <CKBalloonTextViewInteractionDelegate> _interactionDelegate;
}

+ (id)textView;
@property(nonatomic) __weak id <CKBalloonTextViewInteractionDelegate> interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
// - (void).cxx_destruct;
- (void)_interactionStoppedFromPreviewItemController:(id)arg1;
- (void)_interactionStartedFromPreviewItemController:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets )arg2 isSingleLine:(BOOL )arg3;
- (id)_textWithHyphenationAppliedForAttributedText:(id)arg1;
- (id)initReadonlyAndUnselectableWithFrame:(CGRect)arg1 textContainer:(id)arg2;
- (void)didMoveToWindow;
@property(readonly, copy) NSString *description;

@end

