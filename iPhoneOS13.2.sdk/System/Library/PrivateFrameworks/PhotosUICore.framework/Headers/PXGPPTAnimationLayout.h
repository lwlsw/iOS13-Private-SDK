//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGLayout.h>

#import <PhotosUICore/PXGSolidColorSource-Protocol.h>

@class NSArray, NSString;

@interface PXGPPTAnimationLayout : PXGLayout <PXGSolidColorSource>
{
//     CDStruct_d97c9657 _updateFlags;
    NSArray *_colors;
    unsigned int _numberOfRows;
    unsigned int _numberOfColumns;
    long long _style;
}

@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) unsigned int numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(nonatomic) unsigned int numberOfRows; // @synthesize numberOfRows=_numberOfRows;
// - (void).cxx_destruct;
- (UIColor )colorAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (void)referenceSizeDidChange;
@property(readonly, nonatomic) NSString *configurationDescription;
- (void)_updateContent;
- (void)update;
- (id)init;

@end

