//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface MTPromiseResult : NSObject
{
    NSError *_error;
    id _result;
}

@property(readonly, nonatomic) id result; // @synthesize result=_result;
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
// - (void).cxx_destruct;
- (id)initWithResult:(id)arg1 error:(id)arg2;

@end

