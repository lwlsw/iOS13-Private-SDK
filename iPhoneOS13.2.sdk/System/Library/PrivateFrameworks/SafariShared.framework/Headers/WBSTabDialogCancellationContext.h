//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface WBSTabDialogCancellationContext : NSObject
{
    NSString *_reason;
    NSDictionary *_userInfo;
}

+ (id)tabClosedContext;
+ (id)committedNavigationContextWithURL:(id)arg1;
+ (id)provisionalNavigationContext;
+ (id)cancellationContextWithReason:(id)arg1 userInfo:(id)arg2;
@property(readonly, copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
// - (void).cxx_destruct;
- (id)initWithReason:(id)arg1 userInfo:(id)arg2;
- (id)init;

@end

