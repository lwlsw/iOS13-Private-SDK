//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray;

@protocol SBApplicationLifecycleObserver
- (void)applicationRestrictionsMayHaveChanged;
- (void)applicationVisibilityMayHaveChanged;
- (void)applicationsDemoted:(NSArray *)arg1;
- (void)applicationsRemoved:(NSArray *)arg1;
- (void)applicationsUpdated:(NSArray *)arg1;
- (void)applicationsReplaced:(NSArray *)arg1;
- (void)applicationsAdded:(NSArray *)arg1;
@end

