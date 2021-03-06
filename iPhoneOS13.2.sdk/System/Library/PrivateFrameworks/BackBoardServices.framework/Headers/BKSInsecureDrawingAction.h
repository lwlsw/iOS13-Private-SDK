//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSAction.h>

@class NSArray, NSDictionary;

@interface BKSInsecureDrawingAction : BSAction
{
}

- (id)keyDescriptionForSetting:(NSUInteger)arg1;
@property(readonly, nonatomic) NSArray *processIds;
@property(readonly, nonatomic) NSDictionary *pidToContextInfoDictionary;
@property(readonly, nonatomic) NSArray *secureModeViolations;
- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(CDUnknownBlockType)arg4;
- (id)_initWithPidToContextInfoDictionary:(NSDictionary )arg1;
- (id)initWithSecureModeViolations:(id)arg1;
- (id)initWithPidToContextIdsDictionary:(id)arg1;

@end

