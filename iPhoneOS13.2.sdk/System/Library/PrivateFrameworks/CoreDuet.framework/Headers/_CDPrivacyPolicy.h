//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _CDPrivacyPolicy : NSObject
{
    BOOL canPersistOnStorage;
    double temporalPrecision;
}

+ (id)sharedPrivacyPolicy;
@property(readonly, nonatomic) double temporalPrecision; // @synthesize temporalPrecision;
@property(readonly, nonatomic) BOOL canPersistOnStorage; // @synthesize canPersistOnStorage;
- (id)description;
- (id)initWithTemporalPrecision:(double)arg1 canPersistOnStorage:(BOOL)arg2;
- (id)init;

@end

