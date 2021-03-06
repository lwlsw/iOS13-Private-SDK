//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NSSecureCoding;

@interface BLTObjectCacheItem : NSObject
{
    id <NSSecureCoding> _object;
    double _lastAccessedDate;
}

+ (id)cacheItemWithObject:(id)arg1;
@property(readonly, nonatomic) double lastAccessedDate; // @synthesize lastAccessedDate=_lastAccessedDate;
@property(readonly, nonatomic) id <NSSecureCoding> object; // @synthesize object=_object;
// - (void).cxx_destruct;
- (id)description;
- (void)touch;
- (id)initWithObject:(id)arg1;

@end

