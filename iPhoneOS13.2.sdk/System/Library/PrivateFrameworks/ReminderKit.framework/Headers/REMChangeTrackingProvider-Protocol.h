//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSSet, NSString, REMChangeTracking, REMObjectID;

@protocol REMChangeTrackingProvider
- (REMChangeTracking *)provideChangeTrackingForAccountID:(REMObjectID *)arg1 clientName:(NSString *)arg2 transactionAuthorKeysToExclude:(NSSet *)arg3;
- (REMChangeTracking *)provideChangeTrackingForAccountID:(REMObjectID *)arg1 clientName:(NSString *)arg2;
@end

