//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUItemTableModuleController.h>


@class HMRoom, HUEditableTextCell, HUTitleValueCell;

@interface HUZoneModuleController : HUItemTableModuleController <UITextFieldDelegate>
{
    HMRoom *_room;
    HUTitleValueCell *_currentZoneItemCell;
    HUEditableTextCell *_createNewZoneCell;
}

@property(nonatomic) __weak HUEditableTextCell *createNewZoneCell; // @synthesize createNewZoneCell=_createNewZoneCell;
@property(nonatomic) __weak HUTitleValueCell *currentZoneItemCell; // @synthesize currentZoneItemCell=_currentZoneItemCell;
@property(retain, nonatomic) HMRoom *room; // @synthesize room=_room;
// - (void).cxx_destruct;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (id)finishZoneNameEditing;
- (id)_createNewZoneWithName:(id)arg1;
- (BOOL)_validateNewZoneName:(id)arg1;
- (void)_configureCurrentZonesItem:(id)arg1 forCell:(id)arg2 animated:(BOOL)arg3;
- (void)_configureZoneBuilderItem:(id)arg1 forCell:(id)arg2 animated:(BOOL)arg3;
- (void)_configureZoneItem:(id)arg1 forCell:(id)arg2 animated:(BOOL)arg3;
- (void)_configureCreateNewZoneItem:(id)arg1 forCell:(id)arg2 animated:(BOOL)arg3;
- (void)_updateCreateNewZoneCellText:(BOOL)arg1;
- (id)_didSelectZoneBuilderItem:(id)arg1;
- (id)_didSelectZoneItem:(id)arg1;
- (void)accessoryButtonTappedForItem:(id)arg1;
- (NSUInteger)didSelectItem:(id)arg1;
- (BOOL)canSelectItem:(id)arg1;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(BOOL)arg3;
- (Class)cellClassForItem:(id)arg1;
- (id)initWithModule:(id)arg1 room:(id)arg2;

@end

