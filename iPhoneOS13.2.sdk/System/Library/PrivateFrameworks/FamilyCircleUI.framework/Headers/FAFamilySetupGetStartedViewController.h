//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <FamilyCircleUI/FAFamilySetupPage-Protocol.h>

@class AAFamilyEligibilityResponse, ACAccount, ACAccountStore, FAFamilySharingFeaturesView, UIButton, UIImageView, UILabel, UIScrollView, UIView;
@protocol FAFamilySetupPageDelegate;

@interface FAFamilySetupGetStartedViewController : UIViewController <FAFamilySetupPage>
{
    ACAccount *_account;
    ACAccountStore *_accountStore;
    AAFamilyEligibilityResponse *_familyEligibilityResponse;
    UIScrollView *_scrollView;
    UIView *_contentView;
    UILabel *_titleLabel;
    UIImageView *_familySharingLogo;
    UILabel *_descriptionLabel;
    UIButton *_getStartedButton;
    FAFamilySharingFeaturesView *_familyFeaturesView;
    id <FAFamilySetupPageDelegate> _delegate;
}

@property(nonatomic) __weak id <FAFamilySetupPageDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_getStartedButtonWasTapped:(id)arg1;
- (double)_heightForText:(id)arg1 constrainedToWidth:(double)arg2;
- (id)_createDescriptionLabelForText:(id)arg1;
- (void)_updateFonts;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (id)initWithAccount:(id)arg1 store:(id)arg2 familyEligibilityResponse:(id)arg3;
- (id)initWithAccount:(id)arg1 store:(id)arg2;

@end

