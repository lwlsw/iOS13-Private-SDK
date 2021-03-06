//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsUIKit/NCNotificationManagementContentProvider.h>

#import <UserNotificationsUIKit/NCNotificationManagementSuggestionContentProviding-Protocol.h>

@class NSString;
@protocol NCNotificationManagementSuggestionDelegate;

@interface NCNotificationManagementSuggestionContentProvider : NCNotificationManagementContentProvider <NCNotificationManagementSuggestionContentProviding>
{
    BOOL _auxiliaryOptionsVisible;
    NSString *_optionsSummaryText;
    NSUInteger _numberOfOptionButtons;
    id <NCNotificationManagementSuggestionDelegate> _suggestionDelegate;
}

@property(nonatomic) __weak id <NCNotificationManagementSuggestionDelegate> suggestionDelegate; // @synthesize suggestionDelegate=_suggestionDelegate;
@property(nonatomic) BOOL auxiliaryOptionsVisible; // @synthesize auxiliaryOptionsVisible=_auxiliaryOptionsVisible;
@property(nonatomic) NSUInteger numberOfOptionButtons; // @synthesize numberOfOptionButtons=_numberOfOptionButtons;
@property(copy, nonatomic) NSString *optionsSummaryText; // @synthesize optionsSummaryText=_optionsSummaryText;
// - (void).cxx_destruct;
- (void)configureOptionButtons:(id)arg1;
- (id)initWithNotificationRequest:(id)arg1 bundleDisplayName:(id)arg2 managementDelegate:(id)arg3 suggestionDelegate:(id)arg4;

@end

