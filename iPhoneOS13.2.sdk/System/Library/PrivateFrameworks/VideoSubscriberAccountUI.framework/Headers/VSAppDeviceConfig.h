//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccountUI/IKAppDeviceConfig-Protocol.h>

@class NSOperationQueue, NSString;

__attribute__((visibility("hidden")))
@interface VSAppDeviceConfig : NSObject <IKAppDeviceConfig>
{
    NSOperationQueue *_privateQueue;
}

@property(retain, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
- (id)timeZone;
- (id)storeFrontCountryCode;
- (id)systemLanguage;
- (_Bool)isTimeZoneSet;
- (struct CGSize)screenSize;
- (unsigned long long)preferredVideoPreviewFormat;
- (unsigned long long)preferredVideoFormat;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
