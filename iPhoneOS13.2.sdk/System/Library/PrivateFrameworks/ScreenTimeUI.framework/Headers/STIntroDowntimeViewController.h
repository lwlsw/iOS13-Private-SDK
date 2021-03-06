//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeUI/STTableWelcomeController.h>

@class STIntroDowntimeTableViewController, STIntroductionModel;

__attribute__((visibility("hidden")))
@interface STIntroDowntimeViewController : STTableWelcomeController
{
    STIntroductionModel *_model;
    id /* CDUnknownBlockType */ _continueHandler;
}

@property(readonly, copy) id /* CDUnknownBlockType */ continueHandler; // @synthesize continueHandler=_continueHandler;
@property(readonly) STIntroductionModel *model; // @synthesize model=_model;
// - (void).cxx_destruct;
- (void)_notNow:(id)arg1;
- (void)_setDowntime:(id)arg1;
- (void)loadView;
@property(retain, nonatomic) STIntroDowntimeTableViewController *tableViewController;
- (id)initWithIntroductionModel:(id)arg1 continueHandler:(CDUnknownBlockType)arg2;

@end

