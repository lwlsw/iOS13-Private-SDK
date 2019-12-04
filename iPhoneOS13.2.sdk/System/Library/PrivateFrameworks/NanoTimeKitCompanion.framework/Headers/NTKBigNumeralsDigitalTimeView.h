//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/CLKTimeFormatterObserver-Protocol.h>
#import <NanoTimeKitCompanion/NTKTimeView-Protocol.h>

@class CLKDevice, NSDate, NSString, NTKBigNumeralsTimeComponentLabel;

@interface NTKBigNumeralsDigitalTimeView : UIView <CLKTimeFormatterObserver, NTKTimeView>
{
    CLKDevice *_device;
    NTKBigNumeralsTimeComponentLabel *_topLabel;
    NTKBigNumeralsTimeComponentLabel *_bottomLabel;
    NSDate *_overrideDate;
    struct NSNumber *_timerToken;
    _Bool _frozen;
    _Bool _showingStatus;
    unsigned long long _style;
    unsigned long long _typeface;
    unsigned long long _color;
}

+ (long long)uiSensitivity;
@property(readonly, nonatomic) unsigned long long color; // @synthesize color=_color;
@property(readonly, nonatomic) unsigned long long typeface; // @synthesize typeface=_typeface;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) _Bool showingStatus; // @synthesize showingStatus=_showingStatus;
@property(nonatomic, getter=isFrozen) _Bool frozen; // @synthesize frozen=_frozen;
- (void)cleanupTransition;
- (void)applyTransitionFraction:(double)arg1 fromColor:(unsigned long long)arg2 toColor:(unsigned long long)arg3;
- (void)applyColor:(unsigned long long)arg1;
- (void)applyTransitionFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3;
- (void)applyStyle:(unsigned long long)arg1;
- (void)applyTransitionFraction:(double)arg1 fromTypeface:(unsigned long long)arg2 toTypeface:(unsigned long long)arg3;
- (void)applyTypeface:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)_updateLabels;
- (void)setTimeOffset:(double)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)dealloc;
- (id)initWithDevice:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
