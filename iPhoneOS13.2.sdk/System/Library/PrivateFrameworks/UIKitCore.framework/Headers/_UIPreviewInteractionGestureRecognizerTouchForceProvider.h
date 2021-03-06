//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIPreviewInteractionTouchForceProviding-Protocol.h>

@class UITouchForceGestureRecognizer;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionGestureRecognizerTouchForceProvider : NSObject <UIGestureRecognizerDelegate, _UIPreviewInteractionTouchForceProviding>
{
    BOOL _active;
    UITouchForceGestureRecognizer *_gestureRecognizer;
}

@property(nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property(retain, nonatomic) UITouchForceGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
// - (void).cxx_destruct;
- (void)_handleGestureRecognizer:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)cancelInteraction;
- (CGPoint)locationInCoordinateSpace:(id)arg1;
@property(readonly, nonatomic) double touchForce;
- (void)dealloc;
- (id)initWithView:(id)arg1 configuration:(CDUnknownBlockType)arg2;
- (id)initWithGestureRecognizer:(id)arg1;

@end

