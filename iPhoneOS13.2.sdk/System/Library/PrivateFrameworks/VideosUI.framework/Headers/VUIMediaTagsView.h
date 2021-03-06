//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <VideosUI/VUILabelTopMarginCalculationProtocol-Protocol.h>
#import <VideosUI/VUIRentalExpirationLabelDelegate-Protocol.h>

@class NSArray, NSDictionary, UIImage, VUIMediaTagsViewLayout;

__attribute__((visibility("hidden")))
@interface VUIMediaTagsView : UIView <VUIRentalExpirationLabelDelegate, VUILabelTopMarginCalculationProtocol>
{
    VUIMediaTagsViewLayout *_layout;
    NSDictionary *_viewsMap;
    NSArray *_groupedSubviews;
    double _totalSubviewsWidth;
    UIImage *_commonSenseLightImage;
    UIImage *_commonSenseDarkImage;
}

+ (id)tagsViewWithMetadata:(id)arg1 layout:(id)arg2 element:(id)arg3 existingView:(id)arg4;
@property(retain, nonatomic) UIImage *commonSenseDarkImage; // @synthesize commonSenseDarkImage=_commonSenseDarkImage;
@property(retain, nonatomic) UIImage *commonSenseLightImage; // @synthesize commonSenseLightImage=_commonSenseLightImage;
@property(nonatomic) double totalSubviewsWidth; // @synthesize totalSubviewsWidth=_totalSubviewsWidth;
@property(retain, nonatomic) NSArray *groupedSubviews; // @synthesize groupedSubviews=_groupedSubviews;
@property(copy, nonatomic) NSDictionary *viewsMap; // @synthesize viewsMap=_viewsMap;
@property(readonly, nonatomic) VUIMediaTagsViewLayout *layout; // @synthesize layout=_layout;
// - (void).cxx_destruct;
- (void)_removeGenreLabelAndSeparator;
- (double)_totalSubviewsWidth;
- (void)_removeSeparatorsFromGroupsIfNeeded:(BOOL)arg1;
- (void)_updateAppearance;
- (BOOL)_shouldPutTextOnSeparateLines;
- (id)_newRentalExpirationlabel:(id)arg1 exisitingLabel:(id)arg2;
- (id)_newImageViewAsSubview;
- (id)_newLabelAsSubview:(id)arg1;
- (void)rentalExpirationLabelNeedsRelayout:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateWithMetadata:(id)arg1;
- (double)bottomMarginWithBaselineMargin:(double)arg1;
- (double)bottomMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2;
- (double)topMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2;
- (double)topMarginWithBaselineMargin:(double)arg1;
- (CGSize)_layoutSubviewsForSize:(CGSize)arg1 computationOnly:(BOOL)arg2;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1 layout:(id)arg2;

@end

