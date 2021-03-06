//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext, NSArray;

@interface ICMusicSubscriptionRecommendationsRequest : ICRequestOperation
{
    ICStoreRequestContext *_requestContext;
    long long _seedItemID;
    BOOL _isLibraryID;
    long long _maxResultCount;
    NSArray *_resultsList;
}

// - (void).cxx_destruct;
- (void)execute;
- (void)performRequestWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)initWithRequestContext:(id)arg1 seedItemID:(long long)arg2 isLibraryID:(BOOL)arg3 maxResultCount:(long long)arg4;

@end

