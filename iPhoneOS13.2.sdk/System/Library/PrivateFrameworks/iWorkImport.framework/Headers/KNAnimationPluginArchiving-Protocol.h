//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString;

@protocol KNAnimationPluginArchiving <NSObject>
+ (void)downgradeAttributes:(id )arg1 animationName:(id )arg2 warning:(id )arg3 type:(long long)arg4 isToClassic:(BOOL)arg5 version:(NSUInteger)arg6;
+ (void)upgradeAttributes:(id )arg1 animationName:(NSString *)arg2 warning:(id )arg3 type:(long long)arg4 isFromClassic:(BOOL)arg5 version:(NSUInteger)arg6;
@end

