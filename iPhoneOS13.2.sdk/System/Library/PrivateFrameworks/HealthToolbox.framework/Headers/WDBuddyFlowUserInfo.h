//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthToolbox/HKSimpleDataEntryItemDelegate-Protocol.h>

@class NSDateComponents, NSMutableDictionary, NSNumber, NSString;
@protocol WDBuddyFlowUserInfoDelegate;

__attribute__((visibility("hidden")))
@interface WDBuddyFlowUserInfo : NSObject <HKSimpleDataEntryItemDelegate>
{
    NSMutableDictionary *_dataEntryItems;
    id <WDBuddyFlowUserInfoDelegate> _delegate;
    NSString *_firstName;
    NSString *_lastName;
    NSDateComponents *_dateOfBirthComponents;
    NSNumber *_sex;
    NSNumber *_heightInCm;
    NSNumber *_weightInKg;
    NSNumber *_originalHeightInCm;
    NSNumber *_originalWeightInKg;
}

+ (id)buddyFlowUserInfoWithDemographicsInformation:(id)arg1;
@property(retain, nonatomic) NSNumber *originalWeightInKg; // @synthesize originalWeightInKg=_originalWeightInKg;
@property(retain, nonatomic) NSNumber *originalHeightInCm; // @synthesize originalHeightInCm=_originalHeightInCm;
@property(retain, nonatomic) NSNumber *weightInKg; // @synthesize weightInKg=_weightInKg;
@property(retain, nonatomic) NSNumber *heightInCm; // @synthesize heightInCm=_heightInCm;
@property(retain, nonatomic) NSNumber *sex; // @synthesize sex=_sex;
@property(retain, nonatomic) NSDateComponents *dateOfBirthComponents; // @synthesize dateOfBirthComponents=_dateOfBirthComponents;
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(nonatomic) __weak id <WDBuddyFlowUserInfoDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)dataEntryItemDidUpdateValue:(id)arg1;
- (id)_todayBirthdayDateComponents;
- (id)_createSexEntryItem;
- (id)_createDateOfBirthEntryItem;
- (id)_dataEntryItemForRegistrantField:(NSUInteger)arg1;
- (void)saveChangesToHealthStore:(id)arg1 withMedicalIDTemplate:(id)arg2;
- (id)_medicalIDName;
- (id)medicalIDRepresentation;
- (id)defaultDataEntryItems;
- (id)init;

@end

