//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIBlurEffectImpl.h>

__attribute__((visibility("hidden")))
@interface _UIBlurEffectAverageImpl : _UIBlurEffectImpl
{
    double _scale;
}

+ (id)sharedInstance;
- (void)appendDescriptionTo:(id)arg1;
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithScale:(double)arg1;

@end

