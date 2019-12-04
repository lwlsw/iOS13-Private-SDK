//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKDataMetadataSimpleSection.h>

#import <HealthUI/HKQuantitySeriesDataProviderDelegate-Protocol.h>

@class HKSample, NSString;
@protocol HKDataMetadataViewControllerDelegate;

@interface HKDataMetadataViewAllQuantitySeriesSection : HKDataMetadataSimpleSection <HKQuantitySeriesDataProviderDelegate>
{
    id /* block */ _reloadMetaDataVC;
    HKSample *_sample;
    id <HKDataMetadataViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <HKDataMetadataViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) HKSample *sample; // @synthesize sample=_sample;
@property(copy) id /* block */ reloadMetaDataVC; // @synthesize reloadMetaDataVC=_reloadMetaDataVC;
- (void)reloadSampleData;
- (void)sampleDidChange:(id)arg1;
- (void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(_Bool)arg3;
- (id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2;
- (unsigned long long)numberOfRowsInSection;
- (id)initWithSample:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
