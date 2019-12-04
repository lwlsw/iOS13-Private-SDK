//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


#import <CoreParsec/_CPProcessableFeedback-Protocol.h>
#import <CoreParsec/_CPSearchViewDisappearFeedback-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface _CPSearchViewDisappearFeedback : PBCodable <_CPProcessableFeedback, _CPSearchViewDisappearFeedback, NSSecureCoding>
{
    int _viewDisappearEvent;
    unsigned long long _timestamp;
}

@property(nonatomic) int viewDisappearEvent; // @synthesize viewDisappearEvent=_viewDisappearEvent;
@property(nonatomic) unsigned long long timestamp;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly) NSUInteger hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)init;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id feedbackJSON;
@property(readonly) Class superclass;

@end
