//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData, PRPeer;

@interface PRCollaborationData : NSObject <NSCopying, NSSecureCoding>
{
    NSData *_data;
    PRPeer *_sendingPeer;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) PRPeer *sendingPeer; // @synthesize sendingPeer=_sendingPeer;
@property(readonly) NSData *data; // @synthesize data=_data;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithData:(id)arg1 sendingPeer:(id)arg2;

@end

