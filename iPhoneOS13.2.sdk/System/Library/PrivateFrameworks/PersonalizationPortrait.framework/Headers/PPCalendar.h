//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface PPCalendar : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_calendarIdentifier;
    NSString *_title;
    CGColorRef _color;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) CGColorRef color; // @synthesize color=_color;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *calendarIdentifier; // @synthesize calendarIdentifier=_calendarIdentifier;
// - (void).cxx_destruct;
- (BOOL)isEqualToCalendar:(id)arg1;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithCalendarIdentifier:(id)arg1 title:(id)arg2 color:(CGColorRef)arg3;
- (id)initWithEKCalendar:(id)arg1;
- (id)init;

@end

