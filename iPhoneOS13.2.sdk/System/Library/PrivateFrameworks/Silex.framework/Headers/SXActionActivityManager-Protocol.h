//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SXAction;
@protocol SXActionActivityGroup, SXActionActivityProvider, SXActionPreviewActivity;

@protocol SXActionActivityManager <NSObject>
- (id <SXActionPreviewActivity>)previewActivityForAction:(SXAction *)arg1;
- (id <SXActionActivityGroup>)activityGroupForAction:(SXAction *)arg1;
- (void)registerActionActivityProvider:(id <SXActionActivityProvider>)arg1 actionType:(Class)arg2;
@end

