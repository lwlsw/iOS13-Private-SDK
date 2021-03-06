//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIColor;
@protocol WFParameterLayoutViewDelegate;

@interface WFParameterLayoutView : UIView
{
    BOOL _selectable;
    BOOL _highlighted;
    id <WFParameterLayoutViewDelegate> _delegate;
    UIColor *_normalBackgroundColor;
    UIColor *_highlightedBackgroundColor;
}

@property(retain, nonatomic) UIColor *highlightedBackgroundColor; // @synthesize highlightedBackgroundColor=_highlightedBackgroundColor;
@property(retain, nonatomic) UIColor *normalBackgroundColor; // @synthesize normalBackgroundColor=_normalBackgroundColor;
@property(nonatomic) __weak id <WFParameterLayoutViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic, getter=isSelectable) BOOL selectable; // @synthesize selectable=_selectable;
// - (void).cxx_destruct;
- (id)accessibilityElements;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)fadeOutHighlight;
- (void)unhighlight;
- (void)highlight;
- (void)updateBackgroundColor;

@end

