//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUAnalyticsEvent-Protocol.h>

@class SXAnalyticsEvent;

@interface NUContentAnalyticsEvent : NSObject <NUAnalyticsEvent>
{
    SXAnalyticsEvent *_event;
}

@property(readonly, nonatomic) SXAnalyticsEvent *event; // @synthesize event=_event;
// - (void).cxx_destruct;
- (id)initWithEvent:(id)arg1;

@end

