//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIFocusSystem, UIFocusUpdateContext;

__attribute__((visibility("hidden")))
@interface _UIFocusUpdateReport : NSObject
{
    UIFocusSystem *_focusSystem;
    UIFocusUpdateContext *_context;
}

@property(retain, nonatomic) UIFocusUpdateContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) __weak UIFocusSystem *focusSystem; // @synthesize focusSystem=_focusSystem;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL shouldLog;
- (id)initWithFocusSystem:(id)arg1;
- (id)init;

@end

