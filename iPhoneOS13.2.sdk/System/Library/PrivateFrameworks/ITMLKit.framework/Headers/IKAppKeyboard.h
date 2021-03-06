//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/IKAppKeyboardBridge-Protocol.h>
#import <ITMLKit/IKDOMFeature-Protocol.h>

@class IKAppContext, IKJSKeyboard, NSString;
@protocol IKAppKeyboardDelegate;

@interface IKAppKeyboard : NSObject <IKAppKeyboardBridge, IKDOMFeature>
{
    NSString *_jsText;
    NSString *_jsSource;
    NSString *_featureName;
    IKAppContext *_appContext;
    id <IKAppKeyboardDelegate> _delegate;
    NSString *_text;
    IKJSKeyboard *_jsKeyboard;
    NSString *_source;
}

+ (id)makeFeatureJSObjectForFeature:(id)arg1;
@property(copy, nonatomic, getter=_source, setter=_setSource:) NSString *source; // @synthesize source=_source;
@property(nonatomic, setter=setJSKeyboard:) __weak IKJSKeyboard *jsKeyboard; // @synthesize jsKeyboard=_jsKeyboard;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) __weak id <IKAppKeyboardDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak IKAppContext *appContext; // @synthesize appContext=_appContext;
@property(readonly, copy, nonatomic) NSString *featureName; // @synthesize featureName=_featureName;
@property(copy, nonatomic, setter=setJSSource:) NSString *jsSource; // @synthesize jsSource=_jsSource;
@property(copy, nonatomic, setter=setJSText:) NSString *jsText; // @synthesize jsText=_jsText;
// - (void).cxx_destruct;
- (id)initWithDOMNode:(id)arg1 featureName:(id)arg2;

@end

