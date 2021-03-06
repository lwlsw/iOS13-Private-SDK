//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MIME/MFDataConsumer-Protocol.h>

@class NSData;
@protocol MFGuaranteedCollectingDataConsumer;

@interface MFPartialNetworkDataConsumer : NSObject <MFDataConsumer>
{
    id <MFGuaranteedCollectingDataConsumer> _rawDataConsumer;
    NSData *_strippedData;
    NSUInteger _length;
    unsigned int _seenNetworkLineEndings:1;
}

- (void)purge;
- (id)copyDataWithUnixLineEndings;
- (id)data;
- (NSUInteger)length;
- (void)done;
- (long long)appendData:(id)arg1;
- (void)dealloc;
- (id)init;

@end

