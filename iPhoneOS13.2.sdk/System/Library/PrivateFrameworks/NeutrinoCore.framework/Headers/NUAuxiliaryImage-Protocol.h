//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AVDepthData, AVPortraitEffectsMatte, AVSemanticSegmentationMatte, NSDictionary;

@protocol NUAuxiliaryImage <NSObject>
@property(readonly) long long auxiliaryImageType;
// - (struct __CVBuffer )cvPixelBufferRef;
- (unsigned int)pixelFormatType;
- (NSDictionary *)dictionaryRepresentationForAuxiliaryDataType:(id )arg1;
// - (id)auxiliaryImageByReplacingAuxiliaryImageWithPixelBuffer:(struct __CVBuffer )arg1 error:(id )arg2;
- (id)auxiliaryImageByApplyingExifOrientation:(unsigned int)arg1;

@optional
- (AVSemanticSegmentationMatte *)underlyingAVSemanticSegmentationMatte;
- (AVPortraitEffectsMatte *)underlyingAVPortraitEffectsMatte;
- (AVDepthData *)underlyingAVDepthData;
@end

