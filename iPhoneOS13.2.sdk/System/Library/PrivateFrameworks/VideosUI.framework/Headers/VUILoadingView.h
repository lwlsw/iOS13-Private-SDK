//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIActivityIndicatorView, VUILabel;

__attribute__((visibility("hidden")))
@interface VUILoadingView : UIView
{
    VUILabel *_loadingLabel;
    UIActivityIndicatorView *_indicatorView;
}

@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) VUILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (void)startTimer;
- (id)initWithFrame:(CGRect)arg1 loadingString:(id)arg2;

@end

