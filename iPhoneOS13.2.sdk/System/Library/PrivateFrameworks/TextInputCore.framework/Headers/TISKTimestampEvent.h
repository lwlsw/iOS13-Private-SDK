//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/TISKEvent.h>

@interface TISKTimestampEvent : TISKEvent
{
    double _timestamp;
}

@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (double)touchUpTimestamp;
- (double)touchDownTimestamp;
- (BOOL)isMissingATouch;
- (id)init:(int)arg1 timestamp:(double)arg2 order:(long long)arg3;

@end

