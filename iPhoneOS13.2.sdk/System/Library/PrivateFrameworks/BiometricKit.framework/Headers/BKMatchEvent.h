//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface BKMatchEvent : NSObject
{
    BOOL _result;
    NSUInteger _timeStamp;
}

+ (id)matchEventWithDictionary:(id)arg1 error:(id )arg2;
@property(nonatomic) NSUInteger timeStamp; // @synthesize timeStamp=_timeStamp;
@property(nonatomic) BOOL result; // @synthesize result=_result;

@end

