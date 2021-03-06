//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray;

@protocol CSCoreSpeechServiceListenerDelegate <NSObject>
- (oneway void)getFirstPassRunningMode:(void (^)(long long))arg1;
- (oneway void)requestUpdatedSATAudio:(void (^)(BOOL))arg1;
- (oneway void)clearTriggerCount:(void (^)(void))arg1;
- (oneway void)getTriggerCount:(void (^)(NSUInteger))arg1;
- (oneway void)setDelayInterstitialSounds:(NSArray *)arg1 level:(long long)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)getCurrentVoiceTriggerLocale:(void (^)(NSString *))arg1;
- (oneway void)getTestResponse:(void (^)(NSString *))arg1;
@end

