//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UITextIndirectEditableInteraction.h>

#import <UIKitCore/_UIKeyboardTextSelectionGestureControllerDelegate-Protocol.h>

@class NSString, UIKeyboardTaskQueue, _UIKeyboardTextSelectionController;

__attribute__((visibility("hidden")))
@interface UITextIndirectNonEditableInteraction : UITextIndirectEditableInteraction <_UIKeyboardTextSelectionGestureControllerDelegate>
{
    _UIKeyboardTextSelectionController *_textSelectionController;
}

- (_Bool)shouldAllowSelectionGestures:(_Bool)arg1 atPoint:(struct CGPoint)arg2 toBegin:(_Bool)arg3;
- (_Bool)shouldAllowWithTouchTypes:(id)arg1 atPoint:(struct CGPoint)arg2 toBegin:(_Bool)arg3;
- (void)didEndGesture;
- (void)willBeginGesture;
@property(readonly, nonatomic) _UIKeyboardTextSelectionController *textSelectionController;
@property(readonly, nonatomic) UIKeyboardTaskQueue *taskQueue;
- (void)dealloc;
- (void)_setupControllersIfNecessaryWithView:(id)arg1;
- (void)finishSetup;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) double timestampOfLastTouchesEnded;

@end
