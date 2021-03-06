//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, PKActivationMethodTableViewCell, PKPaymentVerificationController;

@interface PKPaymentSetupVerificationMethodTableController : NSObject <UITableViewDelegate, UITableViewDataSource>
{
    PKActivationMethodTableViewCell *_sizingCell;
    PKPaymentVerificationController *_verificationController;
    NSArray *_verificationChannels;
    NSUInteger _selectedIndex;
}

@property(nonatomic) NSUInteger selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSArray *verificationChannels; // @synthesize verificationChannels=_verificationChannels;
@property(readonly, nonatomic) PKPaymentVerificationController *verificationController; // @synthesize verificationController=_verificationController;
// - (void).cxx_destruct;
- (id)newVerificationRequest;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)_detailTextLabelForChannel:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (id)initWithVerificationController:(id)arg1;

@end

