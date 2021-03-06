//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString, PSIQueryToken;

@interface PXSearchTokenRepresentedObject : NSObject <NSSecureCoding>
{
    NSString *_title;
    PSIQueryToken *_queryToken;
    NSString *_priorityAssetUUID;
}

+ (id)new;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSString *priorityAssetUUID; // @synthesize priorityAssetUUID=_priorityAssetUUID;
@property(readonly, nonatomic) PSIQueryToken *queryToken; // @synthesize queryToken=_queryToken;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 queryToken:(id)arg2 priorityAssetUUID:(id)arg3;
- (id)initWithTitle:(id)arg1 queryToken:(id)arg2;
- (id)init;

@end

