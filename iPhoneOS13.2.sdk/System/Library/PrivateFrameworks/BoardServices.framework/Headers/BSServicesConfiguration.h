//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BoardServices/BSDescriptionProviding-Protocol.h>

@class NSDictionary, NSOrderedSet, NSSet, NSString;

@interface BSServicesConfiguration : NSObject <BSDescriptionProviding>
{
    NSDictionary *_domainsByIdentifier;
    NSOrderedSet *_orderedDomains;
}

+ (id)defaultConfiguration;
@property(readonly, copy, nonatomic) NSOrderedSet *_orderedDomains; // @synthesize _orderedDomains;
// - (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)_initWithDomainsByIdentifier:(id)arg1;
- (id)domainsContainingServiceIdentifier:(id)arg1;
- (id)domainForMachName:(id)arg1;
- (id)domainForIdentifier:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *domains;
- (id)init;

@end

