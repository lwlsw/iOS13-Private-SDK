//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSDGLTextureLoader : NSObject
{
}

+ (id)textureWithContentsOfFile:(id)arg1 generateMipmaps:(BOOL)arg2 error:(id )arg3;
+ (id)textureWithCGImage:(CGImageRef)arg1 generateMipmaps:(BOOL)arg2 error:(id )arg3;
+ (id)p_textureInfoFromCGImage:(CGImageRef)arg1 generateMipmaps:(BOOL)arg2;

@end

