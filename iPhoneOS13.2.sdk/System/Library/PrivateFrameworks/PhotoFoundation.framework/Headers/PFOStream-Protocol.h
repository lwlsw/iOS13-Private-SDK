//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoFoundation/PFStream-Protocol.h>

@protocol PFIStream;

@protocol PFOStream <NSObject, PFStream>
- (BOOL)truncateLength:(long long)arg1;
- (BOOL)writeStream:(id <PFIStream>)arg1 blockSize:(NSUInteger)arg2;
- (BOOL)writeStream:(id <PFIStream>)arg1;
- (BOOL)writeStream:(const char )arg1 length:(NSUInteger)arg2 written:(NSUInteger )arg3;
- (BOOL)reserveLength:(long long)arg1;
@end

