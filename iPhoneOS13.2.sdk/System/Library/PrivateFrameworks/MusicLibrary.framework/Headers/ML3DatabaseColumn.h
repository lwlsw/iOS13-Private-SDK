//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ML3DatabaseColumn : NSObject
{
    NSString *_name;
    NSUInteger _datatype;
    NSUInteger _columnConstraints;
    id _defaultValue;
}

+ (id)columnWithName:(id)arg1 datatype:(NSUInteger)arg2 constraints:(NSUInteger)arg3 defaultValue:(id)arg4;
@property(readonly, nonatomic) id defaultValue; // @synthesize defaultValue=_defaultValue;
@property(readonly, nonatomic) NSUInteger columnConstraints; // @synthesize columnConstraints=_columnConstraints;
@property(readonly, nonatomic) NSUInteger datatype; // @synthesize datatype=_datatype;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (id)_columnDefinitionSQL;
- (id)description;
- (id)initWithName:(id)arg1 datatype:(NSUInteger)arg2 constraints:(NSUInteger)arg3 defaultValue:(id)arg4;

@end

