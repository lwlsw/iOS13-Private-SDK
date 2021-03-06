//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBUIBannerSource-Protocol.h>

@class NSMutableArray;
@protocol SBUIBannerTarget;

@interface SBTestBannerSource : NSObject <SBUIBannerSource>
{
    id <SBUIBannerTarget> _target;
    NSMutableArray *_enqueuedItems;
    long long _count;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)bannerViewDidDismiss:(id)arg1 forReason:(int)arg2;
- (void)bannerViewWillDismiss:(id)arg1 forReason:(int)arg2;
- (void)bannerViewDidAppear:(id)arg1;
- (void)bannerViewWillAppear:(id)arg1;
- (id)newBannerViewForContext:(id)arg1;
- (id)dequeueNextBannerItemForTarget:(id)arg1;
- (id)peekNextBannerItemForTarget:(id)arg1;
- (void)dismissBanner;
- (void)enqueueBanner;
- (id)init;

@end

