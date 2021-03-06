//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>
#import <HomeAI/HMIMotionDetector-Protocol.h>

@class NSMutableArray;

@interface HMISparseOpticalFlowMotionDetector : HMFObject <HMIMotionDetector, HMFLogging>
{
    NSMutableArray *_frames;
    CGSize _size;
}

+ (id)logCategory;
@property(readonly) CGSize size; // @synthesize size=_size;
@property(readonly) NSMutableArray *frames; // @synthesize frames=_frames;
// - (void).cxx_destruct;
- (id)detectWithGlobalMotionScore:(float )arg1;
// - (id)_computeOpticalFlow:(struct __CVBuffer )arg1 with:(struct __CVBuffer )arg2 globalMotionScore:(float )arg3;
// - (void)appendFramePixelBuffer:(struct __CVBuffer )arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (id)initWithSize:(CGSize)arg1;

@end

