//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PXSnapBackSettings : PXSettings
{
    BOOL _allowSnapBackHistoryMenu;
}

+ (id)settingsControllerModule;
+ (id)sharedInstance;
@property(nonatomic) BOOL allowSnapBackHistoryMenu; // @synthesize allowSnapBackHistoryMenu=_allowSnapBackHistoryMenu;
- (void)setDefaultValues;
- (id)parentSettings;

@end

