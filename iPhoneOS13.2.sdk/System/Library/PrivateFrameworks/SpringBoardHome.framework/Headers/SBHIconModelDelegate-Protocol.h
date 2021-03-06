//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDictionary, NSIndexPath, NSSet, NSString, SBHIconModel, SBIcon, SBLeafIcon, SBRootFolder;

@protocol SBHIconModelDelegate <NSObject>
- (NSString *)iconModel:(SBHIconModel *)arg1 localizedFolderNameForDefaultDisplayName:(NSString *)arg2;
- (void)iconModel:(SBHIconModel *)arg1 launchIcon:(SBIcon *)arg2 fromLocation:(NSString *)arg3 context:(id)arg4;
- (NSIndexPath *)iconModel:(SBHIconModel *)arg1 customInsertionIndexPathForIcon:(SBIcon *)arg2 inRootFolder:(SBRootFolder *)arg3;
- (BOOL)supportsDockForIconModel:(SBHIconModel *)arg1;
- (NSUInteger)iconModel:(SBHIconModel *)arg1 maxColumnCountForListInRootFolderWithInterfaceOrientation:(long long)arg2;
- (NSUInteger)iconModel:(SBHIconModel *)arg1 maxRowCountForListInRootFolderWithInterfaceOrientation:(long long)arg2;
- (NSUInteger)maxIconCountForDockForIconModel:(SBHIconModel *)arg1;
- (NSUInteger)iconModel:(SBHIconModel *)arg1 maxIconCountForListInFolderClass:(Class)arg2;
- (NSUInteger)maxListCountForFoldersForIconModel:(SBHIconModel *)arg1;

@optional
- (void)iconModel:(SBHIconModel *)arg1 willRemoveIcon:(SBIcon *)arg2;
- (BOOL)iconModel:(SBHIconModel *)arg1 shouldAvoidPlacingIconOnFirstPage:(SBLeafIcon *)arg2;
- (NSSet *)firstPageLeafIdentifiersForIconModel:(SBHIconModel *)arg1;
- (NSDictionary *)defaultIconStateForIconModel:(SBHIconModel *)arg1;
- (void)didDeleteIconState:(SBHIconModel *)arg1;
- (void)didSaveIconState:(SBHIconModel *)arg1;
- (BOOL)canSaveIconState:(SBHIconModel *)arg1;
- (void)willUnarchiveIconModel:(SBHIconModel *)arg1 withMetadata:(NSDictionary *)arg2;
@end

