//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CRKMobileGestalt : NSObject
{
}

+ (id)sharedGestalt;
- (id)answerForQuestion:(struct __CFString *)arg1;
- (id)answerForQuestion:(struct __CFString *)arg1 ofClass:(Class)arg2;
@property(readonly, nonatomic) unsigned long long availableBytes;
@property(readonly, nonatomic) struct CGSize mainScreenSizeInPixels;
@property(readonly, nonatomic) double mainScreenScale;
@property(readonly, copy, nonatomic) NSString *serialNumber;

@end
