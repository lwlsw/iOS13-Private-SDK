//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLCombinedAssetSearchResult.h>

@class NSString;

@interface PLNamedCombinedAssetSearchResult : PLCombinedAssetSearchResult
{
    NSString *_name;
}

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)hasSpecialName;
- (id)matchRanges;
- (unsigned long long)matchCount;
- (id)contentStrings;
- (id)initWithName:(id)arg1 assetSearchResults:(id)arg2 canOverlap:(_Bool)arg3;

@end
