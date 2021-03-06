//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDictionary, NSNumber, NSString;

@interface AFMetrics : NSObject <NSSecureCoding>
{
    NSString *_originalCommandId;
    long long _category;
    NSDictionary *_eventInfo;
    NSNumber *_duration;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSDictionary *eventInfo; // @synthesize eventInfo=_eventInfo;
@property(nonatomic) long long category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *originalCommandId; // @synthesize originalCommandId=_originalCommandId;
// - (void).cxx_destruct;
- (id)description;
- (id)categoryString;
- (double)_roundDouble:(double)arg1 toSignificantDigits:(NSUInteger)arg2;
- (id)aceMetrics;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithOriginalCommandId:(id)arg1 category:(long long)arg2 eventInfo:(id)arg3 duration:(id)arg4;
- (id)initWithOriginalCommandId:(id)arg1 category:(long long)arg2 duration:(id)arg3;

@end

