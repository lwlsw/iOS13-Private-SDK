//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface EFPriorityDesignator : NSObject
{
    NSUInteger _priority;
}

+ (void)destroyCurrentDesignator;
+ (id)pushNewDesignator;
+ (id)currentDesignatorStack;
+ (id)currentDesignatorStackIfExists;
+ (id)currentDesignatorIfExists;
+ (id)installNewDesignator;
+ (id)currentDesignator;
@property(nonatomic) NSUInteger priority; // @synthesize priority=_priority;

@end

