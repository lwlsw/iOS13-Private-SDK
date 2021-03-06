//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAccessResource.h>

@class NSString;

@interface WFTumblrAccessResource : WFAccessResource
{
    NSString *_OAuthToken;
    NSString *_OAuthTokenSecret;
}

+ (void)setTumblrOAuthTokenSecret:(id)arg1;
+ (id)tumblrOAuthTokenSecret;
+ (void)setTumblrOAuthToken:(id)arg1;
+ (id)tumblrOAuthToken;
@property(copy, nonatomic) NSString *OAuthTokenSecret; // @synthesize OAuthTokenSecret=_OAuthTokenSecret;
@property(copy, nonatomic) NSString *OAuthToken; // @synthesize OAuthToken=_OAuthToken;
// - (void).cxx_destruct;
- (void)logOut;
- (BOOL)canLogOut;
- (id)username;
- (id)resourceName;
- (NSUInteger)globalLevelStatus;
- (id)protectedResourceDescription;
- (id)associatedAppIdentifier;

@end

