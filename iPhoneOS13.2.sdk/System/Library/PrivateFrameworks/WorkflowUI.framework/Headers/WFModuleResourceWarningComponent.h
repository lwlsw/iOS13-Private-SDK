//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ComponentKit/CKCompositeComponent.h>

@class NSError;
@protocol WFComponentNavigationContext;

@interface WFModuleResourceWarningComponent : CKCompositeComponent
{
    NSError *_resourceError;
    id <WFComponentNavigationContext> _navigationContext;
}

+ (id)newWithResourceError:(id)arg1 navigationContext:(id)arg2 useImportStyle:(BOOL)arg3 importButtonGradient:(id)arg4;
// - (void).cxx_destruct;
- (void)recoverFromWarning:(id)arg1 buttonIndex:(NSUInteger)arg2;

@end

