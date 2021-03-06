//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@interface NoteAttachmentObject : NSManagedObject
{
}

+ (BOOL)applyFileAttributesForAttachment:(id)arg1 error:(id )arg2;
+ (BOOL)migrateFileForAttachment:(id)arg1 toCurrentAttachmentPathWithError:(id )arg2;
+ (BOOL)migrateAttachmentRelatedFilesInContext:(id)arg1 error:(id )arg2;
+ (id)attachmentDirectoryPathForAttachmentObjectID:(id)arg1 error:(id )arg2;
+ (id)attachmentDirectoryURLForAttachmentObjectID:(id)arg1 error:(id )arg2;
- (void)prepareForDeletion;
- (id)attachmentDataWithError:(id )arg1;
- (id)attachmentDataFileURLWithError:(id )arg1;
- (BOOL)persistAttachmentData:(id)arg1 error:(id )arg2;

@end

