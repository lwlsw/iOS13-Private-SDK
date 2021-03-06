//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDSupportedAudioStreamConfiguration, HMDSupportedRTPConfiguration, HMDSupportedVideoStreamConfiguration;

@interface HMDCameraSupportedConfigurationCache : HMFObject
{
    HMDSupportedVideoStreamConfiguration *_supportedVideoStreamConfiguration;
    HMDSupportedAudioStreamConfiguration *_supportedAudioStreamConfiguration;
    HMDSupportedRTPConfiguration *_supportedRTPConfiguration;
}

@property(retain, nonatomic) HMDSupportedRTPConfiguration *supportedRTPConfiguration; // @synthesize supportedRTPConfiguration=_supportedRTPConfiguration;
@property(retain, nonatomic) HMDSupportedAudioStreamConfiguration *supportedAudioStreamConfiguration; // @synthesize supportedAudioStreamConfiguration=_supportedAudioStreamConfiguration;
@property(retain, nonatomic) HMDSupportedVideoStreamConfiguration *supportedVideoStreamConfiguration; // @synthesize supportedVideoStreamConfiguration=_supportedVideoStreamConfiguration;
// - (void).cxx_destruct;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

