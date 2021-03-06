//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <GameCenterUI/GKExtensionHostProtocol-Protocol.h>
#import <GameCenterUI/GKExtensionProtocol-Protocol.h>

@class GKGame, NSExtension;

@interface GKExtensionRemoteViewController : _UIRemoteViewController <GKExtensionProtocol, GKExtensionHostProtocol>
{
    GKGame *_game;
    NSExtension *_extension;
    id _requestIdentifier;
}

+ (BOOL)dismissAutomaticallyAfterExtensionCompletion;
+ (BOOL)shouldPropagateAppearanceCustomizations;
+ (id)initialItemsForExtension;
+ (void)viewControllerForExtension:(id)arg1 inputItems:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)setupCallbackBlocksForExtension:(id)arg1 withParentViewController:(id)arg2;
@property(copy, nonatomic) id requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
- (void)messageFromExtension:(id)arg1;
- (void)hostApp:(id)arg1 grantingAccessExtensionSandbox:(id)arg2 replyWithEndpoint:(CDUnknownBlockType)arg3;
- (void)setInitialState:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)messageFromClient:(id)arg1;
- (id)extensionObjectProxy;
- (void)extensionIsFinishing;
- (void)extensionIsCanceling;
- (void)sendMessageToExtension:(id)arg1;
- (void)cancelExtension;
- (long long)_desiredStatusBarStyle;
- (NSUInteger)supportedInterfaceOrientations;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

@end

