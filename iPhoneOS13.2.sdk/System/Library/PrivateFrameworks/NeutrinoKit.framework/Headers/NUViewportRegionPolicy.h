//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoKit/NURegionPolicy-Protocol.h>

@class NSString, NUViewport;

@interface NUViewportRegionPolicy : NSObject <NURegionPolicy>
{
    NUViewport *_viewport;
}

// - (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
- (id)regionForGeometry:(id)arg1;
- (id)initWithViewport:(id)arg1;
- (id)init;

@end

