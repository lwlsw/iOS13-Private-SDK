//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol CADSyncInterface
- (void)CADDatabaseGetOrCreateSubscribedCalendarsSource:(void (^)(int, NSNumber *))arg1;
- (void)CADDatabaseGetDeletableSources:(void (^)(int, NSArray *))arg1;
- (void)CADDatabaseGetDeletableCalendars:(void (^)(int, NSArray *))arg1;
@end

