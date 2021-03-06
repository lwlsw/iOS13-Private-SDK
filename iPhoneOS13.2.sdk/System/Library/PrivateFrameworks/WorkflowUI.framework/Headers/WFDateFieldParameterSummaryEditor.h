//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/WFTextInputParameterSummaryEditor.h>

#import <WorkflowUI/WFParameterEventObserver-Protocol.h>

@class NSDateFormatter, WFTextEditingHintView;

@interface WFDateFieldParameterSummaryEditor : WFTextInputParameterSummaryEditor <WFParameterEventObserver>
{
    WFTextEditingHintView *_hintView;
    NSDateFormatter *_hintDateFormatter;
}

@property(retain, nonatomic) NSDateFormatter *hintDateFormatter; // @synthesize hintDateFormatter=_hintDateFormatter;
@property(nonatomic) __weak WFTextEditingHintView *hintView; // @synthesize hintView=_hintView;
// - (void).cxx_destruct;
- (void)parameterAttributesDidChange:(id)arg1;
- (id)hintTextForVariableString:(id)arg1;
- (void)updateHintView;
- (void)textEntryDidFinish;
- (void)textEntryTextDidChange:(id)arg1;
- (void)textEntryWillBegin:(id)arg1 allowMultipleLines:(BOOL )arg2;

@end

