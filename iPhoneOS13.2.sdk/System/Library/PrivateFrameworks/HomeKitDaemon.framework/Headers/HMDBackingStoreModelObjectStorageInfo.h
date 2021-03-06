//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMFVersion;

@interface HMDBackingStoreModelObjectStorageInfo : HMFObject
{
    BOOL _defaultValueSet;
    Class _classObj;
    NSUInteger _logging;
    HMFVersion *_readOnly;
    HMFVersion *_unavailable;
    id _defaultValue;
}

+ (id)deprecatedField;
+ (id)infoWithClass:(Class)arg1 defaultValue:(id)arg2 logging:(NSUInteger)arg3 readOnly:(id)arg4 unavailable:(id)arg5;
+ (id)infoWithClass:(Class)arg1 defaultValue:(id)arg2 logging:(NSUInteger)arg3 readOnly:(id)arg4;
+ (id)infoWithClass:(Class)arg1 defaultValue:(id)arg2 logging:(NSUInteger)arg3;
+ (id)infoWithClass:(Class)arg1 defaultValue:(id)arg2;
+ (id)infoWithClass:(Class)arg1 logging:(NSUInteger)arg2 readOnly:(id)arg3 unavailable:(id)arg4;
+ (id)infoWithClass:(Class)arg1 logging:(NSUInteger)arg2 readOnly:(id)arg3;
+ (id)infoWithClass:(Class)arg1 logging:(NSUInteger)arg2;
+ (id)infoWithClass:(Class)arg1;
@property(readonly, nonatomic) BOOL defaultValueSet; // @synthesize defaultValueSet=_defaultValueSet;
@property(readonly, nonatomic) id defaultValue; // @synthesize defaultValue=_defaultValue;
@property(retain, nonatomic) HMFVersion *unavailable; // @synthesize unavailable=_unavailable;
@property(retain, nonatomic) HMFVersion *readOnly; // @synthesize readOnly=_readOnly;
@property(readonly, nonatomic) NSUInteger logging; // @synthesize logging=_logging;
@property(readonly, nonatomic) Class classObj; // @synthesize classObj=_classObj;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithClass:(Class)arg1 logging:(NSUInteger)arg2 readOnly:(id)arg3 unavailable:(id)arg4 defaultSet:(BOOL)arg5 defaultValue:(id)arg6;

@end

