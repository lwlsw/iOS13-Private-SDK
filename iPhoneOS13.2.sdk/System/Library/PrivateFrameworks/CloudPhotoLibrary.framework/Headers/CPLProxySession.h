//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLPlatformObject.h>

#import <CloudPhotoLibrary/CPLChangeSessionImplementation-Protocol.h>

@interface CPLProxySession : CPLPlatformObject <CPLChangeSessionImplementation>
{
}

+ (void)beginSessionForProxy:(id)arg1 knownVersion:(id)arg2 context:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)dispatchBlockWhenLibraryIsOpen:(CDUnknownBlockType)arg1;
- (void)tearDownWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)finalizeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginSessionWithKnownLibraryVersion:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)proxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)proxyLibraryManager;

@end

