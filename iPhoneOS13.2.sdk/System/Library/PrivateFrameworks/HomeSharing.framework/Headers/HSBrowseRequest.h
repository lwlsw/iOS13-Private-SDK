//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeSharing/HSRequest.h>

@interface HSBrowseRequest : HSRequest
{
}

+ (id)requestWithDatabaseID:(unsigned int)arg1 browseGroupType:(long long)arg2;
- (id)_stringForBrowseGroupType:(long long)arg1;
- (id)canonicalResponseForResponse:(id)arg1;
- (id)initWithDatabaseID:(unsigned int)arg1 browseGroupType:(long long)arg2;

@end

