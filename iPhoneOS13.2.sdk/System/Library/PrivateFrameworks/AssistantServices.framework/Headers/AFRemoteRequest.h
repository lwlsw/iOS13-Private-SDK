//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AFRequestInfo, NSString;

@interface AFRemoteRequest : NSObject
{
    AFRequestInfo *_info;
    NSString *_peerIdentifier;
}

@property(copy, nonatomic) NSString *peerIdentifier; // @synthesize peerIdentifier=_peerIdentifier;
@property(readonly, nonatomic) AFRequestInfo *info; // @synthesize info=_info;
// - (void).cxx_destruct;
- (void)sendWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithInfo:(id)arg1;

@end

