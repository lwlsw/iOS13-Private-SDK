//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemResultComponent.h>

@class HMSymptom, NSString, NSURL;

@interface HFErrorResultComponent : HFItemResultComponent
{
    BOOL _updateInProgress;
    NSUInteger _category;
    HMSymptom *_underlyingSymptom;
    NSString *_errorDescription;
    NSString *_detailedErrorDescription;
    long long _displayPriority;
    NSUInteger _badgeType;
    NSString *_errorMessageTitle;
    NSString *_errorMessageButtonTitle;
    NSURL *_errorHandlerURL;
    NSString *_errorHandlerURLText;
}

+ (long long)priorityForCategory:(NSUInteger)arg1;
+ (BOOL)_requiresManualFixOptionToDisplaySymptom:(id)arg1;
+ (long long)_displayPriorityForSymptom:(id)arg1;
+ (id)componentForSymptom:(id)arg1 contextProvider:(id)arg2;
+ (id)componentForAccessoryReprovisionState:(NSUInteger)arg1;
+ (id)componentForWriteErrorForCharacteristics:(id)arg1 valueSource:(id)arg2;
+ (id)componentForUnreachableAccessoryWithContextProvider:(id)arg1;
+ (id)componentForDisplayError:(id)arg1 symptomContextProvider:(id)arg2;
@property(nonatomic) BOOL updateInProgress; // @synthesize updateInProgress=_updateInProgress;
@property(copy, nonatomic) NSString *errorHandlerURLText; // @synthesize errorHandlerURLText=_errorHandlerURLText;
@property(copy, nonatomic) NSURL *errorHandlerURL; // @synthesize errorHandlerURL=_errorHandlerURL;
@property(copy, nonatomic) NSString *errorMessageButtonTitle; // @synthesize errorMessageButtonTitle=_errorMessageButtonTitle;
@property(copy, nonatomic) NSString *errorMessageTitle; // @synthesize errorMessageTitle=_errorMessageTitle;
@property(nonatomic) NSUInteger badgeType; // @synthesize badgeType=_badgeType;
@property(nonatomic) long long displayPriority; // @synthesize displayPriority=_displayPriority;
@property(copy, nonatomic) NSString *detailedErrorDescription; // @synthesize detailedErrorDescription=_detailedErrorDescription;
@property(copy, nonatomic) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
@property(retain, nonatomic) HMSymptom *underlyingSymptom; // @synthesize underlyingSymptom=_underlyingSymptom;
@property(readonly, nonatomic) NSUInteger category; // @synthesize category=_category;
// - (void).cxx_destruct;
- (id)results;
- (long long)componentPriority;
- (id)initWithCategory:(NSUInteger)arg1;
- (id)init;
- (void)_addAccountSymptomMessageForAccountName:(id)arg1 symptom:(id)arg2;

@end

