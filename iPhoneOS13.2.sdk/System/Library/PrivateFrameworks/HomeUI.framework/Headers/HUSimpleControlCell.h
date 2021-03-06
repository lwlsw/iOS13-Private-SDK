//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUControlPanelCell.h>

@class NSArray, UIView;
@protocol HUControlView;

@interface HUSimpleControlCell : HUControlPanelCell
{
    UIView<HUControlView> *_controlView;
    NSArray *_controlViewConstraints;
}

@property(copy, nonatomic) NSArray *controlViewConstraints; // @synthesize controlViewConstraints=_controlViewConstraints;
@property(retain, nonatomic) UIView<HUControlView> *controlView; // @synthesize controlView=_controlView;
// - (void).cxx_destruct;
- (void)prepareForReuse;
- (void)_updateSliderConstraints;
- (id)allControlViews;

@end

