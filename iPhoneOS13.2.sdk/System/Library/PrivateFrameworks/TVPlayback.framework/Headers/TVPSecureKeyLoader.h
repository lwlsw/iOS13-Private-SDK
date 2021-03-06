//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TVPPlaybackReportingEventCollection;
@protocol TVPSecureKeyLoaderDelegate;

@interface TVPSecureKeyLoader : NSObject
{
    id <TVPSecureKeyLoaderDelegate> _delegate;
    TVPPlaybackReportingEventCollection *_eventCollection;
}

@property(retain, nonatomic) TVPPlaybackReportingEventCollection *eventCollection; // @synthesize eventCollection=_eventCollection;
@property(nonatomic) __weak id <TVPSecureKeyLoaderDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)sendStopRequest;
- (void)startLoadingKeyResponseDataForRequest:(id)arg1;
- (void)startLoadingContentIdentifierDataForRequest:(id)arg1;
- (void)startLoadingCertificateDataForRequest:(id)arg1;

@end

