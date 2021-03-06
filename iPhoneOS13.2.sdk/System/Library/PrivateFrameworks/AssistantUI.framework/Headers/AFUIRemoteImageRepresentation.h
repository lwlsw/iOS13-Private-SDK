//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSURL, UIImage;
@protocol OS_dispatch_queue;

@interface AFUIRemoteImageRepresentation : NSObject <NSItemProviderWriting>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSURL *_imageURL;
    UIImage *_image;
}

+ (id)writableTypeIdentifiersForItemProvider;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
// - (void).cxx_destruct;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_commonInit;
- (id)initWithImageURL:(id)arg1;

@end

