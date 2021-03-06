//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AMSAttestation : NSObject
{
}

+ (BOOL)clearAttestationWithOptions:(id)arg1 error:(id )arg2;
+ (id)_certChainStringsWithOptions:(id)arg1 error:(id )arg2;
+ (id)_attestationPListWithStyle:(NSUInteger)arg1 primaryAttestation:(id)arg2 extendedAttestation:(id)arg3 error:(id )arg4;
+ (BOOL)clearAttestationWithAccount:(id)arg1 options:(id)arg2 error:(id )arg3;
+ (id)attestationHTTPBodyDataWithStyle:(NSUInteger)arg1 regenerateKeys:(BOOL)arg2 error:(id )arg3;
+ (id)attestationWithOptions:(id)arg1 error:(id )arg2;
+ (id)ACLVersionOnDiskForOptions:(id)arg1;
+ (id)ACLVersionForOptions:(id)arg1;

@end

