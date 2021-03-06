//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKRecordObject-Protocol.h>

@class NSDate, NSString;

@interface PKAccountUserInfoUpdate : NSObject <NSSecureCoding, PKRecordObject>
{
    NSDate *_updatedDate;
}

+ (id)recordNamePrefix;
+ (id)recordType;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSDate *updatedDate; // @synthesize updatedDate=_updatedDate;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithRecord:(id)arg1;
- (id)initWithRecord:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

