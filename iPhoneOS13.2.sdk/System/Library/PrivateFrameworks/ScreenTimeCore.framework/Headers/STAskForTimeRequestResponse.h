//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@interface STAskForTimeRequestResponse : NSManagedObject
{
}

+ (id)_fetchPredicateForAskForTimeRequest:(id)arg1 requestingUserDSID:(id)arg2;
+ (id)upsertAskForTimeRequest:(id)arg1 fromUser:(id)arg2 inContext:(id)arg3 error:(id )arg4;
- (void)awakeFromInsert;

@end

