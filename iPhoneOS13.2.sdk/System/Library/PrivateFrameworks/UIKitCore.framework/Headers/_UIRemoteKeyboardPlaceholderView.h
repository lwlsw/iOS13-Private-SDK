//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIView.h"

#import <UIKitCore/_UIRemoteKeyboardInputViewPlaceholder-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIRemoteKeyboardPlaceholderView : UIView <UISplittableInputView, _UIRemoteKeyboardInputViewPlaceholder>
{
    UIView *_mirroredView;
    CGSize _fixedSize;
    id /* CDUnknownBlockType */ _sizeBlock;
    UIView *_fallbackView;
    UIView *_associatedView;
}

+ (id)placeholderWithSizer:(CDUnknownBlockType)arg1;
+ (id)placeholderWithWidth:(double)arg1 height:(double)arg2;
+ (id)placeholderForView:(id)arg1;
@property(retain, nonatomic) UIView *associatedView; // @synthesize associatedView=_associatedView;
@property(retain, nonatomic) UIView *fallbackView; // @synthesize fallbackView=_fallbackView;
- (void)_isPlaceholderViewSelector;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
@property(nonatomic) CGSize fixedSize;
- (BOOL)refreshPlaceholder;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (CGSize)intrinsicContentSize;
@property(readonly, retain) UIView *placeheldView;
- (void)dealloc;
- (id)initWithSize:(CGSize)arg1;
- (void)_setProgress:(double)arg1 boundedBy:(double)arg2;
- (void)_endSplitTransitionIfNeeded:(BOOL)arg1;
- (CGSize)rightContentViewSize;
- (CGSize)leftContentViewSize;
- (void)_beginSplitTransitionIfNeeded:(double)arg1 gapWidth:(double)arg2;
- (void)_setLeftOffset:(double)arg1 gapWidth:(double)arg2;
- (CGRect)_compatibleBounds;
- (void)didEndSplitTransition;
- (void)willBeginSplitTransition;
- (void)updateSplitSubviewContraintsWithLeftContentSize:(CGSize)arg1 rightContentSize:(CGSize)arg2;
- (void)layoutSplitSubviewsWithLeftContentSize:(CGSize)arg1 rightContentSize:(CGSize)arg2;
- (void)updateMergedSubviewConstraints;
- (void)layoutMergedSubviews;

@end
