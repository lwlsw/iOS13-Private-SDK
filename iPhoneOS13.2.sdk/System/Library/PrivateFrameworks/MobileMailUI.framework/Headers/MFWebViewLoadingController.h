//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileMailUI/WKNavigationDelegate-Protocol.h>
#import <MobileMailUI/WKNavigationDelegatePrivate-Protocol.h>

@class EMContentRepresentation, MFWebViewDictionary, NSError, NSString, NSURL, WKWebView, _WKRemoteObjectInterface;
@protocol MFMailWebProcessDelegate;

@interface MFWebViewLoadingController : NSObject <WKNavigationDelegate, WKNavigationDelegatePrivate>
{
    _Bool _webProcessPluginNeedsUpdate;
    WKWebView *_webView;
    MFWebViewDictionary *_webViewConstants;
    id <MFMailWebProcessDelegate> _webProcessDelegate;
    _WKRemoteObjectInterface *_remoteObjectInterface;
    EMContentRepresentation *_contentRepresentation;
    NSURL *_loadingURL;
    NSError *_error;
}

@property(nonatomic) _Bool webProcessPluginNeedsUpdate; // @synthesize webProcessPluginNeedsUpdate=_webProcessPluginNeedsUpdate;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSURL *loadingURL; // @synthesize loadingURL=_loadingURL;
@property(retain, nonatomic) EMContentRepresentation *contentRepresentation; // @synthesize contentRepresentation=_contentRepresentation;
@property(retain, nonatomic) _WKRemoteObjectInterface *remoteObjectInterface; // @synthesize remoteObjectInterface=_remoteObjectInterface;
@property(nonatomic) __weak id <MFMailWebProcessDelegate> webProcessDelegate; // @synthesize webProcessDelegate=_webProcessDelegate;
@property(readonly, nonatomic) MFWebViewDictionary *webViewConstants; // @synthesize webViewConstants=_webViewConstants;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
- (void)webProcessBrowserContextControllerDidBecomeAvailable;
- (void)_reconveneWebProcessBundle;
- (void)requestWebViewLoadWithContentRepresentation:(id)arg1;
- (void)requestWebViewLoadWithError:(id)arg1;
- (void)requestWebViewLoadWithoutShowingMessageWithRepresentation:(id)arg1;
- (void)requestWebViewLoadWithoutShowingMessageWithContext:(id)arg1;
- (void)requestWebViewLoadWithContext:(id)arg1;
- (void)_doIssueLoadRequest;
- (void)stopLoading;
- (void)reload;
- (void)slapWebView;
- (void)_registerWebProcessDelegate:(id)arg1;
- (void)_unregisterWebProcessDelegate:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
