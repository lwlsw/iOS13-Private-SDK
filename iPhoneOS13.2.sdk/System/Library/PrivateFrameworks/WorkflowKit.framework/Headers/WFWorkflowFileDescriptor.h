//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFFileRecordDescriptor.h>

@interface WFWorkflowFileDescriptor : WFFileRecordDescriptor
{
    BOOL _performMigration;
}

@property(readonly, nonatomic) BOOL performMigration; // @synthesize performMigration=_performMigration;
- (id)initWithFile:(id)arg1 name:(id)arg2 performMigration:(BOOL)arg3 sourceAppIdentifier:(id)arg4;
- (id)initWithFile:(id)arg1 name:(id)arg2 performMigration:(BOOL)arg3;
- (id)initWithFile:(id)arg1 name:(id)arg2;

@end

