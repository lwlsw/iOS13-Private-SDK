//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/EFLoggable-Protocol.h>

@interface MFFileCompressionQueueActivityManager : NSObject <EFLoggable>
{
}

+ (BOOL)compressFilesInQueue:(id)arg1 shouldDefer:(CDUnknownBlockType)arg2;
+ (void)_unregisterXPCActivity;
+ (void)_registerXPCActivity;
+ (void)unregisterXPCActivity;
+ (void)scheduleActivityIfNeeded;
+ (id)log;

@end

