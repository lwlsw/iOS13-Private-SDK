//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GKGame, GKPlayer, GKRecentMatchInternal;

@interface GKGameMatch : NSObject
{
    GKRecentMatchInternal *_internal;
    GKGame *_game;
    GKPlayer *_player;
}

+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
@property(retain) GKRecentMatchInternal *internal; // @synthesize internal=_internal;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithInternalRepresentation:(id)arg1 game:(id)arg2;

@end

