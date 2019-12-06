//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UICollectionLayoutItem.h>

#import <UIKitCore/_UICollectionLayoutAPIRespresenting-Protocol.h>

@class NSArray, _UICollectionLayoutSpacing;

@interface _UICollectionLayoutGroup : _UICollectionLayoutItem <NSCopying, _UICollectionLayoutAPIRespresenting>
{
    int _layoutAxis;
    BOOL _isCustomGroup;
    NSArray *_subitems;
    long long _count;
    NSArray *_supplementaryItems;
    _UICollectionLayoutSpacing *_interItemSpacing;
    long long _groupOptions;
    id /* CDUnknownBlockType */ _subitemsProvider;
    id /* CDUnknownBlockType */ _frameProvider;
    id /* CDUnknownBlockType */ _customGroupItemProvider;
    id /* CDUnknownBlockType */ _visualFormatProvider;
    NSArray *_visualFormats;
}

+ (id)customGroupWithSize:(id)arg1 frameProvider:(CDUnknownBlockType)arg2;
+ (id)groupWithLayoutAxis:(int)arg1 size:(id)arg2 subitems:(id)arg3 count:(long long)arg4;
+ (id)layoutGroupWithSize:(id)arg1 visualFormats:(id)arg2 itemProvider:(CDUnknownBlockType)arg3;
+ (id)verticalGroupWithSize:(id)arg1 subitemsProvider:(CDUnknownBlockType)arg2;
+ (id)horizontalGroupWithSize:(id)arg1 subitemsProvider:(CDUnknownBlockType)arg2;
+ (id)verticalGroupWithSize:(id)arg1 subitems:(id)arg2;
+ (id)verticalGroupWithSize:(id)arg1 subitem:(id)arg2 count:(long long)arg3;
+ (id)horizontalGroupWithSize:(id)arg1 subitems:(id)arg2;
+ (id)horizontalGroupWithSize:(id)arg1 subitem:(id)arg2 count:(long long)arg3;
@property(nonatomic) long long groupOptions; // @synthesize groupOptions=_groupOptions;
// - (void).cxx_destruct;
- (id)_apiRepresentation;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)visualDescription;
@property(readonly, nonatomic) BOOL isCustomGroup;
@property(readonly, nonatomic) BOOL isVerticalGroup;
@property(readonly, nonatomic) BOOL isHorizontalGroup;
@property(copy, nonatomic) _UICollectionLayoutSpacing *interItemSpacing;
@property(copy, nonatomic) NSArray *supplementaryItems;
- (id)initWithlayoutSize:(id)arg1 contentInsets:(NSDirectionalEdgeInsets)arg2 layoutAxis:(int)arg3 isCustomGroup:(BOOL)arg4 subitems:(id)arg5 count:(long long)arg6 supplementaryItems:(id)arg7 interItemSpacing:(id)arg8 groupOptions:(long long)arg9 subitemsProvider:(CDUnknownBlockType)arg10 frameProvider:(CDUnknownBlockType)arg11 customGroupItemProvider:(CDUnknownBlockType)arg12 visualFormats:(id)arg13 visualFormatProvider:(CDUnknownBlockType)arg14;

@end
