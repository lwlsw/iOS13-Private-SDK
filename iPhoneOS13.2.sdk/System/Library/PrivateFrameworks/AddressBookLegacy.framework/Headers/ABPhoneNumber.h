//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ABPhoneNumber : NSObject
{
//     CDStruct_a759635d _decomposedPhoneNumber;
    char _phoneNumberBytes;
    NSString *_lastFour;
    NSString *_originalStringValue;
}

@property(readonly) NSString *originalStringValue; // @synthesize originalStringValue=_originalStringValue;
@property(readonly) NSString *lastFour; // @synthesize lastFour=_lastFour;
- (void)dealloc;
@property(readonly) char normalizedPhoneChars;
// @property(readonly) CDStruct_a759635d decomposedPhoneNumberPointer; // @dynamic decomposedPhoneNumberPointer;
- (id)initWithPhoneNumberString:(id)arg1 countryCode:(id)arg2;

@end

