//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSUIOChannel-Protocol.h>

@class NSObject;
@protocol OS_dispatch_data;

@protocol TSUStreamWriteChannel <TSUIOChannel>
- (void)flushWithCompletion:(void (^)(NSError *))arg1;
- (void)writeData:(NSObject<OS_dispatch_data> *)arg1 handler:(void (^)(BOOL, NSObject<OS_dispatch_data> *, NSError *))arg2;
@end

