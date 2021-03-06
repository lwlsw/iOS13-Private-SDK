#import <DocumentCamera/AVCapturePhotoCaptureDelegate-Protocol.h>
#import <DocumentCamera/AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h>
#import <DocumentCamera/BKSAccelerometerDelegate-Protocol.h>
#import <DocumentCamera/CDStructures.h>
#import <DocumentCamera/DCAccessibility.h>
#import <DocumentCamera/DCAccessibilityExtras-Protocol.h>
#import <DocumentCamera/DCActivityItemSource.h>
#import <DocumentCamera/DCActivityViewController.h>
#import <DocumentCamera/DCAnalyticsReporterAccessibilityDelegate-Protocol.h>
#import <DocumentCamera/DCAnalyticsReporterBase.h>
#import <DocumentCamera/DCAtomicLRUCache.h>
#import <DocumentCamera/DCCachesDirectory.h>
#import <DocumentCamera/DCCircularProgressView.h>
#import <DocumentCamera/DCColorDummyClass.h>
#import <DocumentCamera/DCDispatchAfterBlocks.h>
#import <DocumentCamera/DCDispatchAfterHandler.h>
#import <DocumentCamera/DCDocCamPDFGenerator.h>
#import <DocumentCamera/DCDocumentCameraPublicViewController-Protocol.h>
#import <DocumentCamera/DCDocumentCameraRemoteViewController-Protocol.h>
#import <DocumentCamera/DCDocumentCameraRemoteViewController.h>
#import <DocumentCamera/DCDocumentCameraViewController.h>
#import <DocumentCamera/DCDocumentCameraViewController_InProcess.h>
#import <DocumentCamera/DCDocumentCameraViewController_ViewService.h>
#import <DocumentCamera/DCDocumentCameraViewServiceSession.h>
#import <DocumentCamera/DCDocumentCameraViewServiceSessionRequest.h>
#import <DocumentCamera/DCDocumentCameraViewServiceViewController-Protocol.h>
#import <DocumentCamera/DCDocumentEditorViewController.h>
#import <DocumentCamera/DCDocumentInfoCollectionActivityItemSource.h>
#import <DocumentCamera/DCLRUCache.h>
#import <DocumentCamera/DCLocalization.h>
#import <DocumentCamera/DCLongRunningTaskController.h>
#import <DocumentCamera/DCMarkupActivity.h>
#import <DocumentCamera/DCMarkupActivityItem.h>
#import <DocumentCamera/DCMarkupPresenter.h>
#import <DocumentCamera/DCMarkupUtilities.h>
#import <DocumentCamera/DCNotesSPI.h>
#import <DocumentCamera/DCNotesTextureBackgroundView.h>
#import <DocumentCamera/DCNotesTextureView.h>
#import <DocumentCamera/DCPDFGenerator.h>
#import <DocumentCamera/DCProgressViewController.h>
#import <DocumentCamera/DCProgressViewControllerDelegate-Protocol.h>
#import <DocumentCamera/DCSandboxExtension.h>
#import <DocumentCamera/DCScannedDocument.h>
#import <DocumentCamera/DCSelectorDelayer.h>
#import <DocumentCamera/DCSettings.h>
#import <DocumentCamera/DCSinglePixelHorizontalLineView.h>
#import <DocumentCamera/DCSinglePixelLineView.h>
#import <DocumentCamera/DCSinglePixelVerticalLineView.h>
#import <DocumentCamera/DCUnsavedDataDelegate-Protocol.h>
#import <DocumentCamera/DCUsageAnalyticsReporter.h>
#import <DocumentCamera/DCUtilities.h>
#import <DocumentCamera/ICDocCamCVPixelBufferUtilities.h>
#import <DocumentCamera/ICDocCamDebugMovieController.h>
#import <DocumentCamera/ICDocCamDebugMovieControllerDelegate-Protocol.h>
#import <DocumentCamera/ICDocCamDocumentInfo.h>
#import <DocumentCamera/ICDocCamDocumentInfoCollection.h>
#import <DocumentCamera/ICDocCamExtractedDocumentControllerDelegate-Protocol.h>
#import <DocumentCamera/ICDocCamExtractedDocumentNavigationController.h>
#import <DocumentCamera/ICDocCamExtractedDocumentThumbnailCell.h>
#import <DocumentCamera/ICDocCamExtractedDocumentViewController.h>
#import <DocumentCamera/ICDocCamExtractedThumbnailContainerView.h>
#import <DocumentCamera/ICDocCamExtractedThumbnailContainerViewDelegate-Protocol.h>
#import <DocumentCamera/ICDocCamFilterButton.h>
#import <DocumentCamera/ICDocCamFilterViewController.h>
#import <DocumentCamera/ICDocCamFilterViewControllerInvisibleRootView.h>
#import <DocumentCamera/ICDocCamFilterViewDelegate-Protocol.h>
#import <DocumentCamera/ICDocCamImageCache.h>
#import <DocumentCamera/ICDocCamImageFilters.h>
#import <DocumentCamera/ICDocCamImageQuad-Protocol.h>
#import <DocumentCamera/ICDocCamImageQuad.h>
#import <DocumentCamera/ICDocCamImageQuadEditImageView.h>
#import <DocumentCamera/ICDocCamImageQuadEditKnobAccessibilityElement.h>
#import <DocumentCamera/ICDocCamImageQuadEditOverlay.h>
#import <DocumentCamera/ICDocCamImageQuadEditOverlayDelegate-Protocol.h>
#import <DocumentCamera/ICDocCamImageQuadEditPanGestureRecognizer.h>
#import <DocumentCamera/ICDocCamImageQuadEditPanGestureRecognizerDelegate-Protocol.h>
#import <DocumentCamera/ICDocCamImageQuadEditViewController.h>
#import <DocumentCamera/ICDocCamImageSequenceAnalyzer.h>
#import <DocumentCamera/ICDocCamImageSequenceFrame.h>
#import <DocumentCamera/ICDocCamNavigationController.h>
#import <DocumentCamera/ICDocCamNonRotatableViewController.h>
#import <DocumentCamera/ICDocCamOverlayView.h>
#import <DocumentCamera/ICDocCamPageContentViewController.h>
#import <DocumentCamera/ICDocCamPhotoCaptureDelegate.h>
#import <DocumentCamera/ICDocCamPhysicalCaptureNotifier.h>
#import <DocumentCamera/ICDocCamPhysicalCaptureNotifierDelegate-Protocol.h>
#import <DocumentCamera/ICDocCamPhysicalCaptureRecognizer.h>
#import <DocumentCamera/ICDocCamPreviewView.h>
#import <DocumentCamera/ICDocCamProcessingBlocker.h>
#import <DocumentCamera/ICDocCamProcessingBlockerDelegate-Protocol.h>
#import <DocumentCamera/ICDocCamRecropTransitionAnimator.h>
#import <DocumentCamera/ICDocCamRectangleResultsQueue.h>
#import <DocumentCamera/ICDocCamRenamePrompt.h>
#import <DocumentCamera/ICDocCamReorderingThumbnailCollectionViewLayout.h>
#import <DocumentCamera/ICDocCamRetakeTransitionAnimator.h>
#import <DocumentCamera/ICDocCamSaveButton.h>
#import <DocumentCamera/ICDocCamScanCache.h>
#import <DocumentCamera/ICDocCamScanCacheItem.h>
#import <DocumentCamera/ICDocCamShutterButton.h>
#import <DocumentCamera/ICDocCamSpinner.h>
#import <DocumentCamera/ICDocCamThumbnailCell.h>
#import <DocumentCamera/ICDocCamThumbnailCollectionViewController.h>
#import <DocumentCamera/ICDocCamThumbnailCollectionViewLayout.h>
#import <DocumentCamera/ICDocCamThumbnailContainerView.h>
#import <DocumentCamera/ICDocCamThumbnailDecorationView.h>
#import <DocumentCamera/ICDocCamThumbnailViewDelegate-Protocol.h>
#import <DocumentCamera/ICDocCamThumbnailViewLayoutAttributes.h>
#import <DocumentCamera/ICDocCamThumbnailViewLayoutDelegate-Protocol.h>
#import <DocumentCamera/ICDocCamThumbnailZoomTransitionAnimator.h>
#import <DocumentCamera/ICDocCamToolbarFilterButton.h>
#import <DocumentCamera/ICDocCamUtilities.h>
#import <DocumentCamera/ICDocCamViewController.h>
#import <DocumentCamera/ICDocCamViewControllerDelegate-Protocol.h>
#import <DocumentCamera/ICDocCamViewControllerMeshTransform.h>
#import <DocumentCamera/ICDocCamZoomablePageContentDelegate-Protocol.h>
#import <DocumentCamera/ICDocCamZoomablePageContentImageView.h>
#import <DocumentCamera/ICDocCamZoomablePageContentViewController.h>
#import <DocumentCamera/ICDocCamZoomablePageContentViewDelegate-Protocol.h>
#import <DocumentCamera/NSArray-DC.h>
#import <DocumentCamera/NSMutableArray-DC.h>
#import <DocumentCamera/NSMutableSet-DC.h>
#import <DocumentCamera/NSNumberFormatter-DCAccessibility.h>
#import <DocumentCamera/NSObject-DCAccessibility.h>
#import <DocumentCamera/NSParagraphStyle-DC.h>
#import <DocumentCamera/NSSet-DC.h>
#import <DocumentCamera/NSString-DC.h>
#import <DocumentCamera/UIColor-DC.h>
#import <DocumentCamera/UIDevice-DocumentCameraDeviceSupport.h>
#import <DocumentCamera/UIFont-IC.h>
#import <DocumentCamera/UIImage-DCUtilities.h>
#import <DocumentCamera/UIView-DC.h>
#import <DocumentCamera/UIViewController-EffectiveInterface.h>
#import <DocumentCamera/WhiteboardFilter.h>
#import <DocumentCamera/ZhangHeFilter.h>
