//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class NSArray, _MRNowPlayingPlayerPathProtobuf;

@interface MRUpdateContentItemArtworkMessage : MRProtocolMessage
{
}

- (NSUInteger)type;
@property(readonly, nonatomic) NSArray *contentItems;
@property(readonly, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;
- (id)initWithContentItems:(id)arg1 forPlayerPath:(id)arg2;

@end

