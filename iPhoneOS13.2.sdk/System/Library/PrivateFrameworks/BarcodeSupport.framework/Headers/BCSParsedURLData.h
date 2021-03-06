//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BarcodeSupport/BCSParsedDataPrivate-Protocol.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface BCSParsedURLData : NSObject <BCSParsedDataPrivate>
{
    long long _type;
    NSString *_extraPreviewText;
    NSURL *_url;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSString *extraPreviewText; // @synthesize extraPreviewText=_extraPreviewText;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 type:(long long)arg2 extraPreviewText:(id)arg3;
- (id)initWithURL:(id)arg1 type:(long long)arg2;
- (id)initWithURL:(id)arg1;

@end

