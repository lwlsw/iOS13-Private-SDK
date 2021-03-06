//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MIME/MFMessageStore.h>

@class NSData, NSString;

@interface MFDataMessageStore : MFMessageStore
{
    NSData *_data;
    Class _messageClass;
    NSString *_storagePath;
    id _mailboxUid;
}

@property(retain, nonatomic) id mailboxUid; // @synthesize mailboxUid=_mailboxUid;
// - (void).cxx_destruct;
- (BOOL)messageCanBeTriaged:(id)arg1;
- (void)deleteBodyDataForMessage:(id)arg1;
- (id)storeData:(id)arg1 forMimePart:(id)arg2 isComplete:(BOOL)arg3;
- (void)_deleteCachedBodyForMessage:(id)arg1;
- (id)_cachedBodyDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedHeadersForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedBodyForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)bodyDataForMessage:(id)arg1 isComplete:(BOOL )arg2 isPartial:(BOOL )arg3 downloadIfNecessary:(BOOL)arg4;
- (BOOL)bodyFetchRequiresNetworkActivity;
- (id)headerDataForMessage:(id)arg1 downloadIfNecessary:(BOOL)arg2;
- (id)account;
- (id)message;
- (void)setMessageClass:(Class)arg1;
- (void)writeUpdatedMessageDataToDisk;
- (void)setStoragePath:(id)arg1;
- (id)storagePath;
- (id)storePath;
- (id)initWithData:(id)arg1;

@end

