//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCCacheCoordinatorLocking-Protocol.h>

@protocol OS_dispatch_queue;

@interface FCCacheCoordinatorGCDSerialLock : NSObject <FCCacheCoordinatorLocking>
{
    NSObject<OS_dispatch_queue> *_queue;
}

// - (void).cxx_destruct;
- (void)performWriteSync:(CDUnknownBlockType)arg1;
- (void)performReadSync:(CDUnknownBlockType)arg1;
- (id)init;

@end

