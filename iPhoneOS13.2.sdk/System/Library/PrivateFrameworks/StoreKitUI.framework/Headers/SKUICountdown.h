//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSURL, UIColor;
@protocol SKUIArtworkProviding;

__attribute__((visibility("hidden")))
@interface SKUICountdown : NSObject
{
    BOOL _isLoaded;
    BOOL _flapped;
    long long _type;
    NSURL *_URL;
    NSDate *_endDate;
    NSUInteger _dateFormat;
    NSDate *_startDate;
    long long _initialValue;
    long long _finalValue;
    long long _rate;
    NSString *_numberFormat;
    UIColor *_fontColor;
    UIColor *_flapTopColor;
    UIColor *_flapBottomColor;
    id <SKUIArtworkProviding> _artworkProvider;
    id <SKUIArtworkProviding> _endArtworkProvider;
}

@property(retain, nonatomic) id <SKUIArtworkProviding> endArtworkProvider; // @synthesize endArtworkProvider=_endArtworkProvider;
@property(retain, nonatomic) id <SKUIArtworkProviding> artworkProvider; // @synthesize artworkProvider=_artworkProvider;
@property(nonatomic, getter=isFlapped) BOOL flapped; // @synthesize flapped=_flapped;
@property(copy, nonatomic) UIColor *flapBottomColor; // @synthesize flapBottomColor=_flapBottomColor;
@property(copy, nonatomic) UIColor *flapTopColor; // @synthesize flapTopColor=_flapTopColor;
@property(copy, nonatomic) UIColor *fontColor; // @synthesize fontColor=_fontColor;
@property(copy, nonatomic) NSString *numberFormat; // @synthesize numberFormat=_numberFormat;
@property(nonatomic) long long rate; // @synthesize rate=_rate;
@property(nonatomic) long long finalValue; // @synthesize finalValue=_finalValue;
@property(nonatomic) long long initialValue; // @synthesize initialValue=_initialValue;
@property(copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) NSUInteger dateFormat; // @synthesize dateFormat=_dateFormat;
@property(copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) long long type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (BOOL)isLoaded;
- (void)updateWithDictionary:(id)arg1;
- (id)initWithCountdownDictionary:(id)arg1;

@end

