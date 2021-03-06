//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <PassKitUI/PKPGSVSectionHeaderView-Protocol.h>

@class UIActivityIndicatorView, UIButton, UILabel;
@protocol PKPGSVSectionHeaderViewDelegate;

@interface PKPGSVSectionHeaderView : UIView <PKPGSVSectionHeaderView>
{
    BOOL _sizesDirty;
    UILabel *_titleView;
    UILabel *_environmentLabel;
    UIButton *_actionButton;
    UIActivityIndicatorView *_activityIndicator;
    UIEdgeInsets _margins;
    id <PKPGSVSectionHeaderViewDelegate> _delegate;
    BOOL _showActivityIndicator;
    NSUInteger _passType;
}

@property(nonatomic) BOOL showActivityIndicator; // @synthesize showActivityIndicator=_showActivityIndicator;
@property(readonly, nonatomic) NSUInteger passType; // @synthesize passType=_passType;
// - (void).cxx_destruct;
- (BOOL)needsUpdate;
- (id)trailingView;
- (id)leadingView;
- (BOOL)_shouldShowMoreInfoButtonForBarcodePass;
- (void)_addTapped;
- (void)addTapped;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithPassType:(NSUInteger)arg1 delegate:(id)arg2;
- (id)init;

@end

