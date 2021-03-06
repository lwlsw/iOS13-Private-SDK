//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, WLKBasicEpisodeMetadata;

@interface WLKCanonicalContainerResponse : NSObject
{
    BOOL _watchListable;
    BOOL _watchListed;
    NSDictionary *_dictionary;
    NSString *_canonicalID;
    NSUInteger _contentType;
    WLKBasicEpisodeMetadata *_currentEpisode;
    NSDictionary *_defaultSeason;
    NSArray *_channels;
}

@property(readonly, copy, nonatomic) NSArray *channels; // @synthesize channels=_channels;
@property(readonly, copy, nonatomic) NSDictionary *defaultSeason; // @synthesize defaultSeason=_defaultSeason;
@property(readonly, copy, nonatomic) WLKBasicEpisodeMetadata *currentEpisode; // @synthesize currentEpisode=_currentEpisode;
@property(readonly, nonatomic, getter=isWatchListed) BOOL watchListed; // @synthesize watchListed=_watchListed;
@property(readonly, nonatomic, getter=isWatchListable) BOOL watchListable; // @synthesize watchListable=_watchListable;
@property(readonly, nonatomic) NSUInteger contentType; // @synthesize contentType=_contentType;
@property(readonly, copy, nonatomic) NSString *canonicalID; // @synthesize canonicalID=_canonicalID;
@property(readonly, copy, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
// - (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)arg1;

@end

