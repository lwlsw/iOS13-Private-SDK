//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface TSWPTab : NSObject <NSCopying>
{
    double _position;
    int _alignment;
    NSString *_leader;
}

+ (id)tab;
+ (id)displayStringFromTabLeader:(id)arg1;
+ (id)stringFromTabAlignment:(int)arg1 isRTL:(BOOL)arg2;
+ (int)tabAlignmentFromString:(id)arg1 isRTL:(BOOL)arg2;
+ (id)tabLeaderFromDisplayString:(id)arg1;
+ (id)kTabStopLeaderStringArrowRTL;
+ (id)kTabStopLeaderStringArrow;
+ (id)kTabStopLeaderStringUnderscore;
+ (id)kTabStopLeaderStringDash;
+ (id)kTabStopLeaderStringPoint;
+ (id)kTabStopDisplayStringArrow;
+ (id)kTabStopDisplayStringUnderscore;
+ (id)kTabStopDisplayStringDash;
+ (id)kTabStopDisplayStringPoint;
+ (id)kTabStopDisplayStringNone;
+ (id)kTabStopAlignmentStringDecimal;
+ (id)kTabStopAlignmentStringRight;
+ (id)kTabStopAlignmentStringCenter;
+ (id)kTabStopAlignmentStringLeft;
+ (void)initialize;
@property(copy, nonatomic) NSString *leader; // @synthesize leader=_leader;
@property(nonatomic) int alignment; // @synthesize alignment=_alignment;
@property(nonatomic) double position; // @synthesize position=_position;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPosition:(double)arg1;
- (long long)compare:(id)arg1;
- (long long)compareToPosition:(double)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithPosition:(double)arg1 alignment:(int)arg2 leader:(id)arg3;
- (id)init;
- (void)dealloc;
- (void)setPositionInInches:(double)arg1;
- (double)positionInInches;

@end

