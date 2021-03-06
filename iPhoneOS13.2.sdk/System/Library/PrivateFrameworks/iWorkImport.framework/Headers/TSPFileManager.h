//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSPFileManager : NSObject
{
}

+ (void)copyDataFromReadChannel:(id)arg1 size:(NSUInteger)arg2 toWriteChannel:(id)arg3 synchronous:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)ioCompletionQueue;
+ (void)transcodeReadChannel:(id)arg1 decryptionInfo:(id)arg2 size:(NSUInteger)arg3 toWriteChannel:(id)arg4 encryptionInfo:(id)arg5 synchronous:(BOOL)arg6 completion:(CDUnknownBlockType)arg7;
+ (void)copyDataFromReadChannel:(id)arg1 decryptionInfo:(id)arg2 size:(NSUInteger)arg3 toWriteChannel:(id)arg4 encryptionInfo:(id)arg5 synchronous:(BOOL)arg6 completion:(CDUnknownBlockType)arg7;
+ (void)copyDataFromReadChannel:(id)arg1 decryptionInfo:(id)arg2 toWriteChannel:(id)arg3 encryptionInfo:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (BOOL)copyDataFromReadChannel:(id)arg1 decryptionInfo:(id)arg2 size:(NSUInteger)arg3 toWriteChannel:(id)arg4 encryptionInfo:(id)arg5 error:(id )arg6;
+ (BOOL)linkOrCopyItemAtURL:(id)arg1 decryptionInfo:(id)arg2 toURL:(id)arg3 encryptionInfo:(id)arg4 canLink:(BOOL)arg5 error:(id )arg6;
+ (BOOL)linkOrCloneItemAtURL:(id)arg1 toURL:(id)arg2 canLink:(BOOL)arg3 canClone:(BOOL)arg4 error:(id )arg5;
+ (BOOL)linkOrCloneItemAtURL:(id)arg1 toURL:(id)arg2 canLink:(BOOL)arg3 error:(id )arg4;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 sourcePath:(id)arg3 targetPath:(id)arg4;

@end

