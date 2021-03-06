//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/PDAnimateBehavior.h>

@class OADColor;

__attribute__((visibility("hidden")))
@interface PDAnimateColorBehavior : PDAnimateBehavior
{
    BOOL mHasBy;
    double mBy[3];
    BOOL mHasFrom;
    OADColor *mFrom;
    BOOL mHasTo;
    OADColor *mTo;
    BOOL mHasColorSpace;
    int mColorSpace;
    BOOL mHasColorDirection;
    int mDirection;
}

// - (void).cxx_destruct;
- (void)setDirection:(int)arg1;
- (int)direction;
- (BOOL)hasColorDirection;
- (void)setColorSpace:(int)arg1;
- (int)colorSpace;
- (BOOL)hasColorSpace;
- (void)setTo:(id)arg1;
- (id)to;
- (BOOL)hasTo;
- (void)setFrom:(id)arg1;
- (id)from;
- (BOOL)hasFrom;
- (void)setBy:(double [3])arg1;
- (double ()[3])by;
- (BOOL)hasBy;

@end

