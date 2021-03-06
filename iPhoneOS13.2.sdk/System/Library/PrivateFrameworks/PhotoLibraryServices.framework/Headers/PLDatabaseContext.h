//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PLLazyObject, PLPhotoLibraryBundle;

@interface PLDatabaseContext : NSObject
{
    PLPhotoLibraryBundle *_libraryBundle;
    PLLazyObject *_lazyHighPriorityTransientLibrary;
    PLLazyObject *_lazyLowPriorityTransientLibrary;
    PLLazyObject *_lazyCplLibrary;
    PLLazyObject *_lazyMomentLibrary;
    PLLazyObject *_lazyNonTransientLibrary;
}

// - (void).cxx_destruct;
- (id)nonTransientLibrary;
- (id)newNonTransientLibrary;
- (id)momentLibrary;
- (id)newMomentLibrary;
- (id)cplLibrary;
- (id)newCplLibrary;
- (void)performTransactionSync:(CDUnknownBlockType)arg1;
- (void)performSync:(CDUnknownBlockType)arg1;
- (void)performTransaction:(CDUnknownBlockType)arg1;
- (void)perform:(CDUnknownBlockType)arg1;
- (id)transientLibraryWithCurrentQoS;
- (id)lowPriorityTransientLibrary;
- (id)newLowPriorityTransientLibrary;
- (id)highPriorityTransientLibrary;
- (id)newHighPriorityTransientLibrary;
- (id)initWithLibraryBundle:(id)arg1;

@end

