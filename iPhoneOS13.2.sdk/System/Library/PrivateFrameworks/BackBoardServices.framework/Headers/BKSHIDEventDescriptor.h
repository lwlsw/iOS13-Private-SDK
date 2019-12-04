//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BSDescriptionProviding-Protocol.h>



@class NSString;

@interface BKSHIDEventDescriptor : NSObject <NSSecureCoding, BSDescriptionProviding, NSCopying>
{
    unsigned int _hidEventType;
}

+ (_Bool)supportsSecureCoding;
+ (id)descriptorWithEventType:(unsigned int)arg1;
+ (id)descriptorForHIDEvent:(struct __IOHIDEvent *)arg1;
@property(readonly, nonatomic) unsigned int hidEventType; // @synthesize hidEventType=_hidEventType;
- (_Bool)describes:(id)arg1;
- (_Bool)matchesHIDEvent:(struct __IOHIDEvent *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithEventType:(unsigned int)arg1;
- (id)init;
- (id)descriptorByAddingSenderIDToMatchCriteria:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
