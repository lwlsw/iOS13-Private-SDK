//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CSSearchableItem, EDSearchableIndexVerificationData, EMSearchableIndexQueryExpression, NSArray, NSDictionary;

@protocol EDSearchableIndexTesting <NSObject>
@property(readonly, copy, nonatomic) NSArray *fetchAttributes;
- (BOOL)verifySearchableItem:(CSSearchableItem *)arg1 againstExpectedData:(EDSearchableIndexVerificationData *)arg2;
- (EMSearchableIndexQueryExpression *)expressionFromDataSamples:(NSDictionary *)arg1;
- (EDSearchableIndexVerificationData *)transformDataForVerification:(EDSearchableIndexVerificationData *)arg1;
@end

