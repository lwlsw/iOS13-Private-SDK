//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBIconAnimationContaining-Protocol.h>
#import <SpringBoardHome/WGWidgetIconAnimationExtraViewsProviding-Protocol.h>

@class SBHIconModel, SBIconListView;

@protocol SBIconZoomAnimationContaining <SBIconAnimationContaining, WGWidgetIconAnimationExtraViewsProviding>
@property(readonly, nonatomic) SBIconListView *dockIconListView;
@property(readonly, nonatomic) SBIconListView *currentIconListView;
@property(readonly, nonatomic) SBHIconModel *iconModel;
@end

