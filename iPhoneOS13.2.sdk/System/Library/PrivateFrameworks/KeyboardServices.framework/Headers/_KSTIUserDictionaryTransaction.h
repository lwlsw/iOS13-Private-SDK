//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class _KSTIUserDictionaryEntryValue;

@interface _KSTIUserDictionaryTransaction : NSObject <NSSecureCoding>
{
    _KSTIUserDictionaryEntryValue *_valueToDelete;
    _KSTIUserDictionaryEntryValue *_valueToInsert;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) _KSTIUserDictionaryEntryValue *valueToInsert; // @synthesize valueToInsert=_valueToInsert;
@property(retain, nonatomic) _KSTIUserDictionaryEntryValue *valueToDelete; // @synthesize valueToDelete=_valueToDelete;
// - (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

