//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSPDatabase, TSPDistributableArchiveOutputStream, TSPDistributableFileManager;

__attribute__((visibility("hidden")))
@interface TSPDistributableWriter : NSObject
{
    TSPDistributableArchiveOutputStream *_outputStream;
    set_713dd2e1 _encodedIds;
//     struct set<int, std::__1::less<int>, std::__1::allocator<int>> _typesSeen;
    _Atomic BOOL _isCancelled;
    TSPDatabase *_database;
    TSPDistributableFileManager *_fileManager;
    NSUInteger _processedEntriesCount;
}

// - (void).cxx_destruct;
- (BOOL)goAndReportProgress:(BOOL)arg1 error:(id )arg2 context:(id)arg3;
- (void)cancel;
- (void)dealloc;
- (id)initWithTangierPath:(id)arg1 fileManager:(id)arg2 outputStream:(id)arg3 checkCrc:(unsigned int)arg4;
- (BOOL)_processEntry:(id)arg1 tocEntries:(id)arg2 progressContext:(id)arg3 error:(id )arg4;
- (id)_initWithDatabase:(id)arg1 fileManager:(id)arg2 outputStream:(id)arg3 checkCrc:(unsigned int)arg4 includeToc:(BOOL)arg5;

@end

