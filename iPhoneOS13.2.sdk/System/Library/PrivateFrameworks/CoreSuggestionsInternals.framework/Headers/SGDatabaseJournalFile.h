//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SGDatabaseJournalFile : NSObject
{
    NSString *_path;
    NSUInteger _len;
    int _fd;
    BOOL _written;
    BOOL _dead;
}

// - (void).cxx_destruct;
- (id)description;
- (void)unlink;
- (void)clear;
- (id)read;
- (void)write:(id)arg1;
- (void)dealloc;
- (void)destroyAndUnlinkIfEmpty;
- (void)destroy;
- (id)initWithPath:(id)arg1;
- (id)init;

@end

