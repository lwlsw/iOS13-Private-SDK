//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface NWPHHandler : NSObject
{
    NSArray *_allowedEntitlementGroup;
    /* void * CDUnknownFunctionPointerType _handlerFunction */;
}

@property /* void * CDUnknownFunctionPointerType handlerFunction */; // @synthesize handlerFunction=_handlerFunction;
@property(retain) NSArray *allowedEntitlementGroup; // @synthesize allowedEntitlementGroup=_allowedEntitlementGroup;
// - (void).cxx_destruct;
- (id)initWithHandlerFunction:(/* void * CDUnknownFunctionPointerType */)arg1 allowedEntitlementGroup:(id)arg2;

@end

