//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, REScriptToken;

@interface REScriptASTNode : NSObject
{
    REScriptToken *_token;
}

+ (id)parseBuffer:(id)arg1 error:(id )arg2;
@property(readonly, nonatomic) REScriptToken *token; // @synthesize token=_token;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *dependencies;
- (id)initWithToken:(id)arg1;

@end

