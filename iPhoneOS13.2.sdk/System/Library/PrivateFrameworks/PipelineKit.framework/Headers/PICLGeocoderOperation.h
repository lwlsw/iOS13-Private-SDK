//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PipelineKit/PIOperationSubclass.h>

@class NSObject;
@protocol OS_dispatch_source;

@interface PICLGeocoderOperation : PIOperationSubclass
{
    NSObject<OS_dispatch_source> *_timer;
}

+ (id)operationForceGeocoderWithLocation:(id)arg1 completionBlock:(id /* block */)arg2;
+ (id)operationWithLocation:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)_stopTimeOut;
- (void)_setupTimeOutForGeocoder:(id)arg1 finishBlock:(id /* block */)arg2;

@end
