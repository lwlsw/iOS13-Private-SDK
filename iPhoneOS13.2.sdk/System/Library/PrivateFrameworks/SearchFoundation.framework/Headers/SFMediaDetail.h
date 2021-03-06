//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchFoundation/SFMediaDetail-Protocol.h>

@class NSData, NSDictionary, NSString, SFText;

@interface SFMediaDetail : NSObject <SFMediaDetail, NSSecureCoding, NSCopying>
{
    NSString *_title;
    SFText *_content;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) SFText *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;

@end

