//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@interface HMDCameraRecordingManagerDependencyFactory : HMFObject
{
}

- (id)createRecordingSessionRetryContextWithWorkQueue:(id)arg1;
- (id)createTimerWithTimeInterval:(double)arg1;
- (id)createBulkSendSessionInitiatorWithWorkQueue:(id)arg1 accessory:(id)arg2;
- (id)createSessionNotificationTrigger:(id)arg1 workQueue:(id)arg2;
- (id)createRecordingSessionWithWorkQueue:(id)arg1 camera:(id)arg2 configuredFragmentDuration:(double)arg3 timelineManager:(id)arg4;
- (id)createSettingsControl:(id)arg1 accessory:(id)arg2 managementService:(id)arg3;

@end

