//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/HKQuery.h>

@interface HKMCAnalysisQuery : HKQuery
{
    id /* block */ _updateHandler;
}

+ (id)clientInterfaceProtocol;
- (void)queue_queryDidDeactivate:(id)arg1;
- (_Bool)queue_shouldDeactivateAfterInitialResults;
- (void)queue_validate;
- (void)queue_deliverError:(id)arg1;
- (void)client_deliverAnalysis:(id)arg1 queryUUID:(id)arg2;
- (id)initWithUpdateHandler:(id /* block */)arg1;

@end
