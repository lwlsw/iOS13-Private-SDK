//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface CCUIContentModulePresentationContext : NSObject <NSCopying>
{
    long long _environment;
}

+ (id)defaultAlertPresentationContext;
+ (id)defaultControlCenterPresentationContext;
@property(readonly, nonatomic) long long environment; // @synthesize environment=_environment;
- (NSUInteger)hash;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithEnvironment:(long long)arg1;

@end

