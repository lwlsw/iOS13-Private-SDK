//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSKMoviePlaybackRegistry : NSObject
{
}

+ (id)sharedMoviePlaybackRegistry;
- (void)object:(id)arg1 willTransferMoviePlaybackToObject:(id)arg2;
- (void)objectDidEndMoviePlayback:(id)arg1;
- (void)objectWillBeginMoviePlayback:(id)arg1;

@end

