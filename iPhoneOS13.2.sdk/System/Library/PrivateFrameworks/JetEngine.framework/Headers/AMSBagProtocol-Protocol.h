//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDate, NSString;

@protocol AMSBagProtocol <NSObject>
- (id)dictionaryForKey:(NSString *)arg1;
- (id)URLForKey:(NSString *)arg1;
- (id)stringForKey:(NSString *)arg1;
- (id)integerForKey:(NSString *)arg1;
- (id)doubleForKey:(NSString *)arg1;
- (void)createSnapshotWithCompletion:(void (^)(AMSSnapshotBag *, NSError *))arg1;
- (id)boolForKey:(NSString *)arg1;
- (id)arrayForKey:(NSString *)arg1;
@property(nonatomic, readonly) NSString *profileVersion;
@property(nonatomic, readonly) NSString *profile;
@property(nonatomic, readonly) NSDate *expirationDate;
- (BOOL)isExpired;
@end

