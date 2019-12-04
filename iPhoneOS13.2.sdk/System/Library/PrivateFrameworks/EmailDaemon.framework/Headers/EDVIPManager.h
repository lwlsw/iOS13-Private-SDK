//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EFLoggable-Protocol.h>
#import <EmailDaemon/EMVIPManager-Protocol.h>

@class CNContactStore, EAEmailAddressSet, NSMutableDictionary, NSSet, NSString, NSURL, NSUbiquitousKeyValueStore;
@protocol OS_dispatch_queue;

@interface EDVIPManager : NSObject <EFLoggable, EMVIPManager>
{
    NSMutableDictionary *_vipsByIdentifier;
    EAEmailAddressSet *_cachedEmailAddresses;
    CNContactStore *_contactStore;
    NSUbiquitousKeyValueStore *_keyValueStore;
    NSObject<OS_dispatch_queue> *_operationQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSURL *_plistURL;
}

+ (id)_contactDescriptors;
+ (id)log;
@property(readonly, nonatomic) NSURL *plistURL; // @synthesize plistURL=_plistURL;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // @synthesize notificationQueue=_notificationQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) NSUbiquitousKeyValueStore *keyValueStore; // @synthesize keyValueStore=_keyValueStore;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (id)_contactFromContacts:(id)arg1 matchingMostAddresses:(id)arg2;
- (id)_contactForName:(id)arg1 emailAddresses:(id)arg2;
- (id)_validatedCloudVIPFromStore:(id)arg1 withCloudKey:(id)arg2;
- (id)_cloudKeyForIdentifier:(id)arg1;
- (void)_mergeVIPs;
- (void)_updateLocalWithCloud:(id)arg1 refresh:(_Bool)arg2;
- (void)_synchronizeKVStore;
- (void)_keyValueStoreChanged:(id)arg1;
- (void)_updateCloudWithLocal;
- (id)_serializedData;
- (void)_saveVIPsLocally;
- (void)_saveVIPs;
- (id)_vipsDictionary;
- (void)_loadVIPs;
- (void)_removeVIPsWithIdentifiers:(id)arg1;
- (void)removeVIPsWithEmailAddresses:(id)arg1;
- (void)removeVIPsWithIdentifiers:(id)arg1;
- (_Bool)_isVIPForContact:(id)arg1 orAddresses:(id)arg2;
- (void)saveVIPs:(id)arg1;
- (_Bool)isVIPAddress:(id)arg1;
- (id)_allVIPEmailAddresses;
@property(readonly, copy, nonatomic) EAEmailAddressSet *allVIPEmailAddresses;
@property(readonly, copy, nonatomic) NSSet *allVIPs;
- (id)vipWithIdentifier:(id)arg1;
@property(readonly, nonatomic) _Bool hasVIPs;
- (void)dealloc;
- (id)initWithDirectoryURL:(id)arg1 keyValueStore:(id)arg2 contactStore:(id)arg3;
- (id)initWithDirectoryURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
