//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface NviContext : NSObject
{
    BOOL _requestHistoricalAudio;
    BOOL _shouldLogRawSensorData;
    NSDictionary *_voiceTriggerInfo;
    NSUInteger _reqStartAudioSampleId;
    NSUInteger _reqStartMachAbsTime;
    NSString *_rootLogDir;
}

@property(retain, nonatomic) NSString *rootLogDir; // @synthesize rootLogDir=_rootLogDir;
@property(nonatomic) BOOL shouldLogRawSensorData; // @synthesize shouldLogRawSensorData=_shouldLogRawSensorData;
@property(nonatomic) NSUInteger reqStartMachAbsTime; // @synthesize reqStartMachAbsTime=_reqStartMachAbsTime;
@property(nonatomic) NSUInteger reqStartAudioSampleId; // @synthesize reqStartAudioSampleId=_reqStartAudioSampleId;
@property(nonatomic) BOOL requestHistoricalAudio; // @synthesize requestHistoricalAudio=_requestHistoricalAudio;
@property(retain, nonatomic) NSDictionary *voiceTriggerInfo; // @synthesize voiceTriggerInfo=_voiceTriggerInfo;
// - (void).cxx_destruct;
- (id)description;

@end

