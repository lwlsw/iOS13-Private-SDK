//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface NPKBitmapImage : NSObject
{
    unsigned int _bitmapInfo;
    NSUInteger _width;
    NSUInteger _height;
    NSUInteger _bitsPerComponent;
    NSUInteger _bitsPerPixel;
    NSUInteger _bytesPerRow;
    NSData *_bitmapData;
}

@property(retain) NSData *bitmapData; // @synthesize bitmapData=_bitmapData;
@property unsigned int bitmapInfo; // @synthesize bitmapInfo=_bitmapInfo;
@property NSUInteger bytesPerRow; // @synthesize bytesPerRow=_bytesPerRow;
@property NSUInteger bitsPerPixel; // @synthesize bitsPerPixel=_bitsPerPixel;
@property NSUInteger bitsPerComponent; // @synthesize bitsPerComponent=_bitsPerComponent;
@property NSUInteger height; // @synthesize height=_height;
@property NSUInteger width; // @synthesize width=_width;
// - (void).cxx_destruct;
- (void)enumerateAllPixels:(CDUnknownBlockType)arg1;
- (CGImageRef)createImageRef;
- (id)encodedImage;
- (id)initWithEncodedImage:(id)arg1;
- (id)initWithCGImageRef:(CGImageRef)arg1;

@end

