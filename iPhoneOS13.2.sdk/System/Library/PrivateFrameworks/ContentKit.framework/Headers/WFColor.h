//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSColor, UIColor;

@interface WFColor : NSObject <NSSecureCoding, NSCopying>
{
    UIColor *_platformColor;
    struct CGColor *_CGColor;
    NSColor *_NSColor;
}

+ (_Bool)supportsSecureCoding;
+ (id)clearColor;
+ (id)whiteColor;
+ (id)colorWithDisplayP3Red:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithWhite:(double)arg1 alpha:(double)arg2;
+ (id)colorWithCGColor:(struct CGColor *)arg1;
@property(readonly, nonatomic) NSColor *NSColor; // @synthesize NSColor=_NSColor;
@property(readonly, nonatomic) struct CGColor *CGColor; // @synthesize CGColor=_CGColor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;
@property(readonly, nonatomic) UIColor *UIColor;
@property(readonly, nonatomic) UIColor *platformColor;
- (id)initWithPlatformColor:(id)arg1;
- (id)initWithDisplayP3Red:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)initWithWhite:(double)arg1 alpha:(double)arg2;
- (id)init;
- (void)dealloc;
- (id)initWithCGColor:(struct CGColor *)arg1;

@end
