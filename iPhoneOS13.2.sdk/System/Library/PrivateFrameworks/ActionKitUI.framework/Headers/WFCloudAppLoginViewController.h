//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKitUI/WFPasswordAccountLoginViewController.h>

__attribute__((visibility("hidden")))
@interface WFCloudAppLoginViewController : WFPasswordAccountLoginViewController
{
}

- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)loginWithUsername:(id)arg1 password:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)usernameIsEmail;
- (id)loginURL;
- (void)viewDidLoad;
- (id)initWithAccountClass:(Class)arg1;

@end

