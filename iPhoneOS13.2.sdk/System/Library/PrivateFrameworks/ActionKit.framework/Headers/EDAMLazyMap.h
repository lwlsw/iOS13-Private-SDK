//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSDictionary, NSSet;

@interface EDAMLazyMap : FATObject
{
    NSSet *_keysOnly;
    NSDictionary *_fullMap;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSDictionary *fullMap; // @synthesize fullMap=_fullMap;
@property(retain, nonatomic) NSSet *keysOnly; // @synthesize keysOnly=_keysOnly;
// - (void).cxx_destruct;

@end

