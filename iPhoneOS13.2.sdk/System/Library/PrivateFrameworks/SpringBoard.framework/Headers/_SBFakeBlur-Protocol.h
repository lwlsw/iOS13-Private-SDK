//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol _SBFakeBlurObserver;

@protocol _SBFakeBlur <NSObject>
@property(nonatomic) NSUInteger transformOptions;
@property(nonatomic, getter=isFullscreen) BOOL fullscreen;
@property(nonatomic) double zoomScale;
@property(nonatomic) __weak id <_SBFakeBlurObserver> observer;
- (void)offsetWallpaperBy:(CGPoint)arg1;
- (long long)effectiveStyle;
- (void)requestStyle:(long long)arg1;
@end

