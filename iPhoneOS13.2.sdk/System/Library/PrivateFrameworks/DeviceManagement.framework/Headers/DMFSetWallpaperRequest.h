//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/DMFTaskRequest.h>

@class NSData, NSFileHandle, NSURL;

@interface DMFSetWallpaperRequest : DMFTaskRequest
{
    NSURL *_imageURL;
    NSData *_imageData;
    long long _location;
    NSFileHandle *_fileHandle;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
@property(retain, nonatomic) NSFileHandle *fileHandle; // @synthesize fileHandle=_fileHandle;
@property(nonatomic) long long location; // @synthesize location=_location;
@property(copy, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

