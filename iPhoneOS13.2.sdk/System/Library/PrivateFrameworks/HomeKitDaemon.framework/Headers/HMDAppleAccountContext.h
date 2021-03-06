//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFObject-Protocol.h>

@class NSArray, NSString;

@interface HMDAppleAccountContext : HMFObject <HMFObject>
{
    NSString *_identifier;
    NSString *_username;
    NSString *_alternateDSID;
}

@property(readonly, copy) NSString *alternateDSID; // @synthesize alternateDSID=_alternateDSID;
@property(readonly, copy) NSString *username; // @synthesize username=_username;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
- (id)initWithAccount:(id)arg1;
- (id)init;

@end

