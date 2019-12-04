//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccountsDaemon/ACDDatabaseConnectionDelegate-Protocol.h>
#import <AccountsDaemon/ACDDatabaseProtocol-Protocol.h>

@class NSDictionary, NSPersistentStoreCoordinator, NSString, NSURL;

@interface ACDDatabase : NSObject <ACDDatabaseConnectionDelegate, ACDDatabaseProtocol>
{
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSDictionary *_storeOptions;
    NSURL *_databaseURL;
}

+ (id)new;
@property(readonly, nonatomic) NSURL *databaseURL; // @synthesize databaseURL=_databaseURL;
- (id)createConnection;
- (void)databaseConnection:(id)arg1 encounteredUnrecoverableError:(id)arg2;
@property(readonly, copy) NSString *description;
- (_Bool)_persistentStoreCoodinator_resetPersistentStoreCoordinatorWithError:(id *)arg1;
- (_Bool)_validateDatabaseAtURL:(id)arg1 error:(id *)arg2;
- (_Bool)_performBackupToURL:(id)arg1 unverifiedBackupURL:(id)arg2 error:(id *)arg3;
- (_Bool)_shouldResetPersistentStoreAfterError:(id)arg1;
- (id)_addPersistentStoreWithType:(id)arg1 configuration:(id)arg2 URL:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (_Bool)resetReturningError:(id *)arg1;
- (_Bool)restoreFromBackupReturningError:(id *)arg1;
- (_Bool)performBackupReturningError:(id *)arg1;
- (id)_unverifiedBackupURL;
- (id)_backupURL;
- (id)initWithDatabaseURL:(id)arg1 storeOptions:(id)arg2;
- (id)initWithDatabaseURL:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
