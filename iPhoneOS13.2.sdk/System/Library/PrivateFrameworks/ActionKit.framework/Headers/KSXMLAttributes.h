//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDictionary, NSMutableArray;

@interface KSXMLAttributes : NSObject <NSCopying>
{
    NSMutableArray *_attributes;
}

// - (void).cxx_destruct;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)close;
- (void)addAttribute:(id)arg1 value:(id)arg2;
- (BOOL)hasAttributes;
@property(copy, nonatomic) NSDictionary *attributesAsDictionary;
- (id)initWithXMLAttributes:(id)arg1;
- (id)init;
- (void)writeAttributes:(id)arg1;

@end

