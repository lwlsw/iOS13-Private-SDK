//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBDataPlanAccountAlertItem.h>

@class NSDate;

@interface SBDataPlanExpirationAlertItem : SBDataPlanAccountAlertItem
{
    NSDate *_expirationDate;
}

@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
// - (void).cxx_destruct;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (id)initWithAccountURL:(id)arg1 expirationDate:(id)arg2;

@end

