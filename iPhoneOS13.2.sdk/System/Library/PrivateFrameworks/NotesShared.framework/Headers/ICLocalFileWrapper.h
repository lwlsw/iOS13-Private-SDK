//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//



@class NSData, NSURL;

@interface ICLocalFileWrapper : NSFileWrapper <NSSecureCoding>
{
    NSURL *_localURL;
    NSData *_cachedData;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSData *cachedData; // @synthesize cachedData=_cachedData;
@property(retain, nonatomic) NSURL *localURL; // @synthesize localURL=_localURL;
// - (void).cxx_destruct;
- (id)symbolicLinkDestinationURL;
- (id)keyForFileWrapper:(id)arg1;
- (id)addRegularFileWithContents:(id)arg1 preferredFilename:(id)arg2;
- (void)removeFileWrapper:(id)arg1;
- (id)addFileWrapper:(id)arg1;
- (BOOL)readFromURL:(id)arg1 options:(NSUInteger)arg2 error:(id )arg3;
- (BOOL)matchesContentsOfURL:(id)arg1;
- (id)serializedRepresentation;
- (id)dataWithError:(id )arg1;
- (id)regularFileContents;
- (BOOL)writeToURL:(id)arg1 options:(NSUInteger)arg2 originalContentsURL:(id)arg3 error:(id )arg4;
- (id)fileWrappers;
- (id)fileAttributes;
- (id)preferredFilename;
- (id)filename;
- (BOOL)isDirectory;
- (BOOL)isSymbolicLink;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalURL:(id)arg1;

@end

