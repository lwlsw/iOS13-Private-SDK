//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXFeatureSpecManager.h>

@interface PXMemoriesSpecManager : PXFeatureSpecManager
{
    NSUInteger _style;
}

@property(readonly, nonatomic) NSUInteger style; // @synthesize style=_style;
- (id)createSpec;
- (Class)specClass;
- (BOOL)shouldUpdateSpecForExtendedTraitCollection:(id)arg1 change:(NSUInteger)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(NSUInteger)arg2 style:(NSUInteger)arg3;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(NSUInteger)arg2;

@end

