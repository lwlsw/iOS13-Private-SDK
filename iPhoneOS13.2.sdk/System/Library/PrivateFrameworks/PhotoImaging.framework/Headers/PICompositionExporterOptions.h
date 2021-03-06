//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NUColorSpace, NUPriority;
@protocol NUScalePolicy;

@interface PICompositionExporterOptions : NSObject
{
    NUPriority *_priority;
    NUColorSpace *_colorSpace;
    NSString *_pairingIdentifier;
    id <NUScalePolicy> _scalePolicy;
}

@property(retain) id <NUScalePolicy> scalePolicy; // @synthesize scalePolicy=_scalePolicy;
@property(copy) NSString *pairingIdentifier; // @synthesize pairingIdentifier=_pairingIdentifier;
@property(retain) NUColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(retain) NUPriority *priority; // @synthesize priority=_priority;
// - (void).cxx_destruct;
- (id)init;

@end

