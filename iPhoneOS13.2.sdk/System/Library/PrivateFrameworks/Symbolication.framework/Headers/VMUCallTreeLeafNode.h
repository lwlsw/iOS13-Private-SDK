//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Symbolication/VMUCallTreeNode.h>

@class NSCountedSet, NSString;

__attribute__((visibility("hidden")))
@interface VMUCallTreeLeafNode : VMUCallTreeNode
{
    NSCountedSet *_addresses;
    NSString *_combinedName;
}

// - (void).cxx_destruct;
- (void)getBrowserName:(id)arg1;
- (void)addAddress:(NSUInteger)arg1;
- (id)init;
- (id)initWithName:(id)arg1 address:(NSUInteger)arg2 count:(unsigned int)arg3 numBytes:(NSUInteger)arg4;

@end

