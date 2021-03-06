//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray;

@interface CEMEventSubscriptionNowCommand_Status : CEMPayloadBase
{
    NSArray *_statusInactiveEvents;
    NSArray *_statusUnknownEvents;
}

+ (id)buildRequiredOnly;
+ (id)buildWithInactiveEvents:(id)arg1 withUnknownEvents:(id)arg2;
+ (id)allowedReasons;
+ (id)allowedStatusKeys;
@property(copy, nonatomic) NSArray *statusUnknownEvents; // @synthesize statusUnknownEvents=_statusUnknownEvents;
@property(copy, nonatomic) NSArray *statusInactiveEvents; // @synthesize statusInactiveEvents=_statusInactiveEvents;
// - (void).cxx_destruct;
- (id)serializePayload;
- (BOOL)loadPayload:(id)arg1 error:(id )arg2;

@end

