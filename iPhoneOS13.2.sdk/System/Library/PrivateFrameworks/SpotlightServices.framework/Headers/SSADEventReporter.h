//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SSADEventReporter : NSObject
{
}

+ (void)reportBadDirectivesForModelType:(NSUInteger)arg1;
+ (void)reportModelDeletionForType:(NSUInteger)arg1;
+ (void)reportBadL3Models;
+ (void)reportBadL2Models;
+ (void)reportModelLoadingError;
+ (void)reportModelUnpackageEventWithType:(NSUInteger)arg1;
+ (void)reportKey:(id)arg1;

@end

