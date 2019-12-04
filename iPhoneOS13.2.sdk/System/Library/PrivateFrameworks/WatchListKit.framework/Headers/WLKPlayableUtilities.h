//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WLKPlayableUtilities : NSObject
{
}

+ (_Bool)_openPunchoutURL:(id)arg1 isPlaybackURL:(_Bool)arg2;
+ (id)_defaultPunchoutURLWithPlayable:(id)arg1 isPlaybackURL:(_Bool *)arg2;
+ (id)_defaultPunchoutURLWithPlayable:(id)arg1 URLKey:(id)arg2;
+ (id)_defaultPlayPunchoutURLWithPlayable:(id)arg1;
+ (id)_defaultOpenPunchoutURLWithPlayable:(id)arg1;
+ (_Bool)_playNonITunesPlayableUsingAssociatedApp:(id)arg1;
+ (id)_punchoutURLForDirectPlayback:(id)arg1 ignoreExtras:(_Bool)arg2;
+ (id)_watchListAppPunchoutURLWithPlayable:(id)arg1 forContentType:(unsigned long long)arg2 canonicalID:(id)arg3 showCanonicalID:(id)arg4 seasonCanonicalID:(id)arg5 allowPlayAction:(_Bool)arg6 isPlaybackURL:(_Bool *)arg7;
+ (id)_watchListAppOpenPunchoutURLWithITunesPlayable:(id)arg1 forContentType:(unsigned long long)arg2 canonicalID:(id)arg3 showCanonicalID:(id)arg4 seasonCanonicalID:(id)arg5;
+ (_Bool)_openNonITunesPlayableWatchListAppUnavailable:(id)arg1 forContentType:(unsigned long long)arg2 canonicalID:(id)arg3 showCanonicalID:(id)arg4 seasonCanonicalID:(id)arg5;
+ (_Bool)_openITunesPlayableWatchListAppUnavailable:(id)arg1 forContentType:(unsigned long long)arg2 canonicalID:(id)arg3 showCanonicalID:(id)arg4 seasonCanonicalID:(id)arg5;
+ (_Bool)_openNonITunesPlayableWatchListAppAvailable:(id)arg1 forContentType:(unsigned long long)arg2 canonicalID:(id)arg3 showCanonicalID:(id)arg4 seasonCanonicalID:(id)arg5;
+ (_Bool)_openITunesPlayableWatchListAppAvailable:(id)arg1 forContentType:(unsigned long long)arg2 canonicalID:(id)arg3 showCanonicalID:(id)arg4 seasonCanonicalID:(id)arg5;
+ (_Bool)openPlayable:(id)arg1 forContentType:(unsigned long long)arg2 canonicalID:(id)arg3 showCanonicalID:(id)arg4 seasonCanonicalID:(id)arg5;
+ (_Bool)openPlayable:(id)arg1 forContentType:(unsigned long long)arg2 canonicalID:(id)arg3 showCanonicalID:(id)arg4;
+ (_Bool)openPlayable:(id)arg1 forContentType:(unsigned long long)arg2 canonicalID:(id)arg3;

@end
