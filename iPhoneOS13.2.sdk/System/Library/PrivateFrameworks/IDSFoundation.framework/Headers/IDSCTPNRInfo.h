//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDSCTPNRInfo : NSObject
{
    NSString *_PLMN;
    NSString *_IMSI;
    NSString *_PNRPhoneNumber;
    NSString *_phoneBookNumber;
}

@property(retain, nonatomic) NSString *phoneBookNumber; // @synthesize phoneBookNumber=_phoneBookNumber;
@property(retain, nonatomic) NSString *PNRPhoneNumber; // @synthesize PNRPhoneNumber=_PNRPhoneNumber;
@property(retain, nonatomic) NSString *IMSI; // @synthesize IMSI=_IMSI;
@property(retain, nonatomic) NSString *PLMN; // @synthesize PLMN=_PLMN;
// - (void).cxx_destruct;
- (id)initWithIMSI:(id)arg1 PLMN:(id)arg2 PNRPhoneNumber:(id)arg3 phoneBookNumber:(id)arg4;

@end

