//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXAnalyticsReporting-Protocol.h>

@protocol SXAnalyticsReporting;

@interface SXAnalyticsReporterProxy : NSObject <SXAnalyticsReporting>
{
    id <SXAnalyticsReporting> _analyticsReporter;
}

@property(readonly, nonatomic) __weak id <SXAnalyticsReporting> analyticsReporter; // @synthesize analyticsReporter=_analyticsReporter;
// - (void).cxx_destruct;
- (void)reportEvent:(id)arg1;
- (id)initWithAnalyticsReporter:(id)arg1;

@end

