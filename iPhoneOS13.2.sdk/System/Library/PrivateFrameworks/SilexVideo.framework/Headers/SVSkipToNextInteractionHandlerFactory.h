//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoInteractionHandlerFactory-Protocol.h>

@class NSString;
@protocol SVVideoPlaybackSkipping;

@interface SVSkipToNextInteractionHandlerFactory : NSObject <SVVideoInteractionHandlerFactory>
{
    id <SVVideoPlaybackSkipping> _playbackSkipper;
}

@property(readonly, nonatomic) id <SVVideoPlaybackSkipping> playbackSkipper; // @synthesize playbackSkipper=_playbackSkipper;
- (id)createInteractionHandlerForVideo:(id)arg1;
- (id)initWithPlaybackSkipper:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
