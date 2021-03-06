//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OCDDelayedMedia.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface OADMovie : OCDDelayedMedia
{
    NSData *mData;
    NSString *mName;
    float mStart;
    float mEnd;
    BOOL mIsAudioOnly;
    BOOL loop;
}

@property BOOL loop; // @synthesize loop;
@property float movieEndPoint; // @synthesize movieEndPoint=mEnd;
@property float movieStartPoint; // @synthesize movieStartPoint=mStart;
@property BOOL isAudioOnly; // @synthesize isAudioOnly=mIsAudioOnly;
@property(retain) NSString *name; // @synthesize name=mName;
@property(retain) NSData *data; // @synthesize data=mData;
// - (void).cxx_destruct;
- (id)description;

@end

