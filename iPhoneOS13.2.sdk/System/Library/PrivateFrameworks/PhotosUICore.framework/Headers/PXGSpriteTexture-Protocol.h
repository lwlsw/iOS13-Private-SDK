//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSIndexSet;

@protocol PXGSpriteTexture <NSObject>
@property(readonly, nonatomic) BOOL isOpaque;
@property(readonly, nonatomic) CGSize pixelSize;
@property(readonly, nonatomic) CGImageRef imageRepresentation;
@property(readonly, nonatomic) int presentationType;
@property(readonly, nonatomic) long long estimatedByteSize;
@property(readonly, nonatomic) NSIndexSet *spriteIndexes;
@property(readonly, nonatomic) unsigned int spriteCount;
- (BOOL)containsSpriteIndex:(unsigned int)arg1;
- (void)enumerateSpriteIndexes:(void (^)(unsigned int, BOOL ))arg1;
- (void)getSpriteIndexes:(unsigned int )arg1 maxSpriteCount:(unsigned int)arg2;
@end

