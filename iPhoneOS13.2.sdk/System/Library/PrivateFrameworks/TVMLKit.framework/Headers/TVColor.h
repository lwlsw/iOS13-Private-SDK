//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class IKColor, NSArray, UIColor;

@interface TVColor : NSObject <NSCopying>
{
    IKColor *_ikColor;
}

@property(readonly, nonatomic) __weak IKColor *ikColor; // @synthesize ikColor=_ikColor;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *gradientPoints;
@property(readonly, nonatomic) NSArray *gradientColors;
@property(readonly, nonatomic) long long colorType;
@property(readonly, nonatomic) UIColor *color;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithColor:(id)arg1;

@end

