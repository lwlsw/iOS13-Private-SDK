//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

__attribute__((visibility("hidden")))
@interface INFVariantsDescriptor : NSObject <NSCopying>
{
    NSUInteger _plurality;
    NSUInteger _gender;
}

+ (id)variant;
+ (id)variantWithVariants:(NSUInteger)arg1;
@property(nonatomic) NSUInteger gender; // @synthesize gender=_gender;
@property(nonatomic) NSUInteger plurality; // @synthesize plurality=_plurality;
- (BOOL)isEqual:(id)arg1;
- (id)variantByRemovingOneAttribute;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithVariants:(NSUInteger)arg1;
- (id)init;
- (id)append:(id)arg1 toString:(id)arg2;
@property(readonly, nonatomic) NSString *dictionaryKey;

@end

