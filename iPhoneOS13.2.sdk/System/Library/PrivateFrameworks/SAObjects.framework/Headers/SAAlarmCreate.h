//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

#import <SAObjects/SAAlarmAlarmAction-Protocol.h>

@class SAAlarmObject;

@interface SAAlarmCreate : SADomainCommand <SAAlarmAlarmAction>
{
}

+ (id)createWithDictionary:(id)arg1 context:(id)arg2;
+ (id)create;
- (BOOL)requiresResponse;
@property(retain, nonatomic) SAAlarmObject *alarmToCreate;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

