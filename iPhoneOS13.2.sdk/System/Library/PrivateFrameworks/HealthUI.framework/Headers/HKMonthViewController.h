//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKViewController.h>

#import <HealthUI/HKCalendarScrollViewControllerDelegate-Protocol.h>

@class HKCalendarScrollViewController, HKDateCache, NSDate, NSDateComponents, UILabel;
@protocol HKMonthViewControllerDelegate;

@interface HKMonthViewController : HKViewController <HKCalendarScrollViewControllerDelegate>
{
    NSDateComponents *_cachedDateComponents;
    BOOL _wantsShortTitleDate;
    id <HKMonthViewControllerDelegate> _delegate;
    NSDate *_currentDate;
    long long _titleAlignment;
    HKCalendarScrollViewController *_calendarScrollViewController;
    UILabel *_titleLabel;
    HKDateCache *_dateCache;
}

@property(readonly, nonatomic) HKDateCache *dateCache; // @synthesize dateCache=_dateCache;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) HKCalendarScrollViewController *calendarScrollViewController; // @synthesize calendarScrollViewController=_calendarScrollViewController;
@property(nonatomic) long long titleAlignment; // @synthesize titleAlignment=_titleAlignment;
@property(nonatomic) BOOL wantsShortTitleDate; // @synthesize wantsShortTitleDate=_wantsShortTitleDate;
@property(readonly, nonatomic) NSDate *currentDate; // @synthesize currentDate=_currentDate;
@property(nonatomic) __weak id <HKMonthViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_didTapBackButton;
- (id)_titleStringForDate:(id)arg1;
- (void)_updateCurrentMonthBarButtonItemWithDate:(id)arg1;
- (void)_updateBackButton;
- (void)calendarScrollViewController:(id)arg1 didUpdateCenteredMonth:(id)arg2;
- (void)calendarScrollViewController:(id)arg1 didSelectDate:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_setCurrentDate:(id)arg1;
- (void)setCurrentDate:(id)arg1 animateIfPossible:(BOOL)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)createTitleLabel;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)createCalendarScrollViewController;
- (id)initWithDateCache:(id)arg1 date:(id)arg2;

@end

