//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface WFAttribution : NSObject
{
}

+ (id)platformSpecializedWeatherSourceAttributionURLForTrafficParameter:(id)arg1;
+ (id)weatherSourceAttributionURLForTrafficParameter:(id)arg1;
+ (id)sharedAttribution;
- (id)sourceAttributionImageForStyle:(NSUInteger)arg1;
@property(readonly) NSString *sourceName;
@property(readonly) NSString *localizedSourceAttribution;
@property(readonly) NSURL *sourceAttributionURL;

@end

