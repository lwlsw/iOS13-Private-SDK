//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccessibilityUtilities/AXReplayableGesture.h>

@interface AXPageTurningReplayableGesture : AXReplayableGesture
{
    BOOL _isLeftToRightSwipe;
    BOOL _isLandscape;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL isLandscape; // @synthesize isLandscape=_isLandscape;
@property(nonatomic) BOOL isLeftToRightSwipe; // @synthesize isLeftToRightSwipe=_isLeftToRightSwipe;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)updateForLandscape:(BOOL)arg1;
- (BOOL)arePointsDeviceRelative;
- (double)forceForFingerIdentifier:(id)arg1 atEventIndex:(NSUInteger)arg2;
- (CGPoint)pointForFingerIdentifier:(id)arg1 atEventIndex:(NSUInteger)arg2;
- (double)timeAtEventIndex:(NSUInteger)arg1;
- (id)fingerIdentifiersAtEventIndex:(NSUInteger)arg1;
- (NSUInteger)numberOfEvents;
- (id)initForLeftToRightSwipe:(BOOL)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

