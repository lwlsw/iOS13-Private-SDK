//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/VCMomentsMessengerDelegate-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, VCMomentsMessengerDelegate;

__attribute__((visibility("hidden")))
@interface VCMomentsManager : NSObject <VCMomentsMessengerDelegate>
{
    NSMutableDictionary *_streamTokenList;
    id _delegate;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
}

+ (id)sharedInstance;
- (id)newRequestWithArguments:(id)arg1 state:(unsigned char)arg2;
- (void)streamTokenDidCleanupAllRequests:(long long)arg1;
- (void)streamToken:(long long)arg1 didFinishRequest:(id)arg2 didSucceed:(_Bool)arg3;
- (void)streamToken:(long long)arg1 didEndProcessingRequest:(id)arg2 stillImageURL:(id)arg3 movieURL:(id)arg4 error:(id)arg5;
- (void)streamToken:(long long)arg1 didStartProcessingRequest:(id)arg2 error:(id)arg3;
- (void)notifyClientsWithStreamToken:(long long)arg1 service:(char *)arg2 arguments:(id)arg3;
- (void)registerBlocksForService;
- (id)messengerFromClientContext:(id)arg1;
- (void)unregisterMomentsMessengerWithStreamToken:(long long)arg1;
- (void)registerMomentsMessenger:(id)arg1 withStreamToken:(long long)arg2;
@property(nonatomic) id <VCMomentsMessengerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
