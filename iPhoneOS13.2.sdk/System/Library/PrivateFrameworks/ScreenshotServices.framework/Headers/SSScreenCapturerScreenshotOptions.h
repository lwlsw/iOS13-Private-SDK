//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImage;

@interface SSScreenCapturerScreenshotOptions : NSObject
{
    unsigned int _externalFlashLayerContextID;
    UIImage *_preparedImage;
    unsigned long long _externalFlashLayerRenderID;
}

@property(nonatomic) unsigned int externalFlashLayerContextID; // @synthesize externalFlashLayerContextID=_externalFlashLayerContextID;
@property(nonatomic) unsigned long long externalFlashLayerRenderID; // @synthesize externalFlashLayerRenderID=_externalFlashLayerRenderID;
@property(retain, nonatomic) UIImage *preparedImage; // @synthesize preparedImage=_preparedImage;

@end
