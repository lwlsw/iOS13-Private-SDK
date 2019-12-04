//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class NSError, NSMutableData, NSString;

@interface WFGetExternalAddressOperation : NSOperation
{
    _Bool _useIPv6;
    NSString *_result;
    NSError *_error;
    NSMutableData *_data;
    struct __CFReadStream *_stream;
}

@property(nonatomic) struct __CFReadStream *stream; // @synthesize stream=_stream;
@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *result; // @synthesize result=_result;
@property(nonatomic) _Bool useIPv6; // @synthesize useIPv6=_useIPv6;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isReady;
- (void)update;
- (void)handleStreamEvent:(unsigned long long)arg1;
- (void)dealloc;
- (void)start;

@end
