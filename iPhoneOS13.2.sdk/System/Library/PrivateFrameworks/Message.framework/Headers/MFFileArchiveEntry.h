//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface MFFileArchiveEntry : NSObject
{
    _Bool _isDeflated;
    _Bool _isDirectory;
    NSString *_path;
    long long _uncompressedSize;
    NSData *_contents;
    struct _NSRange _compressedRange;
}

+ (id)archiveEntryWithCentralHeader:(struct CentralHeader *)arg1 archiveData:(id)arg2;
+ (id)archiveEntry;
@property(retain) NSData *contents; // @synthesize contents=_contents;
@property _Bool isDirectory; // @synthesize isDirectory=_isDirectory;
@property _Bool isDeflated; // @synthesize isDeflated=_isDeflated;
@property struct _NSRange compressedRange; // @synthesize compressedRange=_compressedRange;
@property long long uncompressedSize; // @synthesize uncompressedSize=_uncompressedSize;
@property(retain) NSString *path; // @synthesize path=_path;
- (void)merge:(id)arg1;
- (long long)compressedSize;
- (id)fileName;
- (id)description;
- (id)initWithDirectoryPath:(id)arg1;
- (id)initWithContents:(id)arg1 path:(id)arg2;

@end
