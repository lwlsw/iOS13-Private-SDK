//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DocumentManagerUICore/DOCThumbnail-Protocol.h>

@class DOCThumbnailRequest, UIImage;

@interface DOCIconPromise : NSObject <DOCThumbnail>
{
    UIImage *_icon;
    DOCThumbnailRequest *_request;
}

// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isRepresentativeIcon;
@property(readonly, nonatomic, getter=isLoading) BOOL loading;
- (BOOL)registerGenerationCompletionHandler:(CDUnknownBlockType)arg1;
- (void)scheduleUpdateIfNeeded;
@property(readonly) BOOL hasFinishedTryingToFetchCorrectThumbnail;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
@property(readonly, nonatomic) UIImage *thumbnail;
- (id)initWithRequest:(id)arg1;

@end

