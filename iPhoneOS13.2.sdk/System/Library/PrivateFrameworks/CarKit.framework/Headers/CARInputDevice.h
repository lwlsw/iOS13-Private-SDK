//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CARInputDevice : NSObject
{
    NSString *_UUID;
    NSUInteger _senderID;
}

@property(readonly, nonatomic) NSUInteger senderID; // @synthesize senderID=_senderID;
@property(readonly, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
// - (void).cxx_destruct;
- (void)_setSenderID:(NSUInteger)arg1;
- (void)_setUUID:(id)arg1;
// - (id)initWithServiceClient:(struct __IOHIDServiceClient )arg1 UUID:(id)arg2;

@end

