//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileManager, NSString;

@interface MNKeepAliveManager : NSObject
{
    NSUInteger _counter;
    NSString *_launchdKeepAliveFile;
    NSFileManager *_fileManager;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(retain, nonatomic) NSString *launchdKeepAliveFile; // @synthesize launchdKeepAliveFile=_launchdKeepAliveFile;
@property NSUInteger counter; // @synthesize counter=_counter;
// - (void).cxx_destruct;
- (void)checkOut;
- (void)checkIn;
- (id)init;

@end

