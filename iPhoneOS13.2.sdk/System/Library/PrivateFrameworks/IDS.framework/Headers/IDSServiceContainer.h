//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSServiceMonitor, NSMutableSet;

@interface IDSServiceContainer : NSObject
{
    IDSServiceMonitor *_monitor;
    NSMutableSet *_listeners;
}

@property(readonly, nonatomic) NSMutableSet *listeners; // @synthesize listeners=_listeners;
@property(retain, nonatomic) IDSServiceMonitor *monitor; // @synthesize monitor=_monitor;
// - (void).cxx_destruct;
- (BOOL)removeListenerID:(id)arg1;
- (BOOL)addListenerID:(id)arg1;
- (BOOL)hasListenerID:(id)arg1;
- (id)initWithService:(id)arg1;

@end

