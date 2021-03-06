//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData, NSDate, NSDecimalNumber, NSNumber, NSString;

@interface PKTransitAppletHistoryRecord : NSObject <NSCopying, NSSecureCoding>
{
    NSUInteger _transitModifiers;
    NSNumber *_historySequenceNumber;
    NSUInteger _type;
    NSUInteger _subtype;
    NSUInteger _detail;
    NSDate *_time;
    NSDecimalNumber *_balance;
    NSNumber *_loyaltyBalance;
    NSDecimalNumber *_amount;
    NSNumber *_loyaltyAmount;
    NSNumber *_cityCode;
    NSData *_startStation;
    NSData *_endStation;
    NSString *_transitDetail;
    long long _recordType;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long recordType; // @synthesize recordType=_recordType;
@property(copy, nonatomic) NSString *transitDetail; // @synthesize transitDetail=_transitDetail;
@property(copy, nonatomic) NSData *endStation; // @synthesize endStation=_endStation;
@property(copy, nonatomic) NSData *startStation; // @synthesize startStation=_startStation;
@property(copy, nonatomic) NSNumber *cityCode; // @synthesize cityCode=_cityCode;
@property(copy, nonatomic) NSNumber *loyaltyAmount; // @synthesize loyaltyAmount=_loyaltyAmount;
@property(copy, nonatomic) NSDecimalNumber *amount; // @synthesize amount=_amount;
@property(copy, nonatomic) NSNumber *loyaltyBalance; // @synthesize loyaltyBalance=_loyaltyBalance;
@property(copy, nonatomic) NSDecimalNumber *balance; // @synthesize balance=_balance;
@property(copy, nonatomic) NSDate *time; // @synthesize time=_time;
@property(nonatomic) NSUInteger detail; // @synthesize detail=_detail;
@property(nonatomic) NSUInteger subtype; // @synthesize subtype=_subtype;
@property(nonatomic) NSUInteger type; // @synthesize type=_type;
@property(copy, nonatomic) NSNumber *historySequenceNumber; // @synthesize historySequenceNumber=_historySequenceNumber;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithCoder:(id)arg1;
- (void)_setTransactionHistoryDetailsFromString:(id)arg1;
- (id)initWithDictionary:(id)arg1;
@property(readonly, nonatomic) NSUInteger transitTransactionModifier;
@property(readonly, nonatomic) long long transitTransactionSubtype;
@property(readonly, nonatomic) long long paymentTransactionType;
- (id)concreteTransactionWithCurrency:(id)arg1;
- (id)felicaHistoryRecord;

@end

