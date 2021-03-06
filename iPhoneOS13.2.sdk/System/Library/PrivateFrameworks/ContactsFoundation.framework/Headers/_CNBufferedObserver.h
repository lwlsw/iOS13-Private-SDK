//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNObserver-Protocol.h>

@class CNSuspendableSchedulerDecorator;
@protocol CNObserver;

@interface _CNBufferedObserver : NSObject <CNObserver>
{
    CNSuspendableSchedulerDecorator *_observerScheduler;
    id <CNObserver> _observer;
}

+ (id)bufferObserver:(id)arg1 schedulerProvider:(id)arg2;
@property(readonly, nonatomic) CNSuspendableSchedulerDecorator *observerScheduler; // @synthesize observerScheduler=_observerScheduler;
@property(readonly, nonatomic) id <CNObserver> observer; // @synthesize observer=_observer;
// - (void).cxx_destruct;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidComplete;
- (void)observerDidReceiveResult:(id)arg1;
- (void)resume;
- (id)initWithObserver:(id)arg1 scheduler:(id)arg2;

@end

