//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, NSData, NSDictionary, NSString;

@protocol _PARSearchResponse_Section 
@property(readonly, nonatomic) unsigned long long whichMore;
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSArray *resultIdentifiers;
@property(nonatomic) _Bool doNotFold;
@property(nonatomic) int blockId;
@property(copy, nonatomic) NSString *morePunchout;
@property(copy, nonatomic) NSString *moreUrl;
@property(copy, nonatomic) NSString *moreLabel;
@property(copy, nonatomic) NSString *header;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSString *)resultIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultIdentifiersCount;
- (void)addResultIdentifiers:(NSString *)arg1;
- (void)clearResultIdentifiers;
@end
