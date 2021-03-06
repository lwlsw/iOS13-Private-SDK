//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UICollectionLayoutSupplementaryItem.h>

#import <UIKitCore/_UICollectionLayoutAPIRespresenting-Protocol.h>

@class NSString;

@interface _UICollectionLayoutBoundarySupplementaryItem : _UICollectionLayoutSupplementaryItem <NSCopying, _UICollectionLayoutAPIRespresenting>
{
    NSString *_elementKind;
    long long _alignment;
    CGPoint _offset;
    BOOL _extendsBoundary;
    BOOL _pinToVisibleBounds;
}

+ (id)boundarySupplementaryItemWithSize:(id)arg1 elementKind:(id)arg2 alignment:(long long)arg3 offset:(CGPoint)arg4;
+ (id)boundarySupplementaryItemWithSize:(id)arg1 elementKind:(id)arg2 alignment:(long long)arg3;
@property(readonly, nonatomic) CGPoint offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(nonatomic) BOOL pinToVisibleBounds; // @synthesize pinToVisibleBounds=_pinToVisibleBounds;
@property(nonatomic) BOOL extendsBoundary; // @synthesize extendsBoundary=_extendsBoundary;
// - (void).cxx_destruct;
- (id)_apiRepresentation;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithSize:(id)arg1 elementKind:(id)arg2 alignment:(long long)arg3 offset:(CGPoint)arg4 zIndex:(long long)arg5 contentInsets:(NSDirectionalEdgeInsets)arg6 extendsBoundary:(BOOL)arg7 pinToVisibleBounds:(BOOL)arg8;

@end

