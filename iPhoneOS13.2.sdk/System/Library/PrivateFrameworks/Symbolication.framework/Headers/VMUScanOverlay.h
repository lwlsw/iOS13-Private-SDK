//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface VMUScanOverlay : NSObject
{
    NSMutableArray *_rules;
}

+ (id)defaultOverlayWithScanner:(id)arg1;
+ (id)defaultOverlay;
@property(readonly, nonatomic) NSArray *refinementRules; // @synthesize refinementRules=_rules;
// - (void).cxx_destruct;
- (void)addMetadataRefinementRule:(CDUnknownBlockType)arg1;
- (id)initWithScanner:(id)arg1;

@end

