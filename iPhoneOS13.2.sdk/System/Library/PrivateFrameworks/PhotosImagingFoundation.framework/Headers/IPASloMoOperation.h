//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosImagingFoundation/IPAVideoOperation.h>

@interface IPASloMoOperation : IPAVideoOperation
{
//     CDStruct_e83c9415 _timeRange;
    float _rate;
}

+ (id)operationFromFileURL:(id)arg1;
- (id)debugDescription;
- (id)identifier;
// @property(readonly, nonatomic) CDStruct_e83c9415 timeRange;
@property(readonly, nonatomic) float rate;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqualToOperation:(id)arg1;
- (id)settingsDictionary;
- (id)initWithSettingsDictionary:(id)arg1;
- (id)initWithOperation:(id)arg1;
// - (id)initWithTimeRange:(CDStruct_e83c9415)arg1 rate:(float)arg2;
- (BOOL)isMigratable;
- (id)internalRepresentation;

@end

