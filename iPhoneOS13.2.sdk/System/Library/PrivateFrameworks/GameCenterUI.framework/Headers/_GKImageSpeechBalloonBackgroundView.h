//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIImage;

@interface _GKImageSpeechBalloonBackgroundView : UIImageView
{
    unsigned char _tipDirection;
    UIImage *_templateImage;
}

@property(retain, nonatomic) UIImage *templateImage; // @synthesize templateImage=_templateImage;
@property(nonatomic) unsigned char tipDirection; // @synthesize tipDirection=_tipDirection;
- (unsigned char)_tipDirectionForCurrentUILayoutDirection;
- (void)tintColorDidChange;
- (void)updateTransform;
- (void)updateImage;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;

@end

