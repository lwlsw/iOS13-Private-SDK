//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VUIFavoritesRequestManager : NSObject
{
    NSMutableDictionary *_ongoingEntityIDOperationDictionary;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *ongoingEntityIDOperationDictionary; // @synthesize ongoingEntityIDOperationDictionary=_ongoingEntityIDOperationDictionary;
// - (void).cxx_destruct;
- (void)sendRequestForEntityID:(id)arg1 teamName:(id)arg2 action:(NSUInteger)arg3;
- (id)init;
- (id)_init;

@end

