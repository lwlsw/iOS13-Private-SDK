//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <GameCenterUI/GKExtensionHostProtocol-Protocol.h>

@class GKExtensionRemoteViewController, GKGame;

@interface GKExtensionHostContext : NSExtensionContext <GKExtensionHostProtocol>
{
    GKGame *_game;
    GKExtensionRemoteViewController *_remoteViewControllerWeak;
}

@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
- (void)messageFromExtension:(id)arg1;
@property(nonatomic) GKExtensionRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewControllerWeak;
- (void)dealloc;

@end

