//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNEntitlementVerification-Protocol.h>

@interface CNEntitlementVerifier : NSObject <CNEntitlementVerification>
{
}

// + (BOOL)auditToken:(CDStruct_4c969caf)arg1 isFirstOrSecondPartyWithError:(id )arg2;
//  (BOOL)secTask:(struct __SecTask )arg1 hasBooleanEntitlement:(id)arg2 error:(id )arg3;
// + (BOOL)auditToken:(CDStruct_4c969caf)arg1 hasBooleanEntitlement:(id)arg2 error:(id )arg3;
+ (BOOL)currentProcessHasBooleanEntitlement:(id)arg1 error:(id )arg2;

@end

