//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/_Geometry.h>

@class NSNumber;
@protocol MTLTexture;

@interface _Background : _Geometry
{
    NSNumber *_numbers;
    NSNumber *_glow;
    id <MTLTexture> _numbersTex;
    id <MTLTexture> _glowTex;
}

@property(retain, nonatomic) id <MTLTexture> glowTex; // @synthesize glowTex=_glowTex;
@property(retain, nonatomic) id <MTLTexture> numbersTex; // @synthesize numbersTex=_numbersTex;
@property(retain, nonatomic) NSNumber *glow; // @synthesize glow=_glow;
@property(retain, nonatomic) NSNumber *numbers; // @synthesize numbers=_numbers;
// - (void).cxx_destruct;

@end

