//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoFoundation/PFMulticasterDistributionList-Protocol.h>

@class _PFMulticasterReceiverList;

@interface _PFMulticasterMessageReceivers : NSObject <PFMulticasterDistributionList>
{
    _PFMulticasterReceiverList *_strongReceivers;
    _PFMulticasterReceiverList *_weakReceivers;
}

// - (void).cxx_destruct;
- (void)enumerateReceiversWithBlock:(CDUnknownBlockType)arg1;
- (NSUInteger)count;
- (id)initWithStrongReceivers:(id)arg1 weakReceivers:(id)arg2;

@end

