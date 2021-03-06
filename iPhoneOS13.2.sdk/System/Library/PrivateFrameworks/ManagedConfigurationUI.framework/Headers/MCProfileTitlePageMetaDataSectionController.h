//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ManagedConfigurationUI/MCProfileTitlePageSectionController-Protocol.h>

@class MCProfile, MCProfileTitlePageOrganizationCell, MCProfileTitlePageSettingsIconCell, MCProfileTitlePageSubtitleCell, MCProfileTitlePageTitleCell, UITableView;

__attribute__((visibility("hidden")))
@interface MCProfileTitlePageMetaDataSectionController : NSObject <MCProfileTitlePageSectionController>
{
    UITableView *_tableView;
    MCProfile *_profile;
    MCProfileTitlePageSettingsIconCell *_iconCell;
    MCProfileTitlePageTitleCell *_titleCell;
    MCProfileTitlePageSubtitleCell *_subtitleCell;
    MCProfileTitlePageOrganizationCell *_orgCell;
}

@property(retain, nonatomic) MCProfileTitlePageOrganizationCell *orgCell; // @synthesize orgCell=_orgCell;
@property(retain, nonatomic) MCProfileTitlePageSubtitleCell *subtitleCell; // @synthesize subtitleCell=_subtitleCell;
@property(retain, nonatomic) MCProfileTitlePageTitleCell *titleCell; // @synthesize titleCell=_titleCell;
@property(retain, nonatomic) MCProfileTitlePageSettingsIconCell *iconCell; // @synthesize iconCell=_iconCell;
@property(retain, nonatomic) MCProfile *profile; // @synthesize profile=_profile;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
// - (void).cxx_destruct;
- (NSUInteger)numberOfRows;
- (double)heightForRowAtIndex:(NSUInteger)arg1;
- (double)heightForHeader;
- (id)titleForHeader;
- (id)cellForRowAtIndex:(NSUInteger)arg1;
- (void)registerCellClassWithTableView:(id)arg1;
- (id)initWithProfile:(id)arg1;

@end

