//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDictionary, NSString;

@protocol _CDUserContextServerMonitoring <NSObject>
- (void)handleRegistrationCompleted:(NSString *)arg1 handler:(void (^)(BOOL))arg2;
- (void)handleContextualChange:(NSString *)arg1 info:(NSDictionary *)arg2 handler:(void (^)(BOOL))arg3;
@end

