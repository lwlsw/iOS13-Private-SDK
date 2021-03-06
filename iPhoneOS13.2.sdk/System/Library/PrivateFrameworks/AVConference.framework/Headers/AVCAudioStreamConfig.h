//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AVCAudioStreamConfig : NSObject
{
    long long _codecType;
    BOOL _cnEnabled;
    NSUInteger _cnPayloadType;
    NSUInteger _dtmfPayloadType;
    NSUInteger _dtmfTimestampRate;
    NSUInteger _ptime;
    NSUInteger _maxPtime;
    NSUInteger _channelAwareOffset;
    long long _audioStreamMode;
    unsigned int _codecRateModeMask;
    long long _preferredCodecRateMode;
    BOOL _octetAligned;
    BOOL _headerFullOnly;
    BOOL _dtxEnabled;
    BOOL _latencySensitiveMode;
    BOOL _enableMaxBitrateOnNoChangeCMR;
    NSUInteger _numRedundantPayloads;
    NSUInteger _txRedPayloadType;
    NSUInteger _rxRedPayloadType;
    float _volume;
}

+ (long long)clientCodecRateModeForCodecRateMode:(int)arg1;
+ (int)codecRateModeForClientCodecRateMode:(long long)arg1;
+ (unsigned int)clientCodecRateMaskForCodecRateMode:(unsigned int)arg1;
+ (unsigned int)codecRateMaskForClientCodecRateMode:(unsigned int)arg1;
+ (long long)clientStreamModeWithStreamMode:(long long)arg1;
+ (long long)streamModeWithClientStreamMode:(long long)arg1;
+ (long long)clientCodecTypeWithCodecType:(long long)arg1;
+ (long long)codecTypeWithClientCodecType:(long long)arg1;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) BOOL enableMaxBitrateOnNoChangeCMR; // @synthesize enableMaxBitrateOnNoChangeCMR=_enableMaxBitrateOnNoChangeCMR;
@property(nonatomic) NSUInteger rxRedPayloadType; // @synthesize rxRedPayloadType=_rxRedPayloadType;
@property(nonatomic) NSUInteger txRedPayloadType; // @synthesize txRedPayloadType=_txRedPayloadType;
@property(nonatomic) NSUInteger numRedundantPayloads; // @synthesize numRedundantPayloads=_numRedundantPayloads;
@property(nonatomic, getter=isLatencySensitiveMode) BOOL latencySensitiveMode; // @synthesize latencySensitiveMode=_latencySensitiveMode;
@property(nonatomic) long long preferredCodecRateMode; // @synthesize preferredCodecRateMode=_preferredCodecRateMode;
@property(nonatomic) unsigned int codecRateModeMask; // @synthesize codecRateModeMask=_codecRateModeMask;
@property(nonatomic, getter=isDTXEnabled) BOOL dtxEnabled; // @synthesize dtxEnabled=_dtxEnabled;
@property(nonatomic, getter=isHeaderFullOnly) BOOL headerFullOnly; // @synthesize headerFullOnly=_headerFullOnly;
@property(nonatomic, getter=isOctectAligned) BOOL octetAligned; // @synthesize octetAligned=_octetAligned;
@property(nonatomic) NSUInteger channelAwareOffset; // @synthesize channelAwareOffset=_channelAwareOffset;
@property(nonatomic) NSUInteger maxPtime; // @synthesize maxPtime=_maxPtime;
@property(nonatomic) NSUInteger ptime; // @synthesize ptime=_ptime;
@property(nonatomic) NSUInteger dtmfTimestampRate; // @synthesize dtmfTimestampRate=_dtmfTimestampRate;
@property(nonatomic) NSUInteger dtmfPayloadType; // @synthesize dtmfPayloadType=_dtmfPayloadType;
@property(nonatomic) NSUInteger cnPayloadType; // @synthesize cnPayloadType=_cnPayloadType;
@property(nonatomic, getter=isCNEnabled) BOOL cnEnabled; // @synthesize cnEnabled=_cnEnabled;
@property(nonatomic) long long codecType; // @synthesize codecType=_codecType;
@property(nonatomic) long long audioStreamMode; // @synthesize audioStreamMode=_audioStreamMode;
- (id)dictionary;
- (void)setUpWithDictionary:(id)arg1;
- (BOOL)isRedValid;
- (BOOL)isCNValid;
- (BOOL)isDTMFValid;
- (BOOL)isValid;
- (id)init;

@end

