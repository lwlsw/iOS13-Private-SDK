//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString, UIImage;

__attribute__((visibility("hidden")))
@interface _UIStackedImageSingleNamedLayerImage : NSObject <UINamedLayerImage>
{
    UIImage *_imageObj;
}

@property(retain, nonatomic) UIImage *imageObj; // @synthesize imageObj=_imageObj;
// - (void).cxx_destruct;
@property(readonly, nonatomic) int blendMode;
@property(readonly, nonatomic) double opacity;
@property(readonly, nonatomic) CGRect frame;
@property(readonly, nonatomic) NSString *name;

@end

