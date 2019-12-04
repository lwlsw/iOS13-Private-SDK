//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BookCoverUtility/BCUBookCoverEffectsFilter-Protocol.h>
#import <BookCoverUtility/BCUImageFilter-Protocol.h>

@class BCULayerRenderer, NSString;

@interface _BCUCoverEffectsPDF : NSObject <BCUBookCoverEffectsFilter, BCUImageFilter>
{
    BCULayerRenderer *_renderer;
    _Bool _image;
    _Bool _shadow;
    _Bool _night;
    NSString *_identifier;
}

@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)newOperationWithImage:(struct CGImage *)arg1 size:(struct CGSize)arg2 contentsScale:(double)arg3 priority:(float)arg4 options:(id)arg5 completion:(id /* block */)arg6;
- (id)_layerWithImage:(struct CGImage *)arg1 size:(struct CGSize)arg2 scale:(double)arg3 minificationFilter:(id)arg4;
- (struct UIEdgeInsets)_roundedInsetsWithSize:(struct CGSize)arg1;
- (id)shadowLayerWithImage:(struct CGImage *)arg1 size:(struct CGSize)arg2 contentsScale:(double)arg3 kind:(unsigned long long)arg4;
- (id)coverLayerWithImage:(struct CGImage *)arg1 size:(struct CGSize)arg2 contentsScale:(double)arg3;
- (id)initWithIdentifier:(id)arg1 renderer:(id)arg2 image:(_Bool)arg3 shadow:(_Bool)arg4 night:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
