//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXConditionalFormattingRule : NSObject
{
}

//  (void)readFrom:(struct _xmlNode )arg1 x14:(BOOL)arg2 edConditionalFormatting:(id)arg3 edReference:(id)arg4 state:(id)arg5;
+ (id)conditionalFormattingRuleTypeEnumMap;
+ (id)operatorStringEnumMap;
+ (id)timePeriodEnumMap;
+ (int)edTimePeriodFromXmlTimePeriodString:(id)arg1;
+ (int)edOperatorFromXmlOperatorString:(id)arg1;
+ (int)edRuleTypeFromXmlRuleTypeString:(id)arg1;

@end

