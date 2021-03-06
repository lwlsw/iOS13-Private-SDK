//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LPTextViewStyle;

__attribute__((visibility("hidden")))
@interface LPTextRowStyle : NSObject
{
    LPTextViewStyle *_leading;
    LPTextViewStyle *_trailing;
    long long _balancingMode;
}

@property(nonatomic) long long balancingMode; // @synthesize balancingMode=_balancingMode;
@property(readonly, nonatomic) LPTextViewStyle *trailing; // @synthesize trailing=_trailing;
@property(readonly, nonatomic) LPTextViewStyle *leading; // @synthesize leading=_leading;
// - (void).cxx_destruct;
- (void)applyToAllTextViewStyles:(CDUnknownBlockType)arg1;
- (id)right;
- (id)left;
- (id)init;

@end

