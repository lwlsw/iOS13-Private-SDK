//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsFeedLayout/NFLSubBatchLayout.h>

@class NFLSingleComponentLayout;

@interface NFLSixSixThreeThreeSubBatchLayout : NFLSubBatchLayout
{
    BOOL _wideCellsOnLeft;
    NFLSingleComponentLayout *_topSixComponent;
    NFLSingleComponentLayout *_bottomSixComponent;
    NFLSingleComponentLayout *_rightThreeComponent;
    NFLSingleComponentLayout *_leftThreeComponent;
}

@property(retain, nonatomic) NFLSingleComponentLayout *leftThreeComponent; // @synthesize leftThreeComponent=_leftThreeComponent;
@property(retain, nonatomic) NFLSingleComponentLayout *rightThreeComponent; // @synthesize rightThreeComponent=_rightThreeComponent;
@property(retain, nonatomic) NFLSingleComponentLayout *bottomSixComponent; // @synthesize bottomSixComponent=_bottomSixComponent;
@property(retain, nonatomic) NFLSingleComponentLayout *topSixComponent; // @synthesize topSixComponent=_topSixComponent;
@property(nonatomic) BOOL wideCellsOnLeft; // @synthesize wideCellsOnLeft=_wideCellsOnLeft;
// - (void).cxx_destruct;
- (id)singleComponentLayouts;
- (id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4;
- (NSUInteger)rowSpan;
- (id)tileInfosUsed;
- (double)rank;
- (BOOL)isValid;

@end

