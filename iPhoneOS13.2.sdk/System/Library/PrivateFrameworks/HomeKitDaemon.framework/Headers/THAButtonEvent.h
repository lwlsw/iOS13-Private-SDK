//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class THAButton;

@interface THAButtonEvent : NSObject
{
    THAButton *_button;
    NSUInteger _state;
    double _timestamp;
}

@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) NSUInteger state; // @synthesize state=_state;
@property(retain, nonatomic) THAButton *button; // @synthesize button=_button;
// - (void).cxx_destruct;
- (id)serialize;

@end

