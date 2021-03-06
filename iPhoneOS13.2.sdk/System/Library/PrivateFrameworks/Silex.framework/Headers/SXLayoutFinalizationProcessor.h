//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXLayoutProcessor-Protocol.h>

@protocol SXUnitConverterFactory;

@interface SXLayoutFinalizationProcessor : NSObject <SXLayoutProcessor>
{
    id <SXUnitConverterFactory> _unitConverterFactory;
}

@property(readonly, nonatomic) id <SXUnitConverterFactory> unitConverterFactory; // @synthesize unitConverterFactory=_unitConverterFactory;
// - (void).cxx_destruct;
- (void)finalizeLayoutBlueprint:(id)arg1 origin:(CGPoint)arg2 absoluteOrigin:(CGPoint)arg3;
- (void)processLayoutTask:(id)arg1 layoutBlueprint:(id)arg2 DOMObjectProvider:(id)arg3;
- (id)initWithUnitConverterFactory:(id)arg1;

@end

