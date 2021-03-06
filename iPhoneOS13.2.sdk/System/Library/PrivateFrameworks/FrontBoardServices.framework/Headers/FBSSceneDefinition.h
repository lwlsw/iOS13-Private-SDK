//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSDescriptionProviding-Protocol.h>

@class FBSSceneClientIdentity, FBSSceneIdentity, FBSSceneSpecification, NSString;

@interface FBSSceneDefinition : NSObject <NSCopying, NSMutableCopying, BSDescriptionProviding>
{
    FBSSceneIdentity *_identity;
    FBSSceneClientIdentity *_clientIdentity;
    FBSSceneSpecification *_specification;
}

+ (id)definition;
@property(copy, nonatomic) FBSSceneSpecification *specification; // @synthesize specification=_specification;
@property(copy, nonatomic) FBSSceneClientIdentity *clientIdentity; // @synthesize clientIdentity=_clientIdentity;
@property(copy, nonatomic) FBSSceneIdentity *identity; // @synthesize identity=_identity;
// - (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isValid;

@end

