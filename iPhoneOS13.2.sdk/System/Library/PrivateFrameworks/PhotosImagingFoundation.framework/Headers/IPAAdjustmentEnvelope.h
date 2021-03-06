//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class IPAAdjustmentStack, NSString;

@interface IPAAdjustmentEnvelope : NSObject <NSCopying>
{
    IPAAdjustmentStack *_adjustmentStack;
    NSString *_originator;
    NSString *_format;
    NSString *_formatVersion;
}

@property(retain, nonatomic) NSString *formatVersion; // @synthesize formatVersion=_formatVersion;
@property(retain, nonatomic) NSString *format; // @synthesize format=_format;
@property(retain, nonatomic) NSString *originator; // @synthesize originator=_originator;
@property(retain, nonatomic) IPAAdjustmentStack *adjustmentStack; // @synthesize adjustmentStack=_adjustmentStack;
// - (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)containsVideoAdjustments;
- (BOOL)containsPhotoAdjustments;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)videoAdjustmentStack;
- (id)photoAdjustmentStack;

@end

