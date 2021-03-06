//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AuthKitUI/AKAuthorizationPaneViewController.h>

#import <AuthKitUI/AKAuthorizationEditableDataSources-Protocol.h>
#import <AuthKitUI/AKAuthorizationPasswordAuthenticationDelegate-Protocol.h>
#import <AuthKitUI/AKAuthorizationSubPaneConfirmButtonDelegate-Protocol.h>

@class AKAuthorizationNameFormatter, AKAuthorizationPresentationContext, AKAuthorizationScopeChoices, AKAuthorizationSubPaneConfirmButton, AKAuthorizationSubPaneImage, AKTiburonAuthorizationUIReport, AKUserInformation, NSArray, UIBarButtonItem;

@interface AKAuthorizationConfirmPaneViewController : AKAuthorizationPaneViewController <AKAuthorizationSubPaneConfirmButtonDelegate, AKAuthorizationPasswordAuthenticationDelegate, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, AKAuthorizationEditableDataSources>
{
    AKTiburonAuthorizationUIReport *_analyticsReport;
    BOOL _editableScopeChoicesChanged;
    BOOL _internalIsEditingName;
    BOOL _internalIsEmailExpanded;
    AKAuthorizationScopeChoices *_editableScopeChoices;
    AKAuthorizationPresentationContext *_presentationContext;
    AKUserInformation *_editingUserInformation;
    NSUInteger _editingGivenNameIndex;
    NSUInteger _editingFamilyNameIndex;
    AKAuthorizationSubPaneImage *_imageSubPane;
    AKAuthorizationSubPaneConfirmButton *_confirmButton;
    NSArray *_validatedScopes;
    double _nameEditHeightChange;
    UIBarButtonItem *_savedRightBarButtonItem;
    UIBarButtonItem *_savedLeftBarButtonItem;
    AKAuthorizationNameFormatter *_nameFormatter;
}

@property(retain, nonatomic) AKAuthorizationNameFormatter *nameFormatter; // @synthesize nameFormatter=_nameFormatter;
@property(retain, nonatomic) UIBarButtonItem *savedLeftBarButtonItem; // @synthesize savedLeftBarButtonItem=_savedLeftBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *savedRightBarButtonItem; // @synthesize savedRightBarButtonItem=_savedRightBarButtonItem;
@property(nonatomic) double nameEditHeightChange; // @synthesize nameEditHeightChange=_nameEditHeightChange;
@property(nonatomic) BOOL internalIsEmailExpanded; // @synthesize internalIsEmailExpanded=_internalIsEmailExpanded;
@property(readonly, nonatomic) NSArray *validatedScopes; // @synthesize validatedScopes=_validatedScopes;
@property(retain, nonatomic) AKAuthorizationSubPaneConfirmButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) AKAuthorizationSubPaneImage *imageSubPane; // @synthesize imageSubPane=_imageSubPane;
@property(nonatomic) NSUInteger editingFamilyNameIndex; // @synthesize editingFamilyNameIndex=_editingFamilyNameIndex;
@property(nonatomic) NSUInteger editingGivenNameIndex; // @synthesize editingGivenNameIndex=_editingGivenNameIndex;
@property(copy, nonatomic) AKUserInformation *editingUserInformation; // @synthesize editingUserInformation=_editingUserInformation;
@property(nonatomic) BOOL internalIsEditingName; // @synthesize internalIsEditingName=_internalIsEditingName;
@property(readonly, nonatomic) AKAuthorizationPresentationContext *presentationContext; // @synthesize presentationContext=_presentationContext;
@property(nonatomic) BOOL editableScopeChoicesChanged; // @synthesize editableScopeChoicesChanged=_editableScopeChoicesChanged;
@property(readonly, nonatomic) AKAuthorizationScopeChoices *editableScopeChoices; // @synthesize editableScopeChoices=_editableScopeChoices;
// - (void).cxx_destruct;
- (id)init;
- (void)passwordAuthenticationCompletedWithResults:(id)arg1 error:(id)arg2;
- (BOOL)validateReadyForAuthorization;
- (void)performAuthorization;
- (void)performPasswordAuthentication;
- (void)subpaneConfirmButtonDidFailBiometry:(id)arg1;
- (void)subPaneConfirmButtonDidEnterProcessingState:(id)arg1;
- (void)_paneDelegate_authorizationPaneViewControllerDidRequestAuthorizationWithUserProvidedInformation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_paneDelegate_authorizationPaneViewControllerDismissWithAuthorization:(id)arg1 error:(id)arg2;
- (void)_handleAuthorizationError:(id)arg1;
- (void)_setCancelButtonEnabled:(BOOL)arg1;
- (void)didSelectEditScope:(id)arg1 options:(id)arg2;
- (void)_performPasswordAuthentication;
- (void)_performAuthorizationWithRawPassword:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_performAuthorizationWithRawPassword:(id)arg1;
- (id)_localizedEmailKey;
- (id)_localizedNameKey;
- (void)_doneButtonSelected:(id)arg1;
- (id)_doneBarButtonItem;
- (void)_clearAction:(id)arg1 event:(id)arg2;
- (id)_clearImage;
- (id)_clearButton;
- (id)_defaultSharedEmail;
- (void)_selectSingleEmailAtIndex:(long long)arg1;
- (void)_selectHideMyEmail;
- (void)_selectShareMyEmail;
- (void)_selectEmailLocalRow:(long long)arg1;
- (void)_selectScope:(id)arg1 localRow:(long long)arg2;
- (void)_selectRow:(long long)arg1;
- (id)_singleEmailCellForIndex:(long long)arg1;
- (id)_hideMyEmailCell;
- (id)_shareMyEmailCell;
- (id)_emailCellForLocalRow:(long long)arg1;
- (id)_nameCell;
- (id)_cellForScope:(id)arg1 localRow:(long long)arg2;
- (id)_cellForRow:(long long)arg1;
- (void)_useOtherIDButtonSelected:(id)arg1;
- (void)_createIconViewWithIcon:(id)arg1;
- (void)_updateIconViewWithIconContext:(id)arg1;
- (void)_fetchWebIconIfNeeded;
- (void)_setupIconView;
- (void)_addUseOtherIDButtonToContext:(id)arg1;
- (void)_enableOrDisableConfirmButton;
- (void)_addAuthorizationButtonToPaneContext:(id)arg1;
- (id)_infoLabelText;
@property(readonly, nonatomic) BOOL _shouldAllowAuthorization;
- (BOOL)_emailScopeAllowsAuthorization;
- (BOOL)_nameScopeAllowsAuthorization;
- (BOOL)_hasAnyScope;
- (BOOL)_hasEmailScope;
- (BOOL)_hasNameScope;
- (void)_updateDataSourceWithValidEditingName;
- (BOOL)_isValidEditingName;
- (BOOL)_getValidEditingGivenName:(id )arg1 familyName:(id )arg2;
- (id)_textFromTextField:(id)arg1;
- (void)_setFamilyNameFromTextField:(id)arg1;
- (void)_setGivenNameFromTextField:(id)arg1;
- (void)_nameEditDone;
- (id)_textFieldForRow:(NSUInteger)arg1;
- (void)_endEditing;
- (void)_beginEditingRow:(NSUInteger)arg1;
- (void)_beginEditing;
- (double)contentScrollOffset;
- (BOOL)_shouldOverrideIntrinsicContentHeight;
- (double)intrinsicContentHeight;
- (void)_updateLayoutForHeightChange:(double)arg1;
- (void)_reloadDataAnimated:(BOOL)arg1 heightChange:(CDUnknownBlockType)arg2 animation:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_reloadDataAnimated:(BOOL)arg1 heightChange:(CDUnknownBlockType)arg2 animation:(CDUnknownBlockType)arg3;
- (void)_reloadDataAnimated:(BOOL)arg1 heightChange:(CDUnknownBlockType)arg2;
- (double)_mainSectionScreenMaxY;
- (double)_iPadNameEditHeightChange;
- (double)_iPhoneNameEditHeightChange;
- (double)_nameEditHeightChange;
- (void)_transitionFromEditingNameAnimated:(BOOL)arg1;
- (void)_transitionToEditingNameAnimated:(BOOL)arg1;
- (void)_setEditingName:(BOOL)arg1 clearing:(BOOL)arg2 animated:(BOOL)arg3;
- (void)setEditingNameClearing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setEditingName:(BOOL)arg1 animated:(BOOL)arg2;
@property(nonatomic, getter=isEditingName) BOOL editingName;
- (void)setEmailExpanded:(BOOL)arg1 animated:(BOOL)arg2;
@property(nonatomic, getter=isEmailExpanded) BOOL emailExpanded;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange *)arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)_setupFamilyNameCell:(id)arg1;
- (void)_setupGivenNameCell:(id)arg1;
- (id)_editingNameCellForRow:(NSUInteger)arg1;
- (long long)_numberOfRowsInScope:(id)arg1;
- (long long)_numberOfRowsInValidatedScopes;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)setPaneDelegate:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)_setupValidatedScopes;
- (void)dealloc;
- (id)initWithAuthorizationContext:(id)arg1 scopeChoices:(id)arg2;

@end

