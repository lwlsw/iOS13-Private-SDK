//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCFaceDetailToggleCell.h>

@class NSArray, UIImageView;

@interface NTKCFaceDetailDataSourceCell : NTKCFaceDetailToggleCell
{
    NSArray *_bundleIdentifiers;
    UIImageView *_iconImageView;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(readonly, nonatomic) NSArray *bundleIdentifiers; // @synthesize bundleIdentifiers=_bundleIdentifiers;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithIdentifiers:(id)arg1 andLabel:(id)arg2 showIcon:(BOOL)arg3 isDonation:(BOOL)arg4;

@end

