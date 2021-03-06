//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

__attribute__((visibility("hidden")))
@interface VUIDownloadButtonProperties : NSObject
{
    BOOL _hasBorder;
    BOOL _enabled;
    BOOL _hasImage;
    BOOL _hasTitle;
    BOOL _indeterminate;
    UIImage *_image;
    NSString *_title;
    double _progress;
    NSUInteger _downloadState;
}

@property(nonatomic) NSUInteger downloadState; // @synthesize downloadState=_downloadState;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic, getter=isInderminate) BOOL indeterminate; // @synthesize indeterminate=_indeterminate;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) BOOL hasTitle; // @synthesize hasTitle=_hasTitle;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) BOOL hasImage; // @synthesize hasImage=_hasImage;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) BOOL hasBorder; // @synthesize hasBorder=_hasBorder;
// - (void).cxx_destruct;

@end

