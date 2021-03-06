//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOPhoneNumberResolving-Protocol.h>

@class GEOPNRReadersCache;

__attribute__((visibility("hidden")))
@interface GEOPhoneNumberResolverLocalProxy : NSObject <GEOPhoneNumberResolving>
{
    GEOPNRReadersCache *_readersCache;
}

@property(readonly, retain, nonatomic) GEOPNRReadersCache *readersCache; // @synthesize readersCache=_readersCache;
// - (void).cxx_destruct;
- (void)resolvePhoneNumbers:(id)arg1 handler:(CDUnknownBlockType)arg2 queue:(id)arg3;
- (id)resolveFullyQualifiedPhoneNumber:(id)arg1 inCountry:(id)arg2 withError:(id )arg3;
- (id)resolveUnknownFormatPhoneNumber:(id)arg1 inCountry:(id)arg2 withError:(id )arg3;
- (id)resolvedStringForCC:(id)arg1 inCountry:(id)arg2 locationIndex:(unsigned int)arg3 error:(id )arg4;
- (id)init;

@end

