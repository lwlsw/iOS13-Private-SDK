//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAKnowledgeKeyValueEntry.h>

@class NSString;

@interface SAKnowledgeKeyValueStringEntry : SAKnowledgeKeyValueEntry
{
}

+ (id)keyValueStringEntryWithDictionary:(id)arg1 context:(id)arg2;
+ (id)keyValueStringEntry;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *value;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

