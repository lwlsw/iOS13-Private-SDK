//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <PhotosUICore/PXFeedbackFormDelegate-Protocol.h>

@class NSArray, NSDictionary, PXFeedbackLikeItOrNotComboUIViewController, UINavigationController;
@protocol PXFeedbackImageQualityUIViewControllerDelegate;

@interface PXFeedbackImageQualityUIViewController : UIViewController <PXFeedbackFormDelegate>
{
    NSArray *_assets;
    id <PXFeedbackImageQualityUIViewControllerDelegate> _delegate;
    NSDictionary *_negativeFeedback;
    UINavigationController *_navigationController;
    PXFeedbackLikeItOrNotComboUIViewController *_feedbackController;
    NSArray *_imageQualityDiagnosticFileURLs;
}

@property(retain, nonatomic) NSArray *imageQualityDiagnosticFileURLs; // @synthesize imageQualityDiagnosticFileURLs=_imageQualityDiagnosticFileURLs;
@property(retain, nonatomic) PXFeedbackLikeItOrNotComboUIViewController *feedbackController; // @synthesize feedbackController=_feedbackController;
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) NSDictionary *negativeFeedback; // @synthesize negativeFeedback=_negativeFeedback;
@property(readonly, nonatomic) __weak id <PXFeedbackImageQualityUIViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *assets; // @synthesize assets=_assets;
// - (void).cxx_destruct;
- (id)_generateURLsForAssetsDBGFiles:(id)arg1;
- (id)_keywordIDForComponent:(long long)arg1;
- (id)_componentNameForComponent:(long long)arg1;
- (id)_componentIDForComponent:(long long)arg1;
- (long long)_radarComponentForFeedback:(id)arg1;
- (id)_generateTitleForFeedback:(id)arg1;
- (void)_generateResourceFilesForAssets:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_fileRadarWithAssets:(id)arg1 positiveFeedback:(id)arg2 negativeFeedback:(id)arg3 customFeedback:(id)arg4;
- (void)userDidFinish:(BOOL)arg1;
- (void)userIndicatedLike;
- (void)userIndicatedDislike;
- (BOOL)wantsCustomFeedbackSection;
- (BOOL)wantsPositiveFeedbackSection;
- (BOOL)shouldContinuePresentingFormAfterFeedback;
- (void)userSentPositiveFeedback:(id)arg1 negativeFeedback:(id)arg2 customFeedback:(id)arg3;
- (id)negativeFeedbackKeys;
- (id)positiveFeedbackKeys;
- (BOOL)shouldDisplaySecondaryFeedbackButtons;
- (id)viewTitleForRadar;
- (id)longTitleText;
- (void)viewDidLoad;
- (id)initWithAssets:(id)arg1 delegate:(id)arg2;

@end

