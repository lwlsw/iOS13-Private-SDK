//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSData, NSManagedObjectContext, NSString, NSURL;

@protocol ICLegacyAttachment <NSObject>
- (NSManagedObjectContext *)managedObjectContext;
- (void)setMimeType:(NSString *)arg1;
- (BOOL)persistAttachmentData:(NSData *)arg1 error:(id )arg2;
- (NSURL *)cidURL;
- (NSString *)contentID;
- (NSString *)typeUTI;
- (NSString *)mimeType;
- (NSURL *)fileURL;
- (NSString *)identifier;
@end

