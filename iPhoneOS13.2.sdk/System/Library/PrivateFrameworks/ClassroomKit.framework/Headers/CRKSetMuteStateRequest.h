//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CATTaskRequest.h"

@interface CRKSetMuteStateRequest : CATTaskRequest
{
    BOOL _mute;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic, getter=shouldMute) BOOL mute; // @synthesize mute=_mute;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

