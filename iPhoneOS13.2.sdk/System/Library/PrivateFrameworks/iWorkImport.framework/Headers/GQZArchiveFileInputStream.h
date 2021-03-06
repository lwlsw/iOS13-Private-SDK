//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/GQZArchiveInputStream-Protocol.h>

__attribute__((visibility("hidden")))
@interface GQZArchiveFileInputStream : NSObject <GQZArchiveInputStream>
{
//    struct __sFILE mFile;
    char mBuffer;
    long long mBufferStart;
    long long mBufferEnd;
    long long mSize;
}

- (long long)size;
- (void)readFromOffset:(long long)arg1 size:(NSUInteger)arg2 buffer:(char )arg3;
- (const char )dataAtOffset:(long long)arg1 size:(NSUInteger)arg2 end:(long long)arg3 readSize:(NSUInteger )arg4;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

