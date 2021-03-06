//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSData, NSDictionary, _PARSilhouette_Topic;

@protocol _PARSilhouette <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSArray *topics;
@property(nonatomic) int portraitVersion;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_PARSilhouette_Topic *)topicsAtIndex:(NSUInteger)arg1;
- (NSUInteger)topicsCount;
- (void)addTopics:(_PARSilhouette_Topic *)arg1;
- (void)clearTopics;
@end

