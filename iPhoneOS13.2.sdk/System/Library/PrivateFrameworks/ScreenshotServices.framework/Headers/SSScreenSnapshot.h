//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImage, UIScreen;

@interface SSScreenSnapshot : NSObject
{
    UIImage *_image;
    UIScreen *_screen;
}

+ (id)snapshotWithImage:(id)arg1 fromScreen:(id)arg2;
// - (void).cxx_destruct;
@property(readonly, nonatomic) UIScreen *screen;
@property(readonly, nonatomic) UIImage *image;

@end

