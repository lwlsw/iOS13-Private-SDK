//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CPLAdjustments, CPLDerivativesFilter, CPLResource, NSError, NSString, NSURL;

@protocol CPLDerivativeGenerator
+ (BOOL)isUnsupportedOriginalFormatError:(NSError *)arg1;
+ (void)generateDerivativeResourcesFromInputResource:(CPLResource *)arg1 withAdjustments:(CPLAdjustments *)arg2 destinationDirectory:(NSURL *)arg3 derivativesFilter:(CPLDerivativesFilter *)arg4 completionHandler:(void (^)(NSArray *, NSError *))arg5;
+ (BOOL)canGenerateImageDerivativesFromUTI:(NSString *)arg1;
+ (BOOL)isMovieUTI:(NSString *)arg1;
@end

