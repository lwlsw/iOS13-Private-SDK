//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <DocumentManagerUICore/DOCTagIconView-Protocol.h>

@class CALayer, CAShapeLayer;

@interface DOCTagDotView : UIView <DOCTagIconView>
{
    BOOL _checked;
    long long _tagColor;
    CAShapeLayer *_noneDotLayer;
    CAShapeLayer *_dotLayer;
    CALayer *_checkmarkLayer;
    CGSize _dotSize;
}

@property(readonly, nonatomic) CALayer *checkmarkLayer; // @synthesize checkmarkLayer=_checkmarkLayer;
@property(readonly, nonatomic) CAShapeLayer *dotLayer; // @synthesize dotLayer=_dotLayer;
@property(readonly, nonatomic) CAShapeLayer *noneDotLayer; // @synthesize noneDotLayer=_noneDotLayer;
@property(nonatomic) CGSize dotSize; // @synthesize dotSize=_dotSize;
@property(nonatomic) BOOL checked; // @synthesize checked=_checked;
@property(nonatomic) long long tagColor; // @synthesize tagColor=_tagColor;
// - (void).cxx_destruct;
- (CGSize)systemLayoutSizeFittingSize:(CGSize)arg1;
- (CGSize)intrinsicContentSize;
- (void)updateLayoutOfLayers;
- (void)updateColors;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

