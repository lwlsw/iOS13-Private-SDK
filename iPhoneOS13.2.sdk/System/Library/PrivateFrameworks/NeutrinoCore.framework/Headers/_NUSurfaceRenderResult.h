//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/_NUImageRenderResult.h>

#import <NeutrinoCore/NUSurfaceRenderResult-Protocol.h>

@class NSString;
@protocol NUSurfaceImage;

@interface _NUSurfaceRenderResult : _NUImageRenderResult <NUSurfaceRenderResult>
{
    id <NUSurfaceImage> _image;
}

@property(retain) id <NUSurfaceImage> image; // @synthesize image=_image;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;

@end

