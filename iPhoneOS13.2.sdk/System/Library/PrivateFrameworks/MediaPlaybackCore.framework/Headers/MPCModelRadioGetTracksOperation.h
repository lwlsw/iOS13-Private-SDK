//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPAsyncOperation.h>

@class ICRadioGetTracksRequest, NSString, SSVPlayActivityController;

@interface MPCModelRadioGetTracksOperation : MPAsyncOperation
{
    SSVPlayActivityController *_playActivityController;
    ICRadioGetTracksRequest *_request;
    NSString *_siriAssetInfo;
    id /* CDUnknownBlockType */ _completionHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ completionHandler; // @synthesize completionHandler=_completionHandler;
// - (void).cxx_destruct;
- (void)_runStep:(id)arg1 withFinishHandler:(CDUnknownBlockType)arg2;
- (id)_cacheTracksForStep:(id)arg1;
- (void)execute;
- (id)initWithGetTracksRequest:(id)arg1 siriAssetInfo:(id)arg2 playActivityController:(id)arg3;

@end

