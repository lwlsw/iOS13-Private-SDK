//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class PXSharedAlbumInvitationView, UIViewController;

@protocol PXSharedAlbumInvitationViewDelegate <NSObject>

@optional
- (void)sharedAlbumInvitationView:(PXSharedAlbumInvitationView *)arg1 presentViewController:(UIViewController *)arg2;
- (void)sharedAlbumInvitationViewDidReportAsJunk:(PXSharedAlbumInvitationView *)arg1;
- (void)sharedAlbumInvitationView:(PXSharedAlbumInvitationView *)arg1 didAccept:(BOOL)arg2;
@end

