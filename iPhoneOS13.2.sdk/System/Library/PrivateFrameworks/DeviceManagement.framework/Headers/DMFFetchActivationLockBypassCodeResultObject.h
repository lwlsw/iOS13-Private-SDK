//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Catalyst/CATTaskResultObject.h>

@class NSString;

@interface DMFFetchActivationLockBypassCodeResultObject : CATTaskResultObject
{
    NSString *_bypassCode;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *bypassCode; // @synthesize bypassCode=_bypassCode;
// - (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBypassCode:(id)arg1;

@end

