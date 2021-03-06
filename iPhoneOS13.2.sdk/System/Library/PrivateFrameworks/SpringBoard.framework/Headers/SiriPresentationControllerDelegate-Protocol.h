//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SiriDismissalOptions, SiriPresentationOptions, SiriPunchoutRequest;
@protocol SiriPresentation;

@protocol SiriPresentationControllerDelegate <NSObject>
- (void)siriPresentation:(id <SiriPresentation>)arg1 requestsPunchout:(SiriPunchoutRequest *)arg2 withHandler:(void (^)(BOOL, NSError *))arg3;
- (void)siriPresentation:(id <SiriPresentation>)arg1 isEnabledDidChange:(BOOL)arg2;
- (void)siriPresentation:(id <SiriPresentation>)arg1 requestsDismissalWithOptions:(SiriDismissalOptions *)arg2 withHandler:(void (^)(BOOL, NSError *))arg3;
- (void)siriPresentation:(id <SiriPresentation>)arg1 requestsPresentationWithOptions:(SiriPresentationOptions *)arg2 withHandler:(void (^)(BOOL, NSError *))arg3;
@end

