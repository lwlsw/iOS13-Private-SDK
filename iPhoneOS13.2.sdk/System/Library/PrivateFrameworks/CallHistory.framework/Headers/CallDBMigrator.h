//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection, NSXPCInterface;

__attribute__((visibility("hidden")))
@interface CallDBMigrator : NSObject
{
    NSXPCConnection *_connection;
    NSXPCInterface *_interface;
}

- (void)migrate:(id)arg1 queue:(id)arg2 block:(id /* block */)arg3;
- (id)init;

@end
