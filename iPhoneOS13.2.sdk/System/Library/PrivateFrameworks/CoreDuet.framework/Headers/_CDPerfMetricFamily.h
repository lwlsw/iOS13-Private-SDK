//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface _CDPerfMetricFamily : NSObject
{
    NSString *_name;
    NSMutableDictionary *_perfMetrics;
}

+ (id)perfMetricFamilyWithName:(id)arg1;
@property(readonly) NSMutableDictionary *perfMetrics; // @synthesize perfMetrics=_perfMetrics;
@property(readonly) NSString *name; // @synthesize name=_name;
- (id)description;
- (id)allPerfMetrics;
- (id)perfMetricWithName:(id)arg1;
- (id)perfMetricWithName:(id)arg1 string:(id)arg2;
- (id)initWithName:(id)arg1;

@end
