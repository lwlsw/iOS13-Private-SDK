//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSData, NSDictionary, NSString, _CPPunchoutForFeedback;

@protocol _CPMapsCardSectionEngagementFeedback 
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSString *resultId;
@property(copy, nonatomic) NSString *cardSectionId;
@property(nonatomic) int feedbackType;
@property(nonatomic) int actionCardType;
@property(nonatomic) int triggerEvent;
@property(retain, nonatomic) _CPPunchoutForFeedback *destination;
@property(nonatomic) unsigned long long timestamp;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end
