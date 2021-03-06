//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IconServices/ISIcon.h>

@class LSResourceProxy, NSArray;

__attribute__((visibility("hidden")))
@interface ISIconIOS : ISIcon
{
    NSArray *_decorations;
    LSResourceProxy *_resourceProxy;
}

+ (id)backgroundQueue;
@property(retain) LSResourceProxy *resourceProxy; // @synthesize resourceProxy=_resourceProxy;
@property(copy, nonatomic) NSArray *decorations; // @synthesize decorations=_decorations;
// - (void).cxx_destruct;
- (void)getCGImageForImageDescriptor:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (CGImageRef)CGImageForImageDescriptor:(id)arg1;
- (double)_aspectRatio;
- (void)getImageForImageDescriptor:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)imageForDescriptor:(id)arg1;
- (id)_imageForSymbolImageDescriptor:(id)arg1;
- (id)imageForImageDescriptor:(id)arg1;
- (void)prepareImagesForImageDescriptors:(id)arg1;
- (void)prepareImagesForDescriptors:(id)arg1;
- (void)_prepareImageForSymbolImageDescriptor:(id)arg1;
- (id)_prepareImageForImageDescriptor:(id)arg1;
- (int)variantForSize:(CGSize)arg1 scale:(double)arg2 options:(NSUInteger)arg3;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToIcon:(id)arg1;
- (id)initWithResourceProxy:(id)arg1 decorations:(id)arg2;
- (id)initWithResourceProxy:(id)arg1;
- (id)initWithType:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)_initTransparent;

@end

