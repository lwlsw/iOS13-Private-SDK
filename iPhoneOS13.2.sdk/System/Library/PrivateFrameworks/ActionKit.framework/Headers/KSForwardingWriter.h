//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActionKit/KSWriter-Protocol.h>

@protocol KSWriter;

@interface KSForwardingWriter : NSObject <KSWriter>
{
    id <KSWriter> _writer;
}

// - (void).cxx_destruct;
- (void)writeString:(id)arg1;
- (void)close;
- (void)dealloc;
- (id)init;
- (id)initWithOutputWriter:(id)arg1;

@end

