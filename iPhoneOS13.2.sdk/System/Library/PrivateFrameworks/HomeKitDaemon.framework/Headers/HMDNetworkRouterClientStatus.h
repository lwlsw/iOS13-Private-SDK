//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDTLVProtocol-Protocol.h>

@class HMDNetworkRouterIPAddressList, HMDTLVSignedNumberValue, HMDTLVUnsignedNumberValue, NSData, NSString;

@interface HMDNetworkRouterClientStatus : NSObject <NSCopying, HMDTLVProtocol>
{
    HMDTLVUnsignedNumberValue *_clientIdentifier;
    NSData *_macAddress;
    HMDNetworkRouterIPAddressList *_ipAddressList;
    HMDTLVUnsignedNumberValue *_lanIdentifier;
    NSString *_name;
    HMDTLVSignedNumberValue *_rssi;
}

+ (id)parsedFromData:(id)arg1 error:(id )arg2;
@property(retain, nonatomic) HMDTLVSignedNumberValue *rssi; // @synthesize rssi=_rssi;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) HMDTLVUnsignedNumberValue *lanIdentifier; // @synthesize lanIdentifier=_lanIdentifier;
@property(retain, nonatomic) HMDNetworkRouterIPAddressList *ipAddressList; // @synthesize ipAddressList=_ipAddressList;
@property(retain, nonatomic) NSData *macAddress; // @synthesize macAddress=_macAddress;
@property(retain, nonatomic) HMDTLVUnsignedNumberValue *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serializeWithError:(id )arg1;
- (BOOL)parseFromData:(id)arg1 error:(id )arg2;
- (id)initWithClientIdentifier:(id)arg1 macAddress:(id)arg2 ipAddressList:(id)arg3 lanIdentifier:(id)arg4 name:(id)arg5 rssi:(id)arg6;
- (id)init;

@end

