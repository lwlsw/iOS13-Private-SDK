//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAReminderTrigger.h>

@class SAReminderDateTimeTrigger, SAReminderLocationTrigger;

@interface SAReminderCompositeTrigger : SAReminderTrigger
{
}

+ (id)compositeTriggerWithDictionary:(id)arg1 context:(id)arg2;
+ (id)compositeTrigger;
@property(retain, nonatomic) SAReminderLocationTrigger *locationTrigger;
@property(retain, nonatomic) SAReminderDateTimeTrigger *dateTimeTrigger;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

