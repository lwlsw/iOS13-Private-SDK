//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSUStreamWriteChannel-Protocol.h>

@class TSUZipFileWriter;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSPZipFileWriteChannel : NSObject <TSUStreamWriteChannel>
{
    TSUZipFileWriter *_archiveWriter;
    NSObject<OS_dispatch_queue> *_writerQueue;
    BOOL _isClosed;
}

// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isValid;
- (void)flushWithCompletion:(CDUnknownBlockType)arg1;
- (void)addBarrier:(CDUnknownBlockType)arg1;
- (void)setLowWater:(NSUInteger)arg1;
- (void)close;
- (void)writeData:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithArchiveWriter:(id)arg1;
- (id)init;

@end

