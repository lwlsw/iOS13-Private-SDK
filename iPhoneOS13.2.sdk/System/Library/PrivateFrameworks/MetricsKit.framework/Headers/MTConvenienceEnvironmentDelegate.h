//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricsKit/MTEnvironmentUIKitStoreDelegate.h>

@interface MTConvenienceEnvironmentDelegate : MTEnvironmentUIKitStoreDelegate
{
    id /* CDUnknownBlockType */ __pageURLBlock;
    id /* CDUnknownBlockType */ __resourceRevNumBlock;
    id /* CDUnknownBlockType */ __hostAppBlock;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ _hostAppBlock; // @synthesize _hostAppBlock=__hostAppBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ _resourceRevNumBlock; // @synthesize _resourceRevNumBlock=__resourceRevNumBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ _pageURLBlock; // @synthesize _pageURLBlock=__pageURLBlock;
// - (void).cxx_destruct;
- (id)resourceRevNum;
- (id)pageUrl;
- (id)hostApp;
- (id)initWithPageURLBlock:(CDUnknownBlockType)arg1 resourceRevNumBlock:(CDUnknownBlockType)arg2 hostAppBlock:(CDUnknownBlockType)arg3;
- (id)init;

@end

