//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class UICloudSharingController;

__attribute__((visibility("hidden")))
@interface _UISharingControllerActivityItemSource : NSObject <UIActivityItemSource>
{
    UICloudSharingController *_viewController;
}

@property(retain, nonatomic) UICloudSharingController *viewController; // @synthesize viewController=_viewController;
// - (void).cxx_destruct;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;

@end

