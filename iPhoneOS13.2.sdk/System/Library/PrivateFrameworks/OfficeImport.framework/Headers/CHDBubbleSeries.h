//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/CHDSeries.h>

@class CHDData;

__attribute__((visibility("hidden")))
@interface CHDBubbleSeries : CHDSeries
{
    CHDData *mSizeData;
    BOOL mBubble3D;
    BOOL mInvertIfNegative;
    BOOL mShowBubbleSize;
}

// - (void).cxx_destruct;
- (void)setCategoryData:(id)arg1;
- (void)setShowBubbleSize:(BOOL)arg1;
- (BOOL)isShowBubbleSize;
- (void)setInvertIfNegative:(BOOL)arg1;
- (BOOL)isInvertIfNegative;
- (void)setBubble3D:(BOOL)arg1;
- (BOOL)isBubble3D;
- (void)setSizeData:(id)arg1;
- (id)sizeData;

@end

