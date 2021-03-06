//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CDDClientConnection;

@interface CDSession : NSObject
{
    CDDClientConnection *_cddClientConnection;
    NSUInteger _clientId;
}

+ (id)sharedSessionWithClientId:(NSUInteger)arg1;
@property(readonly) NSUInteger clientId; // @synthesize clientId=_clientId;
@property(readonly) CDDClientConnection *cddClientConnection; // @synthesize cddClientConnection=_cddClientConnection;
// - (void).cxx_destruct;
- (BOOL)setGlancesLingeredOn:(id)arg1 error:(id )arg2;
- (BOOL)setActiveComplications:(id)arg1 error:(id )arg2;
- (BOOL)setNonAppBundlIdWithError:(id)arg1 error:(id )arg2;
- (BOOL)setNonAppBundleIdWithError:(id)arg1 error:(id )arg2;
- (BOOL)broadcastSystemDataWithError:(id )arg1;
- (id)getDeviceFromDescription:(id)arg1 error:(id )arg2;
- (BOOL)setDevicesChangedHandlerWithError:(id )arg1 handler:(CDUnknownBlockType)arg2;
- (id)copyDevicesUncached;
- (id)getDevices;
- (id)getDevicesInternal;
- (BOOL)registerForDeviceChanges;
- (id)attributeComponentsFromRepresentation:(id)arg1 error:(id )arg2;
- (id)attributeExtendedComponentsFromRepresentation:(id)arg1 error:(id )arg2;
- (id)attributeFromRepresentation:(id)arg1 error:(id )arg2;
- (id)representationStringFromAttribute:(id)arg1 value:(id)arg2 options:(id)arg3 error:(id )arg4;
- (id)representationStringFromAttribute:(id)arg1 value:(id)arg2 error:(id )arg3;
- (id)attributeFromFullname:(id)arg1 error:(id )arg2;
- (BOOL)deleteClientDataWithError:(id )arg1;
- (id)registerBudgetWithName:(id)arg1 value:(long long)arg2 type:(long long)arg3 withOptions:(NSUInteger)arg4 error:(id )arg5;
- (id)registerBudgetWithName:(id)arg1 value:(long long)arg2 type:(long long)arg3 error:(id )arg4;
- (id)registerAttributeWithName:(id)arg1 type:(long long)arg2 dataProtectionClass:(id)arg3 error:(id )arg4;
- (id)budgetForName:(id)arg1 type:(long long)arg2 error:(id )arg3;
- (id)attributeForName:(id)arg1 type:(long long)arg2 error:(id )arg3;
- (id)attributeForName:(id)arg1 type:(long long)arg2 clientId:(NSUInteger)arg3 error:(id )arg4;
- (id)budgetNamesWithError:(id )arg1;
- (id)attributeNamesWithError:(id )arg1;
- (id)description;
- (id)initWithClientId:(NSUInteger)arg1 enableCaching:(BOOL)arg2;
- (id)initWithClientId:(NSUInteger)arg1;
- (id)init;

@end

