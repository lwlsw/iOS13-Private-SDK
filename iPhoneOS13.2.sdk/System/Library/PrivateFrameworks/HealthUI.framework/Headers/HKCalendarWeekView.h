//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HKCalendarDayCell, HKDateCache, NSArray, NSDate, NSMutableArray;
@protocol HKCalendarMonthTitleFormatting, HKCalendarWeekViewDelegate;

@interface HKCalendarWeekView : UIView
{
    NSMutableArray *_dayCells;
    HKDateCache *_dateCache;
    UIView<HKCalendarMonthTitleFormatting> *_monthTitleView;
    double _dateTopMargin;
    double _dateBottomMargin;
    double _leadingMargin;
    double _monthTitleTopMargin;
    double _monthTitleBottomMargin;
    double _dateDiameter;
    double _additionalSpacingPerRow;
    NSDate *_monthWeekStart;
    id <HKCalendarWeekViewDelegate> _delegate;
    long long _firstDayOfMonthCellIndex;
    long long _pressedDayOfWeek;
    HKCalendarDayCell *_pressedDayCell;
}

@property(retain, nonatomic) HKCalendarDayCell *pressedDayCell; // @synthesize pressedDayCell=_pressedDayCell;
@property(nonatomic) long long pressedDayOfWeek; // @synthesize pressedDayOfWeek=_pressedDayOfWeek;
@property(nonatomic) long long firstDayOfMonthCellIndex; // @synthesize firstDayOfMonthCellIndex=_firstDayOfMonthCellIndex;
@property(readonly, copy, nonatomic) NSArray *dayCells; // @synthesize dayCells=_dayCells;
@property(nonatomic) __weak id <HKCalendarWeekViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSDate *monthWeekStart; // @synthesize monthWeekStart=_monthWeekStart;
@property(readonly, nonatomic) HKDateCache *dateCache; // @synthesize dateCache=_dateCache;
@property(nonatomic) double additionalSpacingPerRow; // @synthesize additionalSpacingPerRow=_additionalSpacingPerRow;
@property(nonatomic) double dateDiameter; // @synthesize dateDiameter=_dateDiameter;
@property(nonatomic) double monthTitleBottomMargin; // @synthesize monthTitleBottomMargin=_monthTitleBottomMargin;
@property(nonatomic) double monthTitleTopMargin; // @synthesize monthTitleTopMargin=_monthTitleTopMargin;
@property(nonatomic) double leadingMargin; // @synthesize leadingMargin=_leadingMargin;
@property(nonatomic) double dateBottomMargin; // @synthesize dateBottomMargin=_dateBottomMargin;
@property(nonatomic) double dateTopMargin; // @synthesize dateTopMargin=_dateTopMargin;
@property(retain, nonatomic) UIView<HKCalendarMonthTitleFormatting> *monthTitleView; // @synthesize monthTitleView=_monthTitleView;
// - (void).cxx_destruct;
- (BOOL)supportsRTL;
- (Class)monthTitleClass;
- (Class)cellClass;
- (void)pressedOnCalendarDay:(long long)arg1 cell:(id)arg2 down:(BOOL)arg3;
- (void)selectedCalendarDay:(id)arg1;
- (id)_getDayCellWithTouchLocation:(CGPoint)arg1;
- (id)_getDayCellWithTouches:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)nextWeekStartDate;
- (id)previousWeekStartDate;
- (id)currentWeekStartDate;
- (CGRect)frameForDayCell:(id)arg1;
- (BOOL)containsDate:(id)arg1;
- (BOOL)containsMonthTitle;
- (double)preferredHeight;
- (void)reloadCells;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)description;
- (id)initWithDateCache:(id)arg1;

@end

