//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface STMSizeCacheEvent : NSObject
{
    unsigned int _flags;
    NSString *_path;
    unsigned long long _evtID;
}

+ (id)eventWithPath:(id)arg1 flags:(unsigned int)arg2 event:(unsigned long long)arg3;
@property unsigned int flags; // @synthesize flags=_flags;
@property unsigned long long evtID; // @synthesize evtID=_evtID;
@property(retain) NSString *path; // @synthesize path=_path;

@end
