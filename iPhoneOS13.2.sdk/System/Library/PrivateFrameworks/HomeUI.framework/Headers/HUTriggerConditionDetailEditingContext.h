//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HFItem, HUTriggerTimeConditionDetailEditorViewController, UINavigationController;

@interface HUTriggerConditionDetailEditingContext : NSObject
{
    HUTriggerTimeConditionDetailEditorViewController *_viewController;
    UINavigationController *_navigationController;
    HFItem *_optionItem;
}

@property(retain, nonatomic) HFItem *optionItem; // @synthesize optionItem=_optionItem;
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) HUTriggerTimeConditionDetailEditorViewController *viewController; // @synthesize viewController=_viewController;
// - (void).cxx_destruct;

@end

