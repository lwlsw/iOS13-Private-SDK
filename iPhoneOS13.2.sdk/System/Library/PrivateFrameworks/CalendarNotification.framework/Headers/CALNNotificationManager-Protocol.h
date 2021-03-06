//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CALNNotificationRecord, NSArray, NSString;

@protocol CALNNotificationManager <NSObject>
@property(readonly, nonatomic) BOOL isProtectedDataAvailable;
- (void)removeRecordWithSourceIdentifier:(NSString *)arg1 sourceClientIdentifier:(NSString *)arg2;
- (void)updateRecord:(CALNNotificationRecord *)arg1;
- (void)addRecord:(CALNNotificationRecord *)arg1;
- (NSArray *)fetchRecordsWithSourceIdentifier:(NSString *)arg1;
@end

