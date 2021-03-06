//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NTKVictoryAnalogBackgroundColorPalette-Protocol.h>

@class NTKOlympusColorPalette, UIColor;

@interface NTKOlympusAnalogBackgroundPalette : NSObject <NTKVictoryAnalogBackgroundColorPalette>
{
    NTKOlympusColorPalette *_olympusPalette;
}

@property(retain, nonatomic) NTKOlympusColorPalette *olympusPalette; // @synthesize olympusPalette=_olympusPalette;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL hasWhiteElements;
@property(readonly, nonatomic) UIColor *analogDotColor;
@property(readonly, nonatomic) UIColor *logoColor;
@property(readonly, nonatomic) UIColor *numbersColor;
@property(readonly, nonatomic) UIColor *backgroundColor;
- (id)initWithOlympusPalette:(id)arg1 alternatePalette:(id)arg2;
- (id)initWithOlympusPalette:(id)arg1;

@end

