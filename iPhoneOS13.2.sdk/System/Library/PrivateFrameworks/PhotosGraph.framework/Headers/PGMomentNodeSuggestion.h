//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGSuggestion-Protocol.h>

@class NSArray, NSDate, NSSet, NSString;

@interface PGMomentNodeSuggestion : NSObject <PGSuggestion>
{
    _Bool _containsUnverifiedPersons;
    unsigned char _notificationQuality;
    unsigned short _type;
    unsigned short _subtype;
    unsigned short _notificationState;
    NSSet *_features;
    NSArray *_suggestedPersonLocalIdentifiers;
    NSArray *_keyAssets;
    NSArray *_representativeAssets;
    NSDate *_universalStartDate;
    NSDate *_universalEndDate;
    NSString *_title;
    NSString *_subtitle;
}

@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSDate *universalEndDate; // @synthesize universalEndDate=_universalEndDate;
@property(readonly, nonatomic) NSDate *universalStartDate; // @synthesize universalStartDate=_universalStartDate;
@property(readonly, nonatomic) NSArray *representativeAssets; // @synthesize representativeAssets=_representativeAssets;
@property(readonly, nonatomic) NSArray *keyAssets; // @synthesize keyAssets=_keyAssets;
@property(nonatomic) unsigned char notificationQuality; // @synthesize notificationQuality=_notificationQuality;
@property(readonly, nonatomic) _Bool containsUnverifiedPersons; // @synthesize containsUnverifiedPersons=_containsUnverifiedPersons;
@property(readonly, copy, nonatomic) NSArray *suggestedPersonLocalIdentifiers; // @synthesize suggestedPersonLocalIdentifiers=_suggestedPersonLocalIdentifiers;
@property(readonly, nonatomic) NSSet *features; // @synthesize features=_features;
@property(nonatomic) unsigned short notificationState; // @synthesize notificationState=_notificationState;
@property(readonly, nonatomic) unsigned short subtype; // @synthesize subtype=_subtype;
@property(readonly, nonatomic) unsigned short type; // @synthesize type=_type;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) unsigned long long relevanceDurationInDays;
@property(readonly, nonatomic) id recipe;
@property(readonly, nonatomic) unsigned short state;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) long long version;
- (id)initWithType:(unsigned short)arg1 subtype:(unsigned short)arg2 momentNode:(id)arg3 sharingSuggestionResults:(id)arg4 loggingConnection:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly, nonatomic) _Bool isInvalid;
@property(readonly, copy, nonatomic) NSArray *reasons;
@property(readonly) Class superclass;

@end
