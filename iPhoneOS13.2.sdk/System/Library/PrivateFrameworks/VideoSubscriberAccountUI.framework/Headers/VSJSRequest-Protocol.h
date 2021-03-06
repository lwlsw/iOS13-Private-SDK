//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccountUI/JSExport-Protocol.h>

@class NSArray, NSDictionary, NSString;

@protocol VSJSRequest <JSExport>
@property(readonly, copy, nonatomic) NSDictionary *requestorInfo;
@property(readonly, copy, nonatomic) NSArray *attributeNames;
@property(readonly, copy, nonatomic) NSString *requestorVerificationToken;
@property(readonly, copy, nonatomic) NSString *appleVerificationToken;
@property(readonly, copy, nonatomic) NSString *currentAuthentication;
@property(readonly, copy, nonatomic) NSString *requestBody;
@property(readonly, copy, nonatomic) NSString *requestType;
@end

