//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UILabel, _HKEmergencyContact;

@interface _HKEmergencyCardContactCell : UITableViewCell
{
    _HKEmergencyContact *_contact;
    UILabel *_relationshipLabel;
    UILabel *_nameLabel;
    UILabel *_phoneNumberLabel;
}

@property(retain, nonatomic) UILabel *phoneNumberLabel; // @synthesize phoneNumberLabel=_phoneNumberLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UILabel *relationshipLabel; // @synthesize relationshipLabel=_relationshipLabel;
@property(retain, nonatomic) _HKEmergencyContact *contact; // @synthesize contact=_contact;
// - (void).cxx_destruct;
- (void)setContact:(id)arg1 showRelationship:(BOOL)arg2 showPhoneIcon:(BOOL)arg3;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)setupConstraints;
- (void)setupViewHeirarchy;
- (void)_setupIndividualViews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

