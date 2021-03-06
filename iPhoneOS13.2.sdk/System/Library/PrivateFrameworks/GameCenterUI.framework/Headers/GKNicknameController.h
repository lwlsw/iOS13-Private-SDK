//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class GKReachability, NSArray, UIActivityIndicatorView, UITextField;
@protocol GKNicknameControllerDelegate;

@interface GKNicknameController : NSObject <UITextFieldDelegate>
{
    BOOL _nicknameChangeWasCommitted;
    BOOL _shouldShakeTextFieldOnError;
    BOOL _nicknameWasEdited;
    UITextField *_nickname;
    UIActivityIndicatorView *_activityIndicator;
    id <GKNicknameControllerDelegate> _delegate;
    GKReachability *_reachability;
    NSArray *_suggestedNicknames;
}

@property(retain, nonatomic) NSArray *suggestedNicknames; // @synthesize suggestedNicknames=_suggestedNicknames;
@property(retain, nonatomic) GKReachability *reachability; // @synthesize reachability=_reachability;
@property(nonatomic) BOOL nicknameWasEdited; // @synthesize nicknameWasEdited=_nicknameWasEdited;
@property __weak id <GKNicknameControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(nonatomic) BOOL shouldShakeTextFieldOnError; // @synthesize shouldShakeTextFieldOnError=_shouldShakeTextFieldOnError;
@property(nonatomic) BOOL nicknameChangeWasCommitted; // @synthesize nicknameChangeWasCommitted=_nicknameChangeWasCommitted;
@property(retain, nonatomic) UITextField *nickname; // @synthesize nickname=_nickname;
// - (void).cxx_destruct;
- (void)textFieldDidResignFirstResponder:(id)arg1;
- (void)textFieldDidBecomeFirstResponder:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)shakeNicknameTextFieldWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)nicknameTextChanged:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)reset;
- (void)didSelectSuggestion:(id)arg1;
- (void)displayNicknameSuggestions;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)startObservingKeyboardEvents;
- (void)stopObservingKeyboardEvents;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange *)arg2 replacementString:(id)arg3;
- (void)updateReturnKeyEnabledState;
- (id)init;

@end

