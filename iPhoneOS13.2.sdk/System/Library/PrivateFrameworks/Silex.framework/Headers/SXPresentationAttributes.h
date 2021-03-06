//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SXPresentationAttributes : NSObject
{
    BOOL _fadeInComponents;
    BOOL _enableViewportDebugging;
    BOOL _testingConditionEnabled;
    NSString *_contentSizeCategory;
    NSUInteger _presentationMode;
    double _contentScaleFactor;
    CGSize _canvasSize;
}

@property(nonatomic) BOOL testingConditionEnabled; // @synthesize testingConditionEnabled=_testingConditionEnabled;
@property(nonatomic) BOOL enableViewportDebugging; // @synthesize enableViewportDebugging=_enableViewportDebugging;
@property(nonatomic) double contentScaleFactor; // @synthesize contentScaleFactor=_contentScaleFactor;
@property(nonatomic) BOOL fadeInComponents; // @synthesize fadeInComponents=_fadeInComponents;
@property(nonatomic) NSUInteger presentationMode; // @synthesize presentationMode=_presentationMode;
@property(retain, nonatomic) NSString *contentSizeCategory; // @synthesize contentSizeCategory=_contentSizeCategory;
@property(nonatomic) CGSize canvasSize; // @synthesize canvasSize=_canvasSize;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)init;

@end

