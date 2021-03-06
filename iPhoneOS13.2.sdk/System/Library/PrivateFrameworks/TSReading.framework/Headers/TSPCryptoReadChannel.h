//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSUStreamReadChannel-Protocol.h>

@class SFUCryptoKey;
@protocol OS_dispatch_data, OS_dispatch_queue, TSUStreamReadChannel;

@interface TSPCryptoReadChannel : NSObject <TSUStreamReadChannel>
{
    id <TSUStreamReadChannel> _readChannel;
    NSObject<OS_dispatch_queue> *_readChannelQueue;
    SFUCryptoKey *_decryptionKey;
    NSObject<OS_dispatch_data> *_holdData;
    char _iv;
    NSUInteger _ivRead;
//     struct _CCCryptor _cryptor;
    char _buffer;
    NSUInteger _initialBytesIgnored;
}

// - (void).cxx_destruct;
- (void)readWithQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)close;
- (void)dealloc;
- (id)initWithReadChannel:(id)arg1 decryptionKey:(id)arg2;

@end

