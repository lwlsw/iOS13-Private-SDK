//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface WLKArtworkVariant : NSObject
{
    NSString *_artworkURLTemplate;
    BOOL _supportsLayeredImage;
    BOOL _alpha;
    NSString *_artworkURLString;
    long long _artworkType;
    NSString *_format;
    CGSize _artworkSize;
}

+ (id)artworkURLFromTemplate:(id)arg1 forSize:(CGSize)arg2 cropCode:(id)arg3 format:(id)arg4;
+ (id)artworkURLFromTemplate:(id)arg1 forSize:(CGSize)arg2 format:(id)arg3;
@property(nonatomic, getter=hasAlpha) BOOL alpha; // @synthesize alpha=_alpha;
@property(nonatomic) BOOL supportsLayeredImage; // @synthesize supportsLayeredImage=_supportsLayeredImage;
@property(readonly, copy, nonatomic) NSString *format; // @synthesize format=_format;
@property(readonly, nonatomic) long long artworkType; // @synthesize artworkType=_artworkType;
@property(readonly, nonatomic) CGSize artworkSize; // @synthesize artworkSize=_artworkSize;
@property(readonly, copy, nonatomic) NSString *artworkURLString; // @synthesize artworkURLString=_artworkURLString;
// - (void).cxx_destruct;
- (id)_sizeDescription:(CGSize)arg1;
- (id)description;
- (id)artworkSizeTemplateURL;
- (id)artworkURLForSize:(CGSize)arg1 cropCode:(id)arg2 format:(id)arg3;
- (id)artworkURLForSize:(CGSize)arg1 format:(id)arg2;
- (id)artworkURLForSize:(CGSize)arg1;
@property(readonly, copy, nonatomic) NSURL *artworkURL;
- (id)initWithDictionary:(id)arg1;

@end

