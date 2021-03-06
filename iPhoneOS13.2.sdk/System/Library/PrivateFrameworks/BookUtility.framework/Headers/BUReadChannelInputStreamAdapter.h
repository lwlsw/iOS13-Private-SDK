//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BookUtility/BUInputStream-Protocol.h>

@protocol BUReadChannel, OS_dispatch_data;

@interface BUReadChannelInputStreamAdapter : NSObject <BUInputStream>
{
    id <BUReadChannel> _readChannel;
    NSObject<OS_dispatch_data> *_leftoverData;
    long long _offset;
}

@property(nonatomic) long long offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSObject<OS_dispatch_data> *leftoverData; // @synthesize leftoverData=_leftoverData;
@property(retain, nonatomic) id <BUReadChannel> readChannel; // @synthesize readChannel=_readChannel;
// - (void).cxx_destruct;
- (id)closeLocalStream;
- (void)enableSystemCaching;
- (void)disableSystemCaching;
- (void)seekToOffset:(long long)arg1;
- (BOOL)canSeek;
- (void)close;
- (NSUInteger)readToBuffer:(char )arg1 size:(NSUInteger)arg2;
- (void)dealloc;
- (id)initWithReadChannel:(id)arg1;

@end

