//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBTestRecipe-Protocol.h>

@class NSMapTable;

@interface SBStatusBarStyleOverridesAssertionTestRecipe : NSObject <SBTestRecipe>
{
    NSMapTable *_assertionsByApp;
}

+ (void)load;
// - (void).cxx_destruct;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (id)init;
- (id)title;

@end

