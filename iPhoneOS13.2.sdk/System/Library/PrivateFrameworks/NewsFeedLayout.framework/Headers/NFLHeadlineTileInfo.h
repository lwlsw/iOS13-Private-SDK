//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsFeedLayout/NFLFeedTileInfo-Protocol.h>

@class NSArray, NSString;
@protocol FCHeadlineProviding;

@interface NFLHeadlineTileInfo : NSObject <NFLFeedTileInfo>
{
    _Bool _aggregated;
    NSString *_groupIdentifier;
    id <FCHeadlineProviding> _headline;
    NSString *_bookmarkableIdentifier;
    NSString *_namespacedIdentifier;
}

+ (id)identifierWithBookmarkableIdentifier:(id)arg1 groupIdentifier:(id)arg2;
@property(copy, nonatomic) NSString *namespacedIdentifier; // @synthesize namespacedIdentifier=_namespacedIdentifier;
@property(readonly, copy, nonatomic) NSString *bookmarkableIdentifier; // @synthesize bookmarkableIdentifier=_bookmarkableIdentifier;
@property(copy, nonatomic) id <FCHeadlineProviding> headline; // @synthesize headline=_headline;
@property(readonly, copy, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(readonly, nonatomic, getter=isAggregated) _Bool aggregated; // @synthesize aggregated=_aggregated;
- (id)updatedTileInfoWithNewHeadline:(id)arg1;
@property(readonly, nonatomic) unsigned long long tileInfoType;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, nonatomic) unsigned long long bookmarkOffsetType;
@property(readonly, nonatomic) NFLHeadlineTileInfo *feedTileInfoForBookmarking;
@property(readonly, nonatomic, getter=isSelectable) _Bool selectable;
@property(readonly, nonatomic) _Bool pageable;
@property(readonly, nonatomic) NSArray *underlyingFeedElements;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHeadline:(id)arg1 groupIdentifier:(id)arg2;
- (id)initWithHeadline:(id)arg1 groupIdentifier:(id)arg2 aggregated:(_Bool)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
