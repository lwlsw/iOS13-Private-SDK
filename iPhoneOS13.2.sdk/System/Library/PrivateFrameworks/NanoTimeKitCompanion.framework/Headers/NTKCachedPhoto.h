//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NTKPhoto, UIImage;

@interface NTKCachedPhoto : NSObject
{
    UIImage *_image;
    NTKPhoto *_photo;
    long long _index;
}

@property(readonly, nonatomic) long long index; // @synthesize index=_index;
@property(readonly, nonatomic) NTKPhoto *photo; // @synthesize photo=_photo;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
// - (void).cxx_destruct;
- (BOOL)load;
- (id)initWithPhoto:(id)arg1 index:(long long)arg2;
- (id)initWithPhoto:(id)arg1;

@end

