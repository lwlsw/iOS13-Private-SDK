//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIAlertController.h"

@class UIViewController;
@protocol UIPopoverPresentationControllerDelegate, _UIRotatingAlertControllerDelegate;

@interface _UIRotatingAlertController : UIAlertController
{
    NSUInteger _arrowDirections;
    BOOL _isRotating;
    BOOL _readyToPresentAfterRotation;
    UIViewController *_presentedViewControllerWhileRotating;
    id <UIPopoverPresentationControllerDelegate> _popoverPresentationControllerDelegateWhileRotating;
    id <_UIRotatingAlertControllerDelegate> _rotatingSheetDelegate;
}

@property(nonatomic) NSUInteger arrowDirections; // @synthesize arrowDirections=_arrowDirections;
@property(nonatomic) __weak id <_UIRotatingAlertControllerDelegate> rotatingSheetDelegate; // @synthesize rotatingSheetDelegate=_rotatingSheetDelegate;
// - (void).cxx_destruct;
- (void)didRotate:(id)arg1;
- (void)_didRotateAndLayout;
- (void)_updateSheetPositionAfterRotation;
- (void)willRotate:(id)arg1;
- (BOOL)_shouldAbortAdaptationFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3;
- (void)_presentingViewControllerDidChange:(id)arg1;
- (void)_presentingViewControllerWillChange:(id)arg1;
- (void)doneWithSheet;
- (BOOL)presentSheetFromRect:(CGRect)arg1;
- (BOOL)presentSheet;
- (void)dealloc;
- (id)init;

@end

