//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _PFLPrivacyParameters : NSObject
{
    NSString *_identifier;
    double _rho;
    double _precision;
    double _minCDProduct;
    long long _maxRejection;
    double _normmax;
    NSUInteger _dimension;
    double _reconstructionProbability;
}

@property(nonatomic) double reconstructionProbability; // @synthesize reconstructionProbability=_reconstructionProbability;
@property(nonatomic) NSUInteger dimension; // @synthesize dimension=_dimension;
@property(nonatomic) double normmax; // @synthesize normmax=_normmax;
@property(nonatomic) long long maxRejection; // @synthesize maxRejection=_maxRejection;
@property(nonatomic) double minCDProduct; // @synthesize minCDProduct=_minCDProduct;
@property(nonatomic) double precision; // @synthesize precision=_precision;
@property(nonatomic) double rho; // @synthesize rho=_rho;
// - (void).cxx_destruct;
- (BOOL)populateFromFile:(id)arg1;
- (BOOL)populateFromDefaultFile;
- (id)initWithIdentifier:(id)arg1;

@end

