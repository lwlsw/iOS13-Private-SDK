//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIColor;

@interface CAMShutterButtonRingView : UIView
{
    BOOL _showContrastBorder;
    UIColor *_color;
//    struct CAMShutterButtonSpec _spec;
}

@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) BOOL showContrastBorder; // @synthesize showContrastBorder=_showContrastBorder;
// property(nonatomic) struct CAMShutterButtonSpec spec; // @synthesize spec=_spec;
// - (void).cxx_destruct;
- (void)drawRect:(CGRect)arg1;
- (UIEdgeInsets)alignmentRectInsets;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
//  (id)initWithSpec:(struct CAMShutterButtonSpec)arg1;

@end

