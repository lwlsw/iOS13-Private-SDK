//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CSAudioSampleRateConverter : NSObject
{
//     struct OpaqueAudioConverter _sampleRateConverter;
    float _outBufferScaleFactor;
//     struct AudioStreamBasicDescription _inASBD;
//     struct AudioStreamBasicDescription _outASBD;
}

+ (id)downsampler;
+ (id)upsampler;
- (id)convertSampleRateOfBuffer:(id)arg1;
// - (struct OpaqueAudioConverter )_createSampleRateConverterWithInASBD:(struct AudioStreamBasicDescription)arg1 outASBD:(struct AudioStreamBasicDescription)arg2;
- (void)dealloc;
// - (id)initWithInASBD:(struct AudioStreamBasicDescription)arg1 outASBD:(struct AudioStreamBasicDescription)arg2;

@end

