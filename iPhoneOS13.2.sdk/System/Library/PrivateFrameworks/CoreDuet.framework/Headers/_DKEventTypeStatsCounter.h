//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_DKEventStatsCounterInternalProperty-Protocol.h>

@class _DKEventStatsCounterInternal;

@interface _DKEventTypeStatsCounter : NSObject <_DKEventStatsCounterInternalProperty>
{
    _DKEventStatsCounterInternal *_internal;
}

+ (id)counterInCollection:(id)arg1 withEventName:(id)arg2 eventType:(id)arg3 eventTypePossibleValues:(id)arg4;
@property(retain) _DKEventStatsCounterInternal *internal; // @synthesize internal=_internal;
// - (void).cxx_destruct;
- (NSUInteger)countWithTypeValue:(id)arg1;
- (void)incrementCountByNumber:(NSUInteger)arg1 typeValue:(id)arg2;
- (id)typeValues;
- (id)eventType;
- (id)eventName;
- (void)incrementCountWithTypeValue:(id)arg1;

@end

