//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssertionServices/RBSServiceDelegate-Protocol.h>

@interface BKSWorkspace : NSObject <RBSServiceDelegate>
{
}

+ (id)sharedInstance;
- (void)service:(id)arg1 didLoseInheritances:(id)arg2;
- (void)service:(id)arg1 didReceiveInheritances:(id)arg2;
- (id)init;

@end

