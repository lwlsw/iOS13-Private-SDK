//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

@class NSError;

@interface HMDUploadCompletedLogEvent : HMDLogEvent
{
    NSError *_error;
}

+ (id)uploadCompletedWithError:(id)arg1;
+ (id)uuid;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
// - (void).cxx_destruct;
- (id)initUploadWithError:(id)arg1;

@end

