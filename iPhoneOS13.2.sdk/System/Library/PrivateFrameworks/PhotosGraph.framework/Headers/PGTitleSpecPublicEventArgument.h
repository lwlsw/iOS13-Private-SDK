//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosGraph/PGTitleSpecArgument.h>

@interface PGTitleSpecPublicEventArgument : PGTitleSpecArgument
{
    _Bool _shouldUseLongPublicEventTitle;
    unsigned long long _type;
}

+ (id)_cleanUpEventName:(id)arg1;
+ (id)argumentWithPublicEventType:(unsigned long long)arg1 shouldUseLongPublicEventTitle:(_Bool)arg2;
+ (id)argumentWithPublicEventType:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool shouldUseLongPublicEventTitle; // @synthesize shouldUseLongPublicEventTitle=_shouldUseLongPublicEventTitle;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)_generateTitleWithCategoryNameForPublicEventNode:(id)arg1;
- (id)_generateTitleWithPerformerNamesForPublicEventNode:(id)arg1;
- (id)_generateTitleWithBusinessNameForPublicEventNode:(id)arg1;
- (id)_generateTitleWithEventNameForPublicEventNode:(id)arg1;
- (id)_commonPublicEventNodeForMomentNodes:(id)arg1;
- (id)_resolvedStringWithPublicEventNode:(id)arg1 inMomentNodes:(id)arg2;
- (id)_resolvedStringWithMomentNodes:(id)arg1 features:(id)arg2;
- (id)_resolvedStringWithMomentNodes:(id)arg1;
- (id)initWithPublicEventType:(unsigned long long)arg1 shouldUseLongPublicEventTitle:(_Bool)arg2;
- (id)initWithPublicEventType:(unsigned long long)arg1;

@end
