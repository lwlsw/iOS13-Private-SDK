//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSError, VCSessionParticipant;

@protocol VCSessionParticipantStreamDelegate <NSObject>
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 didStopWithError:(NSError *)arg2;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 didStart:(BOOL)arg2 error:(NSError *)arg3;
@end

