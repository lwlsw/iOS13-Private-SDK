//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsAutocomplete/CNAutocompleteSourceInclusionPolicy-Protocol.h>

@class NSArray;

@interface _CNAutocompleteAggregateSourceInclusionPolicy : NSObject <CNAutocompleteSourceInclusionPolicy>
{
    NSArray *_policies;
}

@property(readonly) NSArray *policies; // @synthesize policies=_policies;
// - (void).cxx_destruct;
@property(readonly) BOOL includeSupplementalResults;
@property(readonly) BOOL includeCalendarServers;
@property(readonly) BOOL includeDirectoryServers;
@property(readonly) BOOL includePredictions;
@property(readonly) BOOL includeLocalExtensions;
@property(readonly) BOOL includeSuggestions;
@property(readonly) BOOL includeRecents;
@property(readonly) BOOL includeContacts;
- (id)initWithPolicies:(id)arg1;

@end

