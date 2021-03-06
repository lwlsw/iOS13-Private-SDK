//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <DocumentManagerUICore/DOCAddTagTextFieldDelegate-Protocol.h>
#import <DocumentManagerUICore/DOCTagEditorDelegate-Protocol.h>
#import <DocumentManagerUICore/DOCTagEditorPresenter-Protocol.h>

@class DOCAddTagView, NSArray, NSDictionary, NSLayoutConstraint, NSMutableOrderedSet, NSMutableSet, NSOrderedSet, NSString, UIBarButtonItem, UICollectionView, UIInterfaceActionGroupView, UIView;
@protocol DOCTagEditorDelegate;

@interface DOCTagEditorViewController : UIViewController <UICollectionViewDelegateTableLayout, UICollectionViewDataSource, DOCAddTagTextFieldDelegate, DOCTagEditorDelegate, DOCTagEditorPresenter>
{
    BOOL _showAddTagConfirmButtons;
    BOOL _useCompactColorPicker;
    BOOL _pinTextFieldToTopBound;
    BOOL _delayResizingUntilAppeared;
    BOOL _isExtremelyVerticallyCompact;
    BOOL _isInfoInPopoverMode;
    BOOL _inTagListMode;
    BOOL _addingTag;
    BOOL _userChangedTags;
    id <DOCTagEditorDelegate> _delegate;
    NSArray *_items;
    NSOrderedSet *_userTags;
    UICollectionView *_collectionView;
    UIView *_addTagTextFieldViewWrapper;
    DOCAddTagView *_addTagTextFieldView;
    UIInterfaceActionGroupView *_confirmButtons;
    NSDictionary *_sizingCells;
    NSLayoutConstraint *_collectionViewHeightConstraint;
    NSMutableOrderedSet *_discoveredTags;
    NSMutableSet *_intersectionSelectedTags;
    NSMutableSet *_unionSelectedTags;
    NSString *_tagsTitle;
    NSString *_addTagTitle;
    NSString *_addNewTagTitle;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_cancelButton;
}

@property(retain, nonatomic) UIBarButtonItem *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIBarButtonItem *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) NSString *addNewTagTitle; // @synthesize addNewTagTitle=_addNewTagTitle;
@property(retain, nonatomic) NSString *addTagTitle; // @synthesize addTagTitle=_addTagTitle;
@property(retain, nonatomic) NSString *tagsTitle; // @synthesize tagsTitle=_tagsTitle;
@property(nonatomic) BOOL userChangedTags; // @synthesize userChangedTags=_userChangedTags;
@property(retain, nonatomic) NSMutableSet *unionSelectedTags; // @synthesize unionSelectedTags=_unionSelectedTags;
@property(retain, nonatomic) NSMutableSet *intersectionSelectedTags; // @synthesize intersectionSelectedTags=_intersectionSelectedTags;
@property(readonly, nonatomic) NSMutableOrderedSet *discoveredTags; // @synthesize discoveredTags=_discoveredTags;
@property(nonatomic, getter=isAddingTag) BOOL addingTag; // @synthesize addingTag=_addingTag;
@property(readonly, nonatomic) NSLayoutConstraint *collectionViewHeightConstraint; // @synthesize collectionViewHeightConstraint=_collectionViewHeightConstraint;
@property(readonly, nonatomic) NSDictionary *sizingCells; // @synthesize sizingCells=_sizingCells;
@property(retain, nonatomic) UIInterfaceActionGroupView *confirmButtons; // @synthesize confirmButtons=_confirmButtons;
@property(retain, nonatomic) DOCAddTagView *addTagTextFieldView; // @synthesize addTagTextFieldView=_addTagTextFieldView;
@property(retain, nonatomic) UIView *addTagTextFieldViewWrapper; // @synthesize addTagTextFieldViewWrapper=_addTagTextFieldViewWrapper;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) BOOL inTagListMode; // @synthesize inTagListMode=_inTagListMode;
@property(nonatomic) BOOL isInfoInPopoverMode; // @synthesize isInfoInPopoverMode=_isInfoInPopoverMode;
@property(nonatomic) BOOL isExtremelyVerticallyCompact; // @synthesize isExtremelyVerticallyCompact=_isExtremelyVerticallyCompact;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <DOCTagEditorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL delayResizingUntilAppeared; // @synthesize delayResizingUntilAppeared=_delayResizingUntilAppeared;
@property(nonatomic) BOOL pinTextFieldToTopBound; // @synthesize pinTextFieldToTopBound=_pinTextFieldToTopBound;
@property(nonatomic) BOOL useCompactColorPicker; // @synthesize useCompactColorPicker=_useCompactColorPicker;
@property(nonatomic) BOOL showAddTagConfirmButtons; // @synthesize showAddTagConfirmButtons=_showAddTagConfirmButtons;
// - (void).cxx_destruct;
- (void)tagEditor:(id)arg1 userDidDeselectTag:(id)arg2;
- (void)tagEditor:(id)arg1 userDidSelectTag:(id)arg2;
- (void)tagEditor:(id)arg1 userDidCreateTag:(id)arg2;
- (BOOL)addTagTextField:(id)arg1 userDidCreateTagWithName:(id)arg2;
- (void)addTagTextFieldDidChange:(id)arg1;
- (void)addTagTextFieldDidEndEditing:(id)arg1;
- (void)addTagTextFieldDidBeginEditing:(id)arg1;
- (id)cellForIndexPath:(id)arg1 dequeueCell:(CDUnknownBlockType)arg2;
- (double)collectionView:(id)arg1 tableLayout:(id)arg2 heightForRowAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)_tagForIndexPath:(id)arg1;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)scheduleSetTagsOperationWithTag:(id)arg1 adding:(BOOL)arg2;
- (id)createConfirmButtons;
- (void)updateSelectedTags;
- (void)_updateNavigationItem;
- (void)_updateSelection;
- (void)_updateMixedSelectionForCell:(id)arg1;
- (void)_updateSelectionForSection:(NSUInteger)arg1 withTags:(id)arg2;
- (void)_updatePreferredContentSize:(BOOL)arg1;
- (void)updateDiscoveredTags;
- (double)bottomEdgeSpacing;
- (double)topEdgeSpacing;
- (void)cancelButtonTapped:(id)arg1;
- (void)doneButtonTapped:(id)arg1;
- (void)tagRegistryDidUpdate;
@property(readonly, nonatomic) NSOrderedSet *userTags; // @synthesize userTags=_userTags;
@property(readonly, nonatomic) BOOL isCreatingTag;
- (id)contentScrollView;
- (void)dealloc;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)setupCells:(id)arg1;

@end

