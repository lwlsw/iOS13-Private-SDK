//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKTimelineDataOperation.h>

@class NSDate;

@interface NTKTimelineExtendDataOperation : NTKTimelineDataOperation
{
    BOOL _extendsLeft;
    NSDate *_boundaryDate;
    id /* CDUnknownBlockType */ _handler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ handler; // @synthesize handler=_handler;
// - (void).cxx_destruct;
- (void)_extendRight;
- (void)_extendLeft;
- (void)_start;
- (void)_invokeHandlerWithEntries:(id)arg1;
- (void)_cancel;
- (void)setExtendsRightFromDate:(id)arg1;
- (void)setExtendsLeftFromDate:(id)arg1;

@end

