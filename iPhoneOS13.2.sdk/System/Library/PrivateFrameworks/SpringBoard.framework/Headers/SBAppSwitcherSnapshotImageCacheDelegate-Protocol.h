//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, SBAppLayout, SBAppSwitcherSnapshotImageCache;

@protocol SBAppSwitcherSnapshotImageCacheDelegate <NSObject>
- (CGSize)snapshotSizeForItemWithRole:(long long)arg1 inAppLayout:(SBAppLayout *)arg2 interfaceOrientation:(long long)arg3 inImageCache:(SBAppSwitcherSnapshotImageCache *)arg4;
- (NSArray *)defaultAppLayoutsForImageCache:(SBAppSwitcherSnapshotImageCache *)arg1;
- (NSArray *)appLayoutsForWhichToGenerateFullSizeSnapshotsInImageCache:(SBAppSwitcherSnapshotImageCache *)arg1;
- (double)scaleForDownscaledSnapshotsForImageCache:(SBAppSwitcherSnapshotImageCache *)arg1;
- (long long)orientationForSnapshotOfAppLayout:(SBAppLayout *)arg1 inImageCache:(SBAppSwitcherSnapshotImageCache *)arg2;
- (NSArray *)highPriorityAppLayoutsForImageCache:(SBAppSwitcherSnapshotImageCache *)arg1;
- (BOOL)biasForwardForImageCache:(SBAppSwitcherSnapshotImageCache *)arg1;
- (NSRange *)visibleAppLayoutRangeForImageCache:(SBAppSwitcherSnapshotImageCache *)arg1;
- (NSArray *)appLayoutsForImageCache:(SBAppSwitcherSnapshotImageCache *)arg1;
@end

