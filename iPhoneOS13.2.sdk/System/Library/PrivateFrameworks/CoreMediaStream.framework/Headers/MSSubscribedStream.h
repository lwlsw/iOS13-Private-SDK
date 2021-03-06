//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface MSSubscribedStream : NSObject <NSSecureCoding>
{
    NSString *_streamID;
    NSString *_ctag;
}

+ (BOOL)supportsSecureCoding;
+ (id)subscribedStreamWithStreamID:(id)arg1;
@property(retain, nonatomic) NSString *ctag; // @synthesize ctag=_ctag;
@property(retain, nonatomic) NSString *streamID; // @synthesize streamID=_streamID;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initWithStreamID:(id)arg1;

@end

