//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface HKMCLoggedDataMetric : NSObject
{
    NSDictionary *_eventPayload;
    NSString *_method;
    NSNumber *_dayIndexLoggingOffset;
}

+ (id)eventName;
@property(retain, nonatomic) NSNumber *dayIndexLoggingOffset; // @synthesize dayIndexLoggingOffset=_dayIndexLoggingOffset;
@property(readonly, nonatomic) NSString *method; // @synthesize method=_method;
@property(copy, nonatomic) NSDictionary *eventPayload; // @synthesize eventPayload=_eventPayload;
- (id)description;
- (id)initWithMethod:(id)arg1;

@end
