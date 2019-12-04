//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <SensorKitUI/SRAuthorizationCellDelegate-Protocol.h>
#import <SensorKitUI/UITableViewDelegatePrivate-Protocol.h>

@class NSArray, NSBundle, NSMutableDictionary, NSString;
@protocol SRAuthorizationTableDelegate;

@interface SRAuthorizationCategoryGroupViewController : UITableViewController <SRAuthorizationCellDelegate, UITableViewDelegatePrivate>
{
    NSBundle *_appBundle;
    NSMutableDictionary *_authState;
    id <SRAuthorizationTableDelegate> _delegate;
    NSArray *_commonUIs;
    NSArray *_allKeys;
}

@property(retain, nonatomic) NSArray *allKeys; // @synthesize allKeys=_allKeys;
@property(retain, nonatomic) NSArray *commonUIs; // @synthesize commonUIs=_commonUIs;
@property(nonatomic) __weak id <SRAuthorizationTableDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableDictionary *authState; // @synthesize authState=_authState;
@property(retain, nonatomic) NSBundle *appBundle; // @synthesize appBundle=_appBundle;
- (void)dismissViewController;
- (void)openPrivacy;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)confirmAuthChangeForService:(id)arg1 value:(_Bool)arg2;
- (void)setValue:(_Bool)arg1 indexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)dealloc;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
