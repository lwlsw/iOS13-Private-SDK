//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSNumber;

@interface EDAMNoteShareRelationshipRestrictions : FATObject
{
    NSNumber *_noSetReadNote;
    NSNumber *_noSetModifyNote;
    NSNumber *_noSetFullAccess;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSNumber *noSetFullAccess; // @synthesize noSetFullAccess=_noSetFullAccess;
@property(retain, nonatomic) NSNumber *noSetModifyNote; // @synthesize noSetModifyNote=_noSetModifyNote;
@property(retain, nonatomic) NSNumber *noSetReadNote; // @synthesize noSetReadNote=_noSetReadNote;
// - (void).cxx_destruct;

@end

