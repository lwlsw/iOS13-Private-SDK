//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface TSUDateFormatter_FormatterCache : NSObject
{
    NSLock *_dateFormatterCacheLock;
    NSMutableDictionary *_dateFormatterCache;
}

+ (id)dateFormatterStringFromDate:(id)arg1 withFormat:(id)arg2 locale:(id)arg3;
// - (void).cxx_destruct;
- (id)dateFormatterStringFromDate:(id)arg1 withFormat:(id)arg2 locale:(id)arg3;
- (id)init;

@end

