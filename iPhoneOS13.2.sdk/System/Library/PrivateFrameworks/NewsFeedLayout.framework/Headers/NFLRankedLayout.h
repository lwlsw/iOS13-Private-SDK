//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NFLFeedCollectionViewLayoutAttributes, NSMutableDictionary;

@interface NFLRankedLayout : NSObject <NSCopying>
{
    _Bool _vetoed;
    NFLFeedCollectionViewLayoutAttributes *_layoutAttributes;
    double _rank;
    NSMutableDictionary *_ranks;
}

@property(copy, nonatomic) NSMutableDictionary *ranks; // @synthesize ranks=_ranks;
@property(nonatomic) _Bool vetoed; // @synthesize vetoed=_vetoed;
@property(nonatomic) double rank; // @synthesize rank=_rank;
@property(retain, nonatomic) NFLFeedCollectionViewLayoutAttributes *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
