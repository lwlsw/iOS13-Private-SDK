//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HMDCameraClipImportVideoSegmentMetadata : NSObject
{
    _Bool _header;
    NSString *_resourcePath;
    double _duration;
}

@property(readonly) double duration; // @synthesize duration=_duration;
@property(readonly, getter=isHeader) _Bool header; // @synthesize header=_header;
@property(readonly, copy) NSString *resourcePath; // @synthesize resourcePath=_resourcePath;
- (id)initWithVideoSegmentMetadata:(id)arg1;

@end
