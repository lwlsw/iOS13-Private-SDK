//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIButton;

@interface GKMultiplayerBubbleView : UIView
{
    UIButton *_shareButton;
    UIButton *_playButton;
}

@property(nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
- (void)scatterOutBubblesWithCompletion:(CDUnknownBlockType)arg1;
- (void)setBubblesHidden:(BOOL)arg1;
- (void)floatInBubbles;
- (void)removeAllAnimationsFromBubbles;
- (void)awakeFromNib;

@end

