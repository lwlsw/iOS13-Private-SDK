//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FileProviderDaemon/FPCancellable-Protocol.h>

@class FPDActionOperationQueue, FPDCoordinator, FPDMoveOperation, FPMoveInfo, NSError, NSMutableArray, NSMutableDictionary, NSObservation;
@protocol FPDMoveWriterExecutor, OS_dispatch_queue;

@interface FPDMoveWriter : NSObject <FPCancellable>
{
    FPMoveInfo *_info;
    FPDActionOperationQueue *_moveQueue;
    id <FPDMoveWriterExecutor> _providerWriter;
    FPDCoordinator *_preemptiveDownloadCoordinator;
    NSMutableArray *_sourceFoldersStack;
    NSMutableArray *_destinationFoldersStack;
    NSMutableDictionary *_errorsByRoot;
    NSMutableDictionary *_progressByRoot;
    id _waitedOnID;
    id /* block */ _waiterBlock;
    _Bool _cancelled;
    NSError *_error;
    NSObject<OS_dispatch_queue> *_asyncQueue;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _logSection;
    NSObservation *_importProgressObservation;
    FPDMoveOperation *_operation;
    id /* block */ _itemCopyProgressBlock;
    id /* block */ _itemCompletionBlock;
    id /* block */ _rootCreatedBlock;
    id /* block */ _rootCompletionBlock;
    id /* block */ _completionBlock;
    id <FPDMoveWriterExecutor> _diskWriter;
    FPDCoordinator *_coordinator;
}

+ (void)initialize;
+ (void)releaseDownloadSlot:(id)arg1;
+ (id)acquireDownloadSlotForItem:(id)arg1;
@property(retain, nonatomic) FPDCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) FPMoveInfo *info; // @synthesize info=_info;
@property(retain, nonatomic) id <FPDMoveWriterExecutor> diskWriter; // @synthesize diskWriter=_diskWriter;
@property(copy, nonatomic) id /* block */ completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) id /* block */ rootCompletionBlock; // @synthesize rootCompletionBlock=_rootCompletionBlock;
@property(copy, nonatomic) id /* block */ rootCreatedBlock; // @synthesize rootCreatedBlock=_rootCreatedBlock;
@property(copy, nonatomic) id /* block */ itemCompletionBlock; // @synthesize itemCompletionBlock=_itemCompletionBlock;
@property(copy, nonatomic) id /* block */ itemCopyProgressBlock; // @synthesize itemCopyProgressBlock=_itemCopyProgressBlock;
@property(readonly, nonatomic) __weak FPDMoveOperation *operation; // @synthesize operation=_operation;
- (void)performCreateFolder:(id)arg1 inside:(id)arg2 as:(id)arg3 completion:(id /* block */)arg4;
- (void)performMoveOfFolder:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 atomically:(_Bool)arg6 useDiskWriter:(_Bool)arg7 completion:(id /* block */)arg8;
- (void)performMoveOfItem:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 useDiskWriter:(_Bool)arg6 completion:(id /* block */)arg7;
- (void)performCopyOfItem:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 useDiskWriter:(_Bool)arg6 completion:(id /* block */)arg7;
- (void)performCopyOfItem:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 completion:(id /* block */)arg6;
- (id)defaultExecutor;
- (void)dumpStateTo:(id)arg1;
- (void)_removeRoot:(id)arg1;
- (void)startDownloadOfItem:(id)arg1 shouldMaterializeRecursively:(_Bool)arg2;
- (id)waitForResultOfSourceID:(id)arg1 root:(id)arg2 error:(id *)arg3;
- (void)_unblockWaiterForSourceID:(id)arg1 withResult:(id)arg2 error:(id)arg3;
- (void)setProgress:(id)arg1 forRoot:(id)arg2;
- (void)cancel;
- (void)cancelRoot:(id)arg1;
- (void)failWithError:(id)arg1;
- (void)_finishWithError:(id)arg1;
- (void)start;
- (void)_step;
- (void)handleAtom:(id)arg1 completion:(id /* block */)arg2;
- (void)_handlePostFolder:(id)arg1 completion:(id /* block */)arg2;
- (void)handleCreationForAtom:(id)arg1 result:(id)arg2;
- (void)_handleCompletionOfAtom:(id)arg1 source:(id)arg2 result:(id)arg3 error:(id)arg4;
- (void)_handleFolder:(id)arg1 completion:(id /* block */)arg2;
- (void)_performCopyOrMoveOfFolder:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleItem:(id)arg1 completion:(id /* block */)arg2;
- (void)_performCopyOrMoveOfItem:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithOperation:(id)arg1 queue:(id)arg2;

@end
