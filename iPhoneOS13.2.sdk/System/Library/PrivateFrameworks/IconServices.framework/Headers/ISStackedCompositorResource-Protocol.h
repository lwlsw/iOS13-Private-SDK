//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IconServices/ISCompositorResource-Protocol.h>

@class NSArray;
@protocol ISScalableCompositorResource;

@protocol ISStackedCompositorResource <ISCompositorResource>
@property(readonly) NSArray<ISScalableCompositorResource> *resourceStack;
@end

