//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface NotificationSender : NSObject
{
    NSString *_name;
    NSDictionary *_userInfo;
}

@property(retain) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (void)dealloc;
- (id)initWithName:(id)arg1;

@end

