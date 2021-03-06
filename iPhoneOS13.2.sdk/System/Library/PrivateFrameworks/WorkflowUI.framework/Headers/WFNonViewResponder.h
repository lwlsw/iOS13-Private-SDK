//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <WorkflowUI/WFInputViewMutable-Protocol.h>

@class UIView;
@protocol WFNonViewResponderDelegate;

@interface WFNonViewResponder : UIResponder <WFInputViewMutable>
{
    UIResponder *_nextResponder;
    UIView *_inputView;
    UIView *_inputAccessoryView;
    id <WFNonViewResponderDelegate> _delegate;
}

@property(nonatomic) __weak id <WFNonViewResponderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *inputAccessoryView; // @synthesize inputAccessoryView=_inputAccessoryView;
@property(retain, nonatomic) UIView *inputView; // @synthesize inputView=_inputView;
@property(nonatomic) __weak UIResponder *nextResponder; // @synthesize nextResponder=_nextResponder;
// - (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (BOOL)canBecomeFirstResponder;

@end

