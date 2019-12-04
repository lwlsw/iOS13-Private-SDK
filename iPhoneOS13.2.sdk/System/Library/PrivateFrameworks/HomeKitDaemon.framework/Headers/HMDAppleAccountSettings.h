//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSString;

@interface HMDAppleAccountSettings : HMFObject <HMFLogging>
{
}

+ (_Bool)supportsCloudSettings;
+ (id)sharedSettings;
+ (id)logCategory;
- (void)updateHomeEnabled:(_Bool)arg1 completionHandler:(id /* block */)arg2;
- (void)synchronize;
@property(readonly, getter=isEphemeral) _Bool ephemeral;
@property(readonly, getter=isManaged) _Bool managed;
@property(readonly, getter=isKeychainSyncEnabled) _Bool keychainSyncEnabled;
@property(readonly, getter=isHomeEnabled) _Bool homeEnabled;
- (id)attributeDescriptions;
@property(readonly, getter=isEducationMode) _Bool educationMode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
