//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIDictationLandingViewSettings : NSObject
{
    _Bool _useBlackWave;
    double _fadeInDuration;
    double _fadeOutDuration;
    double _shrinkDuration;
    double _colorTransitionInDuration;
    double _colorTransitionOutDuration;
    double _circleRPM;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool useBlackWave; // @synthesize useBlackWave=_useBlackWave;
@property(nonatomic) double circleRPM; // @synthesize circleRPM=_circleRPM;
@property(nonatomic) double colorTransitionOutDuration; // @synthesize colorTransitionOutDuration=_colorTransitionOutDuration;
@property(nonatomic) double colorTransitionInDuration; // @synthesize colorTransitionInDuration=_colorTransitionInDuration;
@property(nonatomic) double shrinkDuration; // @synthesize shrinkDuration=_shrinkDuration;
@property(nonatomic) double fadeOutDuration; // @synthesize fadeOutDuration=_fadeOutDuration;
@property(nonatomic) double fadeInDuration; // @synthesize fadeInDuration=_fadeInDuration;
- (id)init;

@end
