//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSManagedObjectContext, NSPersistentStoreCoordinator, NSPersistentStoreDescription;

@protocol AVTCoreDataPersistentStoreConfiguration <NSObject>
- (NSPersistentStoreDescription *)storeDescription;
- (BOOL)setupIfNeeded:(id )arg1;
- (NSManagedObjectContext *)createManagedObjectContext;
- (NSPersistentStoreCoordinator *)persistentStoreCoordinator;
@end

