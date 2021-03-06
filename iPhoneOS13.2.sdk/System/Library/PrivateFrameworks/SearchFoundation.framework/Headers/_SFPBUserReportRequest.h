//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/_SFPBUserReportRequest-Protocol.h>

@class NSArray, NSData, NSString;

@interface _SFPBUserReportRequest : PBCodable <_SFPBUserReportRequest, NSSecureCoding>
{
    NSString *_affordanceText;
    NSString *_title;
    NSString *_dismissText;
    NSArray *_userReportOptions;
}

@property(copy, nonatomic) NSArray *userReportOptions; // @synthesize userReportOptions=_userReportOptions;
@property(copy, nonatomic) NSString *dismissText; // @synthesize dismissText=_dismissText;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *affordanceText; // @synthesize affordanceText=_affordanceText;
// - (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)userReportOptionsAtIndex:(NSUInteger)arg1;
- (NSUInteger)userReportOptionsCount;
- (void)addUserReportOptions:(id)arg1;
- (void)clearUserReportOptions;
- (id)initWithFacade:(id)arg1;

@end

