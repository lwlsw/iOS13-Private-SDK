//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface RKResponseCountTimestampRecipient : NSObject
{
    BOOL _hasSameRecipient;
    int _count;
    NSDate *_timestamp;
}

@property BOOL hasSameRecipient; // @synthesize hasSameRecipient=_hasSameRecipient;
@property(retain) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property int count; // @synthesize count=_count;
// - (void).cxx_destruct;
- (id)initWithCount:(int)arg1 timestamp:(id)arg2 hasSameRecipient:(BOOL)arg3;

@end

