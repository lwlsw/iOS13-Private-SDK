//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, WFChooseFromListIntent;

@protocol WFChooseFromListIntentHandling <NSObject>
- (void)provideChosenItemsOptionsForChooseFromList:(WFChooseFromListIntent *)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (void)resolveChosenItemsForChooseFromList:(WFChooseFromListIntent *)arg1 withCompletion:(void (^)(NSArray *))arg2;
- (void)resolvePromptForChooseFromList:(WFChooseFromListIntent *)arg1 withCompletion:(void (^)(INStringResolutionResult *))arg2;
- (void)handleChooseFromList:(WFChooseFromListIntent *)arg1 completion:(void (^)(WFChooseFromListIntentResponse *))arg2;

@optional
- (NSArray *)defaultChosenItemsForChooseFromList:(WFChooseFromListIntent *)arg1;
- (void)confirmChooseFromList:(WFChooseFromListIntent *)arg1 completion:(void (^)(WFChooseFromListIntentResponse *))arg2;
@end

