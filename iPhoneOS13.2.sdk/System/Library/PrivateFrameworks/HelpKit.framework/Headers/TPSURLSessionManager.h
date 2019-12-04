//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSMutableDictionary, NSString, NSURLSession;
@protocol OS_dispatch_queue, TPSURLSessionDelegate, TPSURLSessionManagerDelegate;

@interface TPSURLSessionManager : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate>
{
    struct TPSURLSessionDelegateResponds _defaultSessionDelegateResponds;
    NSObject<OS_dispatch_queue> *_sessionTaskQueue;
    _Bool _respondsToRequestResumed;
    _Bool _respondsToRequestCompleted;
    _Bool _respondsToDidReceiveChallenge;
    _Bool _coalesceRequests;
    id <TPSURLSessionManagerDelegate> _delegate;
    id <TPSURLSessionDelegate> _defaultSessionDelegate;
    NSMutableDictionary *_coalesceTaskURLMap;
    NSMutableDictionary *_uncoalesceTaskMap;
    NSURLSession *_URLSession;
}

+ (id)defaultManager;
@property(retain, nonatomic) NSURLSession *URLSession; // @synthesize URLSession=_URLSession;
@property(retain, nonatomic) NSMutableDictionary *uncoalesceTaskMap; // @synthesize uncoalesceTaskMap=_uncoalesceTaskMap;
@property(retain, nonatomic) NSMutableDictionary *coalesceTaskURLMap; // @synthesize coalesceTaskURLMap=_coalesceTaskURLMap;
@property(nonatomic) _Bool coalesceRequests; // @synthesize coalesceRequests=_coalesceRequests;
@property(nonatomic) _Bool respondsToDidReceiveChallenge; // @synthesize respondsToDidReceiveChallenge=_respondsToDidReceiveChallenge;
@property(nonatomic) _Bool respondsToRequestCompleted; // @synthesize respondsToRequestCompleted=_respondsToRequestCompleted;
@property(nonatomic) _Bool respondsToRequestResumed; // @synthesize respondsToRequestResumed=_respondsToRequestResumed;
@property(nonatomic) __weak id <TPSURLSessionDelegate> defaultSessionDelegate; // @synthesize defaultSessionDelegate=_defaultSessionDelegate;
@property(nonatomic) __weak id <TPSURLSessionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeDownloadTask:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)sessionTaskForTask:(id)arg1;
- (void)removeTaskFromMap:(id)arg1;
- (void)sessionTask:(id)arg1 didCompleteWithError:(id)arg2;
- (void)cancelSessionItem:(id)arg1;
- (void)resumeSessionItem:(id)arg1;
- (id)newURLSessionItemWithRequest:(id)arg1 identifier:(id)arg2 networkDelegate:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)newURLSessionItemWithRequest:(id)arg1 identifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)newURLSessionItemWithRequest:(id)arg1 identifier:(id)arg2 networkDelegate:(id)arg3;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
