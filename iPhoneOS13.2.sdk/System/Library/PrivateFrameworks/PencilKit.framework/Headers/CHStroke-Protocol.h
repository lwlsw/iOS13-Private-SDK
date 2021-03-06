//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol CHStrokeIdentifier;

@protocol CHStroke <NSObject>
@property(readonly, nonatomic) double endTimestamp;
@property(readonly, nonatomic) double startTimestamp;
@property(readonly, nonatomic) CGRect bounds;
@property(readonly, retain, nonatomic) id <CHStrokeIdentifier> strokeIdentifier;
- (void)enumeratePointsWithDistanceStep:(double)arg1 usingBlock:(void (^)(CGPoint, double, BOOL ))arg2;
- (void)enumeratePointsWithTimestep:(double)arg1 usingBlock:(void (^)(CGPoint, double, BOOL ))arg2;
@end

