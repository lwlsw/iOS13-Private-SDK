//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VUIMarkAsWatchedRequestManager : NSObject
{
    NSMutableDictionary *_ongoingItemIDOperationDictionary;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *ongoingItemIDOperationDictionary; // @synthesize ongoingItemIDOperationDictionary=_ongoingItemIDOperationDictionary;
// - (void).cxx_destruct;
- (void)sendRequestForItemID:(id)arg1 itemType:(id)arg2 channelID:(id)arg3;
- (id)init;
- (id)_init;

@end

