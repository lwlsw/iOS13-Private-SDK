//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, WFLocation;

__attribute__((visibility("hidden")))
@interface WFWeatherDataServiceParserMetadataV1 : NSObject
{
    NSDate *_readTime;
    NSDate *_expireTime;
    NSUInteger _version;
    WFLocation *_location;
    NSString *_language;
}

@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) WFLocation *location; // @synthesize location=_location;
@property(nonatomic) NSUInteger version; // @synthesize version=_version;
@property(retain, nonatomic) NSDate *expireTime; // @synthesize expireTime=_expireTime;
@property(retain, nonatomic) NSDate *readTime; // @synthesize readTime=_readTime;
// - (void).cxx_destruct;

@end

