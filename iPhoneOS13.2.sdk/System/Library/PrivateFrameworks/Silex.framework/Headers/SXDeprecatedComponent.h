//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SXComponentClassification;

@interface SXDeprecatedComponent : NSObject
{
    NSString *_typeString;
    SXComponentClassification *_replacementClassification;
}

+ (id)deprecatedComponentWithType:(id)arg1 withReplacementClassificationClass:(Class)arg2;
@property(readonly, nonatomic) SXComponentClassification *replacementClassification; // @synthesize replacementClassification=_replacementClassification;
@property(readonly, nonatomic) NSString *typeString; // @synthesize typeString=_typeString;
// - (void).cxx_destruct;
- (id)initWithType:(id)arg1 withReplacementClassification:(Class)arg2;

@end

