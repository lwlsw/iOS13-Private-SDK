//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OnBoardingKit/OBFlow.h>

@class NSArray, NSBundle, NSDictionary, NSString, OBImage;

@interface OBPrivacyFlow : OBFlow
{
    NSBundle *_bundle;
    NSString *_splashContentName;
    NSDictionary *_splashPlist;
    BOOL _buttonIconLoaded;
    OBImage *_buttonIcon;
    NSString *_buttonTitle;
    NSString *_buttonCaption;
    NSString *_splashTitle;
    NSString *_splashShortTitle;
}

+ (id)_modelSpecificLocalizedStringKeyForKey:(id)arg1 preferredDeviceType:(NSUInteger)arg2;
+ (id)flowWithBundle:(id)arg1;
// - (void).cxx_destruct;
- (id)localizedContentListForLanguage:(id)arg1 preferredDeviceType:(NSUInteger)arg2;
@property(readonly, nonatomic) NSArray *localizedContentList;
- (id)localizedShortTitleForLanguage:(id)arg1 preferredDeviceType:(NSUInteger)arg2;
@property(readonly, nonatomic) NSString *localizedShortTitle;
- (id)localizedTitleForLanguage:(id)arg1 preferredDeviceType:(NSUInteger)arg2;
@property(readonly, nonatomic) NSString *localizedTitle;
- (id)localizedButtonCaptionForLanguage:(id)arg1 preferredDeviceType:(NSUInteger)arg2;
@property(readonly, nonatomic) NSString *localizedButtonCaption;
- (id)localizedButtonTitleForLanguage:(id)arg1 preferredDeviceType:(NSUInteger)arg2;
@property(readonly, nonatomic) NSString *localizedButtonTitle;
- (id)_textForConditionalItem:(id)arg1 language:(id)arg2 preferredDeviceType:(NSUInteger)arg3;
- (BOOL)_conformsToRequirements:(id)arg1;
- (BOOL)_conformsToRequirement:(id)arg1;
@property(readonly, nonatomic) BOOL showInCombinedList;
@property(readonly, nonatomic) OBImage *buttonIcon;
- (id)_iconType;
@property(readonly, nonatomic, getter=isPersonallyIdentifiable) BOOL personallyIdentifiable;
- (id)_bundleImageNamed:(id)arg1;
- (id)_splashLocalizedStringForKey:(id)arg1 language:(id)arg2 table:(id)arg3 preferredDeviceType:(NSUInteger)arg4;
- (id)_splashLocalizedStringForKey:(id)arg1 language:(id)arg2 preferredDeviceType:(NSUInteger)arg3;
@property(readonly, nonatomic) BOOL platformSupported;
- (id)_currentPlatform;
@property(readonly, nonatomic) NSUInteger contentVersion;
@property(readonly, nonatomic) NSString *identifier;
- (id)initWithSplashContent:(id)arg1;
- (id)initWithBundle:(id)arg1;

@end

