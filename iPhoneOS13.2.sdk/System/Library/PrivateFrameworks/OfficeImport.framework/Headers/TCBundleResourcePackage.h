//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, OISFUZipArchive;

__attribute__((visibility("hidden")))
@interface TCBundleResourcePackage : NSObject
{
    OISFUZipArchive *mZipArchive;
    NSMutableDictionary *mEntryMap;
}

// - (void).cxx_destruct;
- (id)entryWithName:(id)arg1 cacheResult:(BOOL)arg2;
- (id)initWithZipArchive:(id)arg1;

@end

