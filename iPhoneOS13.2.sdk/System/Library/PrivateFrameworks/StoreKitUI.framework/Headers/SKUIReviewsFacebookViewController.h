//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SKUIClientContext, SKUIFacebookLikeStatus, SKUIReviewsFacebookView;
@protocol SKUIReviewsFacebookViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKUIReviewsFacebookViewController : UIViewController
{
    SKUIClientContext *_clientContext;
    id <SKUIReviewsFacebookViewControllerDelegate> _delegate;
    SKUIFacebookLikeStatus *_facebookLikeStatus;
    SKUIReviewsFacebookView *_facebookView;
}

@property(copy, nonatomic) SKUIFacebookLikeStatus *facebookLikeStatus; // @synthesize facebookLikeStatus=_facebookLikeStatus;
@property(nonatomic) __weak id <SKUIReviewsFacebookViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
// - (void).cxx_destruct;
- (void)_reloadFacebookView;
- (void)_changeStatusToUserLiked:(BOOL)arg1;
- (void)_toggleLike:(id)arg1;
- (void)loadView;
- (void)dealloc;

@end

