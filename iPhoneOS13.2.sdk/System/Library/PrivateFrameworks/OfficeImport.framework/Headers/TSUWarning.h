//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface TSUWarning : NSObject
{
    long long _kind;
    NSString *_message;
    NSString *_detailMessage;
    NSDictionary *_userInfo;
}

+ (id)fontWarningWithMessage:(id)arg1 fontNames:(id)arg2;
+ (id)warningWithKind:(long long)arg1 message:(id)arg2;
+ (id)warningWithMessage:(id)arg1 affectedObjects:(id)arg2;
+ (id)warningWithMessage:(id)arg1 affectedObject:(id)arg2;
+ (id)warningWithMessage:(id)arg1;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSString *detailMessage; // @synthesize detailMessage=_detailMessage;
@property(readonly, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) long long kind; // @synthesize kind=_kind;
// - (void).cxx_destruct;
- (BOOL)isFontWarning;
- (void)addAffectedObjects:(id)arg1;
- (void)setAffectedObjects:(id)arg1;
- (id)affectedObjects;
@property(readonly, nonatomic) long long severity;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initWithKind:(long long)arg1 message:(id)arg2;

@end

