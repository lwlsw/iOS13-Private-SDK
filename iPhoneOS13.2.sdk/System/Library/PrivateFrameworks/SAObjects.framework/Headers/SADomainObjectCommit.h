//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

#import <SAObjects/SADomainObjectCommand-Protocol.h>

@class SADomainObject;

@interface SADomainObjectCommit : SABaseClientBoundCommand <SADomainObjectCommand>
{
}

+ (id)domainObjectCommitWithDictionary:(id)arg1 context:(id)arg2;
+ (id)domainObjectCommit;
- (BOOL)requiresResponse;
@property(retain, nonatomic) SADomainObject *identifier;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

