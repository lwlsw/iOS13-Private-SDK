//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebKitLegacy/DOMHTMLInputElement.h>

@interface DOMHTMLInputElement (UIWebFormPeripheral)
- (id)createPeripheral;
- (id)_textFormElement;
- (void)_accessoryClear;
- (_Bool)_supportsAccessoryClear;
- (_Bool)_supportsAutoFill;
- (_Bool)_requiresInputView;
- (_Bool)_requiresAccessoryView;
- (void)_stopAssistingDocumentView:(id)arg1;
- (void)_startAssistingDocumentView:(id)arg1;
- (_Bool)nodeCanBecomeFirstResponder;
- (_Bool)isLikelyToBeginPageLoad;
- (_Bool)isAssistedDateType;
- (_Bool)isEditing;
- (void)setSelectionWithPoint:(struct CGPoint)arg1;
- (long long)keyboardType;
- (_Bool)isTextControl;
- (_Bool)isSecure;
- (id)text;
- (id)textInputTraits;
@end
