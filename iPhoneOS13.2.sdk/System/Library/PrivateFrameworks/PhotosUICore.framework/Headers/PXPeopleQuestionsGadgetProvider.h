//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGadgetProvider.h>

@class NSString, PXForYouPeopleQuestionsDataSource;

@interface PXPeopleQuestionsGadgetProvider : PXGadgetProvider
{
    PXForYouPeopleQuestionsDataSource *_dataSource;
}

+ (id)_gadgetForQuestion:(id)arg1;
@property(retain, nonatomic) PXForYouPeopleQuestionsDataSource *dataSource; // @synthesize dataSource=_dataSource;
// - (void).cxx_destruct;
- (NSUInteger)estimatedNumberOfGadgets;
- (void)generateGadgets;
@property(readonly, copy, nonatomic) NSString *localizedTitle;
- (id)init;

@end

