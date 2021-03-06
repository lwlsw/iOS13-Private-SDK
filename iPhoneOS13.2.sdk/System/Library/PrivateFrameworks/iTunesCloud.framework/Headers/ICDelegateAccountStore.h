//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/ICDelegateAccountStoreWriter-Protocol.h>
#import <iTunesCloud/ICSQLiteConnectionDelegate-Protocol.h>

@class ICDelegateAccountStoreOptions, ICDelegateAccountStoreXPCWriter, NSMutableArray, NSString;

@interface ICDelegateAccountStore : NSObject <ICSQLiteConnectionDelegate, ICDelegateAccountStoreWriter>
{
    NSMutableArray *_connectionPool;
    BOOL _isOpen;
//     struct os_unfair_lock_s _lock;
    ICDelegateAccountStoreOptions *_options;
    ICDelegateAccountStore *_strongSelf;
    ICDelegateAccountStoreXPCWriter *_xpcWriter;
}

+ (void)openWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
// - (void).cxx_destruct;
- (void)_writeXPCUsingBlock:(CDUnknownBlockType)arg1;
- (void)_writeUsingBlock:(CDUnknownBlockType)arg1;
- (void)_writeSQLUsingBlock:(CDUnknownBlockType)arg1;
- (void)_resetCorruptionUsingXPC;
- (BOOL)_resetCorruptionUsingSQL;
- (void)_recycleConnection:(id)arg1;
- (void)_postDidChangeNotification;
- (id)_popConnection;
- (void)_openWithXPCWriter:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)connectionNeedsResetForCorruption:(id)arg1;
- (void)setToken:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setIdentityProperties:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeTokensExpiringBeforeDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeTokenForUserIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeIdentityPropertiesForUserIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeAllTokensWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)addDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)readUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSString *databasePath;
- (void)close;
- (id)initSingleWriterWithOptions:(id)arg1 error:(id )arg2;
- (id)_initWithValidatedOptions:(id)arg1;

@end

