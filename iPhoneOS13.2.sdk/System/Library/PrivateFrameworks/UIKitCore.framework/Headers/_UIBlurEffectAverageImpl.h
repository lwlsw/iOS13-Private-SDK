//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
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
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithScale:(double)arg1;

@end
