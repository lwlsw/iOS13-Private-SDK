//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class EDAMIdentity, NSNumber;

@interface EDAMIdentityForAdmin : FATObject
{
    EDAMIdentity *_identity;
    NSNumber *_state;
    NSNumber *_stateChanged;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSNumber *stateChanged; // @synthesize stateChanged=_stateChanged;
@property(retain, nonatomic) NSNumber *state; // @synthesize state=_state;
@property(retain, nonatomic) EDAMIdentity *identity; // @synthesize identity=_identity;
// - (void).cxx_destruct;

@end

