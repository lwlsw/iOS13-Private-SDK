//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class VUIStoreAcquisitionProperties;

__attribute__((visibility("hidden")))
@interface VUIAcquisitionRequest : NSObject
{
    BOOL _cancelled;
    VUIStoreAcquisitionProperties *_properties;
    id /* CDUnknownBlockType */ _completionBlock;
}

@property(getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) VUIStoreAcquisitionProperties *properties; // @synthesize properties=_properties;
// - (void).cxx_destruct;

@end

