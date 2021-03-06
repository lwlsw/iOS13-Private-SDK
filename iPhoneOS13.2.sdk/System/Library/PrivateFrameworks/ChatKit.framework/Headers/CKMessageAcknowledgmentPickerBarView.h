//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <ChatKit/CKPickerBarView-Protocol.h>

@class CALayer, NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface CKMessageAcknowledgmentPickerBarView : UIView <CKPickerBarView>
{
    CALayer *_anchorBubble;
    CALayer *_intermediateBubble;
    UIView *_pillBubble;
    NSDictionary *_groupAcknowledgmentCounts;
    long long _selectedAcknowledgment;
    BOOL _balloonOrientation;
    NSArray *_acknowledgmentViews;
    CGPoint _anchorBubblePosition;
}

@property(nonatomic) CGPoint anchorBubblePosition; // @synthesize anchorBubblePosition=_anchorBubblePosition;
@property(copy, nonatomic) NSArray *acknowledgmentViews; // @synthesize acknowledgmentViews=_acknowledgmentViews;
// - (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateDynamicColorsForBubbleLayers;
- (void)performCancelAnimation:(CDUnknownBlockType)arg1;
- (void)performSendAnimation:(CDUnknownBlockType)arg1;
- (void)performSelectedAnimation:(CDUnknownBlockType)arg1;
- (void)performShowAnimation:(CDUnknownBlockType)arg1;
- (BOOL)_hasGroupCounts;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (CGSize)_ackViewsBoundsWidth;
- (id)initWithGroupCounts:(id)arg1 selectedType:(long long)arg2 orientation:(BOOL)arg3;

@end

