//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//



@class AAUIProfilePictureStore, ACAccount, NSValue, UIButton, UIImage, UIImagePickerController, UILabel, UIScrollView, UIView;
@protocol FAConfirmIdentityViewControllerDelegate;

@interface FAConfirmIdentityViewController : UIViewController <UIImagePickerControllerDelegate, UIActionSheetDelegate, UINavigationControllerDelegate>
{
    ACAccount *_appleAccount;
    UIScrollView *_scrollView;
    UIView *_contentView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIView *_profilePhotoView;
    UILabel *_nameLabel;
    UILabel *_emailLabel;
    UIButton *_continueButton;
    UIButton *_useDifferentIDButton;
    AAUIProfilePictureStore *_profilePictureStore;
    UIImage *_newProfilePicture;
    NSValue *_newProfilePictureCropRect;
    UIImagePickerController *_imagePicker;
    id <FAConfirmIdentityViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <FAConfirmIdentityViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateFonts;
- (void)_showImagePickerForAvailableSources;
- (void)_useDifferentIDButtonWasTapped:(id)arg1;
- (void)continueButtonWasTapped:(id)arg1;
- (void)_addPhotoButtonWasTapped:(id)arg1;
- (void)_photoWasTapped:(id)arg1;
- (void)_updateViewsInPhotoArea:(id)arg1;
- (double)_heightForText:(id)arg1 width:(double)arg2;
- (BOOL)shouldShowInviteeInstructions;
- (id)titleForContinuebutton;
- (id)instructions;
- (id)pageTitle;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (id)initWithAppleAccount:(id)arg1 grandSlamSigner:(id)arg2;

@end

