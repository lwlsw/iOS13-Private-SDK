//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MailSupport/EFLoggable-Protocol.h>

@interface MSFileCompression : NSObject <EFLoggable>
{
}

+ (BOOL)compressDirectory:(id)arg1 shouldCancel:(CDUnknownBlockType)arg2 error:(id )arg3;
+ (BOOL)compressFile:(id)arg1 error:(id )arg2;
+ (id)log;

@end

