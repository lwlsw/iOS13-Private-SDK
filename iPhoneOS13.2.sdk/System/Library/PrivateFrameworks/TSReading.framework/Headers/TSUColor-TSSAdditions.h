//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSUtility/TSUColor.h>

#import <TSReading/TSSPreset-Protocol.h>
#import <TSReading/TSSPresetSource-Protocol.h>
#import <TSReading/TSSThemeAsset-Protocol.h>

@class NSString;

@interface TSUColor (TSSAdditions) <TSSPreset, TSSPresetSource, TSSThemeAsset>
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (id)presetKinds;
+ (id)p_defaultPresetColors:(int)arg1;
+ (id)highContrastBackgroundColorForPreset:(id)arg1;
- (BOOL)isThemeEquivalent:(id)arg1;
@property(readonly, nonatomic) NSString *presetKind;
@end

