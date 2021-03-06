//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoVisiblePercentageManager-Protocol.h>

@class SVWeakObjectCache;
@protocol SVVideoVisiblePercentageProviderFactory;

@interface SVVideoVisiblePercentageManager : NSObject <SVVideoVisiblePercentageManager>
{
    id <SVVideoVisiblePercentageProviderFactory> _visiblePercentageProviderFactory;
    SVWeakObjectCache *_visiblePercentageProviders;
}

@property(readonly, nonatomic) SVWeakObjectCache *visiblePercentageProviders; // @synthesize visiblePercentageProviders=_visiblePercentageProviders;
@property(readonly, nonatomic) id <SVVideoVisiblePercentageProviderFactory> visiblePercentageProviderFactory; // @synthesize visiblePercentageProviderFactory=_visiblePercentageProviderFactory;
// - (void).cxx_destruct;
- (id)_visiblePercentageProviderForVideo:(id)arg1;
- (id)visiblePercentageReporterForVideo:(id)arg1;
- (id)visiblePercentageProviderForVideo:(id)arg1;
- (id)initWithVisiblePercentageProviderFactory:(id)arg1;

@end

