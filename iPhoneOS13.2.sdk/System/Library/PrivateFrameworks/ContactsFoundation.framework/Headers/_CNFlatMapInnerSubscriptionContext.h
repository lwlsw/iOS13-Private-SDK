//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNSuspendableSchedulerDecorator;
@protocol CNCancelable;

@interface _CNFlatMapInnerSubscriptionContext : NSObject
{
    CNSuspendableSchedulerDecorator *_decorator;
    id <CNCancelable> _token;
}

@property(readonly, nonatomic) id <CNCancelable> token; // @synthesize token=_token;
@property(readonly, nonatomic) CNSuspendableSchedulerDecorator *decorator; // @synthesize decorator=_decorator;
// - (void).cxx_destruct;
- (id)initWithDecorator:(id)arg1 token:(id)arg2;

@end

