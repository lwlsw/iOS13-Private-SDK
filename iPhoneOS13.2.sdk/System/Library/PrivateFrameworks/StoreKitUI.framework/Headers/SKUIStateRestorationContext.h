//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SKUIClientContext;

@interface SKUIStateRestorationContext : NSObject
{
    SKUIClientContext *_clientContext;
}

+ (id)sharedContext;
+ (void)setSharedContext:(id)arg1;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
// - (void).cxx_destruct;

@end

