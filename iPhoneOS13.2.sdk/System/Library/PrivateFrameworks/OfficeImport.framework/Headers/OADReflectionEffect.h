//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OADEffect.h>

__attribute__((visibility("hidden")))
@interface OADReflectionEffect : OADEffect
{
    float mBlurRadius;
    float mStartOpacity;
    float mStartPosition;
    float mEndOpacity;
    float mEndPosition;
    float mDistance;
    float mDirection;
    float mFadeDirection;
    float mXScale;
    float mYScale;
    float mXSkew;
    float mYSkew;
    int mAlignment;
    BOOL mRotateWithShape;
}

- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)setRotateWithShape:(BOOL)arg1;
- (BOOL)rotateWithShape;
- (void)setAlignment:(int)arg1;
- (int)alignment;
- (void)setYSkew:(float)arg1;
- (float)ySkew;
- (void)setXSkew:(float)arg1;
- (float)xSkew;
- (void)setYScale:(float)arg1;
- (float)yScale;
- (void)setXScale:(float)arg1;
- (float)xScale;
- (void)setFadeDirection:(float)arg1;
- (float)fadeDirection;
- (void)setDirection:(float)arg1;
- (float)direction;
- (void)setDistance:(float)arg1;
- (float)distance;
- (void)setEndPosition:(float)arg1;
- (float)endPosition;
- (void)setEndOpacity:(float)arg1;
- (float)endOpacity;
- (void)setStartPosition:(float)arg1;
- (float)startPosition;
- (void)setStartOpacity:(float)arg1;
- (float)startOpacity;
- (void)setBlurRadius:(float)arg1;
- (float)blurRadius;
- (void)setStyleColor:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;

@end

