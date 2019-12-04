//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PipelineKit/PIOperationSubclass.h>

@class CLSLocationCache;

@interface CLSCachedGeocoderOperation : PIOperationSubclass
{
    id _location;
    CLSLocationCache *_locationCache;
    double _accuracy;
    _Bool _forceQuery;
}

+ (double)recommendedAccuracy;
+ (id)operationWithLocation:(id)arg1 completionBlock:(id /* block */)arg2;
+ (id)operationWithLocation:(id)arg1 withAccuracy:(double)arg2;
+ (id)operationWithLocation:(id)arg1;
@property _Bool forceQuery; // @synthesize forceQuery=_forceQuery;
- (void)cancel;
- (void)execute;
- (id)initWithLocation:(id)arg1 withAccuracy:(double)arg2;

@end
