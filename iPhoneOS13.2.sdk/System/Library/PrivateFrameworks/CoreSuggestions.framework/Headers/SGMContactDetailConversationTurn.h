//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PETScalarEventTracker;

@interface SGMContactDetailConversationTurn : NSObject
{
    PETScalarEventTracker *_tracker;
}

@property(readonly, nonatomic) PETScalarEventTracker *tracker; // @synthesize tracker=_tracker;
// - (void).cxx_destruct;
//  (void)trackEventWithScalar:(NSUInteger)arg1 detailExtraction:(struct SGMDetailExtractionType_)arg2 selfIdName:(struct SGMTypeSafeBool_)arg3 extractionModelVersion:(NSUInteger)arg4 receivedConverstationTurn:(struct SGMTypeSafeBool_)arg5 knownSuggestedContactDetail:(struct SGMTypeSafeBool_)arg6 curatedContactDetail:(struct SGMTypeSafeBool_)arg7 throughApp:(struct SGMContactDetailUsedApp_)arg8 contactDetailUsed:(struct SGMContactDetailType_)arg9;
- (id)init;

@end

