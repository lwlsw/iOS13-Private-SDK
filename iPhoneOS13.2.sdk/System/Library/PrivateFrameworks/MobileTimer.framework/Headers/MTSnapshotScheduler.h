//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MTSnapshotScheduler : NSObject
{
    NSString *_bundleID;
}

+ (double)_quiescingWindow;
// - (void).cxx_destruct;
- (void)scheduleSnapshot;
- (void)_performScheduleSnapshot;
- (id)initWithBundleID:(id)arg1;

@end

