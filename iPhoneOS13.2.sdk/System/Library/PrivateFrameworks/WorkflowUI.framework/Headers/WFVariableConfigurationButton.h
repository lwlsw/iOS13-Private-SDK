//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <WorkflowUI/WFVariableConfigurationResponderDelegate-Protocol.h>
#import <WorkflowUI/WFVariableDelegate-Protocol.h>

@class WFVariable, WFVariableConfigurationResponder;

@interface WFVariableConfigurationButton : UIButton <WFVariableConfigurationResponderDelegate, WFVariableDelegate>
{
    BOOL _showsVariableAccessoryActions;
    WFVariable *_variable;
    id /* CDUnknownBlockType */ _revealBlock;
    NSUInteger _resultType;
    WFVariableConfigurationResponder *_variableResponder;
}

+ (CGSize)sizeForVariable:(id)arg1;
+ (id)titleFont;
@property(retain, nonatomic) WFVariableConfigurationResponder *variableResponder; // @synthesize variableResponder=_variableResponder;
@property(nonatomic) NSUInteger resultType; // @synthesize resultType=_resultType;
@property(nonatomic) BOOL showsVariableAccessoryActions; // @synthesize showsVariableAccessoryActions=_showsVariableAccessoryActions;
@property(copy, nonatomic) id /* CDUnknownBlockType */ revealBlock; // @synthesize revealBlock=_revealBlock;
@property(retain, nonatomic) WFVariable *variable; // @synthesize variable=_variable;
// - (void).cxx_destruct;
- (void)variableDidChange:(id)arg1;
- (void)variableResponder:(id)arg1 presentPromptWithTitle:(id)arg2 message:(id)arg3 fieldConfigurationHandler:(CDUnknownBlockType)arg4 commitHandler:(CDUnknownBlockType)arg5;
- (void)variableResponderDidRevealAction:(id)arg1;
- (void)variableResponder:(id)arg1 didUpdateVariable:(id)arg2;
- (void)variableResponderDidDelete:(id)arg1 withReplacementText:(id)arg2;
- (void)variableResponderDidEndEditing:(id)arg1;
- (void)variableResponderDidBeginEditing:(id)arg1;
- (BOOL)variableResponderHasText:(id)arg1;
- (void)hideVariableConfiguration;
- (void)showVariableConfiguration;
- (void)tintColorDidChange;
- (void)updateVariableImage;
- (void)buttonTapped;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;

@end

