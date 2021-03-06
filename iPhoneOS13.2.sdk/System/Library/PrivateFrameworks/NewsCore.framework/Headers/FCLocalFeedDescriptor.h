//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCFeedDescriptor.h>

@class NSArray;
@protocol FCChannelProviding, FCFeedTheming;

@interface FCLocalFeedDescriptor : FCFeedDescriptor
{
    NSArray *_paths;
    id <FCFeedTheming> _feedTheme;
    id <FCChannelProviding> _channel;
}

@property(retain, nonatomic) id <FCChannelProviding> channel; // @synthesize channel=_channel;
@property(retain, nonatomic) id <FCFeedTheming> feedTheme; // @synthesize feedTheme=_feedTheme;
@property(readonly, nonatomic) NSArray *paths; // @synthesize paths=_paths;
// - (void).cxx_destruct;
- (BOOL)isSubscribedTo;
- (BOOL)isSubscribable;
- (id)fetchOperationForHeadlinesWithIDs:(id)arg1;
- (id)streamOfLatestHeadlinesWithContext:(id)arg1;
- (id)theme;
- (id)name;
- (long long)feedType;
- (id)initWithIdentifier:(id)arg1 articlePaths:(id)arg2 theme:(id)arg3 channel:(id)arg4;

@end

