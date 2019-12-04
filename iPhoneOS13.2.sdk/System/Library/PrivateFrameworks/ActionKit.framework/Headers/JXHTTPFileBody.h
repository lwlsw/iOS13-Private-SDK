//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActionKit/JXHTTPRequestBody-Protocol.h>

@class NSString;

@interface JXHTTPFileBody : NSObject <JXHTTPRequestBody>
{
    NSString *_filePath;
    NSString *_httpContentType;
}

+ (id)withFilePath:(id)arg1;
+ (id)withFilePath:(id)arg1 contentType:(id)arg2;
@property(copy, nonatomic) NSString *httpContentType; // @synthesize httpContentType=_httpContentType;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (long long)httpContentLength;
- (id)httpInputStream;
- (id)initWithFilePath:(id)arg1 contentType:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
