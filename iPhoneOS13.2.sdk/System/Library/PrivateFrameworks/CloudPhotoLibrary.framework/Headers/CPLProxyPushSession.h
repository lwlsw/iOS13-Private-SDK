//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLProxySession.h>

#import <CloudPhotoLibrary/CPLPushChangeSessionImplementation-Protocol.h>

@class NSString;

@interface CPLProxyPushSession : CPLProxySession <CPLPushChangeSessionImplementation>
{
}

+ (void)beginSessionForProxy:(id)arg1 knownVersion:(id)arg2 context:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)commitChangeBatch:(id)arg1 withCompletionHandler:(id /* block */)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
