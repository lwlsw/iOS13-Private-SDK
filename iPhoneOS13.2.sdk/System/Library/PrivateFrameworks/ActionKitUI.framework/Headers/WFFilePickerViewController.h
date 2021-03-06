//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <ActionKitUI/WFRemoteFileListViewDelegate-Protocol.h>
#import <ActionKitUI/WFRemoteFileStatusViewDelegate-Protocol.h>
#import <ActionKitUI/_UIContextMenuInteractionDelegate-Protocol.h>

@class NSArray, NSError, NSMutableOrderedSet, NSString, UISearchController, WFRemoteFileListView, WFRemoteFileStatusView;
@protocol WFFileStorageService;

__attribute__((visibility("hidden")))
@interface WFFilePickerViewController : UIViewController <UISearchControllerDelegate, UISearchResultsUpdating, WFRemoteFileListViewDelegate, WFRemoteFileStatusViewDelegate, _UIContextMenuInteractionDelegate>
{
    BOOL _hideSearchBar;
    BOOL _allowsMultipleSelection;
    BOOL _loading;
    id <WFFileStorageService> _service;
    NSString *_path;
    long long _mode;
    id /* CDUnknownBlockType */ _pickCompletionHandler;
    id /* CDUnknownBlockType */ _saveCompletionHandler;
    NSArray *_files;
    NSError *_error;
    NSMutableOrderedSet *_selectedFiles;
    UISearchController *_searchController;
    WFRemoteFileListView *_fileListView;
    WFRemoteFileStatusView *_statusView;
}

@property(readonly, nonatomic) __weak WFRemoteFileStatusView *statusView; // @synthesize statusView=_statusView;
@property(readonly, nonatomic) __weak WFRemoteFileListView *fileListView; // @synthesize fileListView=_fileListView;
@property(readonly, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
@property(copy, nonatomic) NSMutableOrderedSet *selectedFiles; // @synthesize selectedFiles=_selectedFiles;
@property(nonatomic) BOOL loading; // @synthesize loading=_loading;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSArray *files; // @synthesize files=_files;
@property(readonly, nonatomic) id /* CDUnknownBlockType */ saveCompletionHandler; // @synthesize saveCompletionHandler=_saveCompletionHandler;
@property(readonly, nonatomic) id /* CDUnknownBlockType */ pickCompletionHandler; // @synthesize pickCompletionHandler=_pickCompletionHandler;
@property(readonly, nonatomic) BOOL allowsMultipleSelection; // @synthesize allowsMultipleSelection=_allowsMultipleSelection;
@property(readonly, nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) BOOL hideSearchBar; // @synthesize hideSearchBar=_hideSearchBar;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, nonatomic) id <WFFileStorageService> service; // @synthesize service=_service;
// - (void).cxx_destruct;
- (void)didDismissSearchController:(id)arg1;
- (void)didPresentSearchController:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (id)contextMenuInteraction:(id)arg1 actionsForMenuAtLocation:(CGPoint)arg2 withSuggestedActions:(id)arg3;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingAtLocation:(CGPoint)arg2;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2;
- (BOOL)fileListView:(id)arg1 shouldSelectFile:(id)arg2;
- (BOOL)fileListView:(id)arg1 shouldDisplayCheckmarkForFile:(id)arg2;
- (void)fileListView:(id)arg1 didSelectFile:(id)arg2;
- (void)statusViewDidPressRecoveryButton:(id)arg1;
- (void)navigateToSubdirectoryAtPath:(id)arg1;
- (BOOL)caseInsensitiveArray:(id)arg1 isEqualToArray:(id)arg2;
- (void)updateToolbar;
- (void)updateStatusViewAnimated:(BOOL)arg1;
- (void)loadFiles;
- (void)finish;
- (void)cancel;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (id)initWithPath:(id)arg1 selectedFiles:(id)arg2 service:(id)arg3 mode:(long long)arg4 allowsMultipleSelection:(BOOL)arg5 pickCompletionHandler:(CDUnknownBlockType)arg6 saveCompletionHandler:(CDUnknownBlockType)arg7;
- (id)initForSavingFilesAtPath:(id)arg1 service:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initForPickingFilesAtPath:(id)arg1 service:(id)arg2 allowsMultipleSelection:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

