//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class IMDMessagePTask, NSArray;

@protocol IMDMessagePTaskStore <NSObject>
- (BOOL)updateTaskFlagsForPTask:(IMDMessagePTask *)arg1;
- (BOOL)deleteAllCompletedTasks;
- (NSArray *)loadMostRecentMessagePTasks;
- (BOOL)storePTask:(IMDMessagePTask *)arg1;
@end

