//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface VUILocalizationManager : NSObject
{
    NSDictionary *_overideLocDict;
}

+ (id)sharedInstance;
@property(retain) NSDictionary *overideLocDict; // @synthesize overideLocDict=_overideLocDict;
// - (void).cxx_destruct;
- (void)updateWithJSDictionary:(id)arg1;
- (id)localizedStringForKey:(id)arg1 withCounts:(id)arg2;
- (id)localizedStringForKey:(id)arg1;

@end

