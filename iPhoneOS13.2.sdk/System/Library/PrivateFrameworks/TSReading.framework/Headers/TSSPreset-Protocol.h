//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSSThemeAsset-Protocol.h>

@class NSString;

@protocol TSSPreset <TSSThemeAsset>
@property(readonly, nonatomic) NSString *presetKind;

@optional
- (void)drawSwatchInRect:(CGRect)arg1 inContext:(CGContextRef )arg2;
@end

