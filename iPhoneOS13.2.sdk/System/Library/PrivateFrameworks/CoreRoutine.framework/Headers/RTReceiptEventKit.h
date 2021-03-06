//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreRoutine/RTReceipt.h>


@class NSString;

@interface RTReceiptEventKit : RTReceipt <NSSecureCoding, NSCopying>
{
    NSString *_title;
    NSString *_location;
    NSString *_calendarIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *calendarIdentifier; // @synthesize calendarIdentifier=_calendarIdentifier;
@property(copy, nonatomic) NSString *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
// - (void).cxx_destruct;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 location:(id)arg2 calendarIdentifier:(id)arg3;

@end

