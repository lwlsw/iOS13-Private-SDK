//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EDPersistenceDatabaseConnection;

@interface MFMailMessageLibraryMailboxURLMigrationStep : NSObject
{
    EDPersistenceDatabaseConnection *_sqliteConnection;
}

@property(retain, nonatomic) EDPersistenceDatabaseConnection *sqliteConnection; // @synthesize sqliteConnection=_sqliteConnection;
// - (void).cxx_destruct;
- (void)_purgeFoldersMatchingPatterns:(id)arg1;
//  (BOOL)_updateMailboxURLsInSQLitedb:(struct sqlite3 )arg1 withOldURLToNewURLMap:(id)arg2;
//  (BOOL)_renameMailboxURLsForMailAccount:(id)arg1 inSQLiteDB:(struct sqlite3 )arg2;
//  (BOOL)_renameMailboxDataFolders:(struct sqlite3 )arg1;
- (BOOL)performMigrationStep;
- (id)initWithSQLiteConnection:(id)arg1;

@end

