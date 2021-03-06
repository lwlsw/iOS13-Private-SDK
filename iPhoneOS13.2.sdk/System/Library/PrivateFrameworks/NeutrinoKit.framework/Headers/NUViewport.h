//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface NUViewport : NSObject <NSCopying>
{
    double _backingScaleFactor;
    CGSize _size;
    CGPoint _position;
    CGPoint _anchorPoint;
}

@property(nonatomic) CGPoint anchorPoint; // @synthesize anchorPoint=_anchorPoint;
@property(nonatomic) CGPoint position; // @synthesize position=_position;
@property(readonly, nonatomic) double backingScaleFactor; // @synthesize backingScaleFactor=_backingScaleFactor;
@property(readonly, nonatomic) CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) CGPoint backingPosition; // @dynamic backingPosition;
@property(readonly, nonatomic) CGSize backingSize; // @dynamic backingSize;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (id)initWithSize:(CGSize)arg1 backingScaleFactor:(double)arg2;
- (id)initWithSize:(CGSize)arg1;
- (id)init;

@end

