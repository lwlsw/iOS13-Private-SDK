//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface NSFileManager (CalClassAdditions)
+ (id)mimeTypeForFile:(id)arg1;
- (BOOL)archivePathToFile:(id)arg1 toFile:(id)arg2 createPKZipArchive:(BOOL)arg3;
- (BOOL)archivePathToFile:(id)arg1 toFile:(id)arg2 createPKZipArchive:(BOOL)arg3 error:(id )arg4;
- (BOOL)archiveURLToFile:(id)arg1 toFile:(id)arg2 createPKZipArchive:(BOOL)arg3;
- (BOOL)archiveURLToFile:(id)arg1 toFile:(id)arg2 createPKZipArchive:(BOOL)arg3 error:(id )arg4;
- (id)archivedDataAtPath:(id)arg1 createPKZipArchive:(BOOL)arg2;
- (id)archivedDataAtPath:(id)arg1 createPKZipArchive:(BOOL)arg2 error:(id )arg3;
- (BOOL)makeCompletePath:(id)arg1 mode:(int)arg2;
- (id)makeUniqueDirectoryWithPath:(id)arg1;
@end

