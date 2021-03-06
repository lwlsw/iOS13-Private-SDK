//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBFolder.h>

@class SBHIconModel, SBIconListModel;
@protocol SBRootFolderDelegate;

@interface SBRootFolder : SBFolder
{
    id <SBRootFolderDelegate> _delegate;
    SBHIconModel *_model;
}

+ (BOOL)isRootFolderClass;
@property(nonatomic) __weak SBHIconModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <SBRootFolderDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)folderContainingIndexPath:(id)arg1 relativeIndexPath:(id )arg2;
- (BOOL)canAddIconCount:(NSUInteger)arg1 startingAtList:(id)arg2;
- (id)indexPathForFirstFreeSlotStartingAtList:(id)arg1 avoidingFirstList:(BOOL)arg2;
- (BOOL)isRootFolder;
- (id)nodeDescriptionWithPrefix:(id)arg1;
- (id)nodeIdentifier;
- (id)icons;
- (BOOL)canBounceIcon:(id)arg1;
- (BOOL)isIconAtIndexPathInDock:(id)arg1 includingDockFolders:(BOOL)arg2;
- (BOOL)isIconAtIndexPathInDock:(id)arg1;
@property(retain, nonatomic, setter=_setDock:) SBIconListModel *dock;
@property(readonly, nonatomic) BOOL supportsDock;
- (id)_listsForCompaction;
- (BOOL)canEditDisplayName;
- (BOOL)canRemoveIcons;

@end

