//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString;

@protocol HFTemperatureFormatter <NSObject, NSCopying>
@property(nonatomic) NSUInteger maximumFractionDigits;
@property(copy, nonatomic) NSString *fallbackTemperatureString;
@property(nonatomic) BOOL inputIsCelsius;

@optional
@property(nonatomic) NSUInteger minimumFractionDigits;
@end

