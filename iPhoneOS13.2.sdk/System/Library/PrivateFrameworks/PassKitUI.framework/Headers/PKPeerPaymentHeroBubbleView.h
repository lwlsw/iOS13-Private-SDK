//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class PKPeerPaymentBubbleView, UILabel, UIView;

@interface PKPeerPaymentHeroBubbleView : UIImageView
{
    UIView *_pluginBalloonView;
    PKPeerPaymentBubbleView *_peerPaymentBubbleView;
    NSUInteger _bubbleState;
    UILabel *_bubbleAmountLabel;
}

@property(readonly, nonatomic) UIView *pluginBalloonView; // @synthesize pluginBalloonView=_pluginBalloonView;
@property(readonly, nonatomic) UILabel *bubbleAmountLabel; // @synthesize bubbleAmountLabel=_bubbleAmountLabel;
// - (void).cxx_destruct;
- (NSUInteger)_bubbleStateForRegistrationState:(NSUInteger)arg1;
- (id)_bubbleAmountLabelTextAttributes;
- (id)_bubbleAmountLabelTextWithAmount:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithCurrencyAmount:(id)arg1 regitrationFlowState:(NSUInteger)arg2;

@end

