//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface CAMReviewButton : UIButton
{
    NSUInteger __numberOfCaptures;
}

+ (id)_sharedNumberOfCapturesFormatter;
@property(nonatomic, setter=_setNumberOfCaptures:) NSUInteger _numberOfCaptures; // @synthesize _numberOfCaptures=__numberOfCaptures;
- (id)_localizedTitleForNumberOfCaptures;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)_commonCAMReviewButtonInitialization;

@end

