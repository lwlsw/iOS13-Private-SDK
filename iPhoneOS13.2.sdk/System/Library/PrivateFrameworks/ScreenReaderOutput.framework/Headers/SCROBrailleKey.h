//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSMutableArray, NSString;
@protocol NSSecureCoding;

@interface SCROBrailleKey : NSObject <NSSecureCoding>
{
    NSMutableArray *_maskArray;
    NSString *_identifier;
    long long _routerIndex;
    long long _routerToken;
    long long _routerLocation;
    BOOL _hasRouterInfo;
    id <NSSecureCoding> _appToken;
    int _displayToken;
    int _displayMode;
}

+ (BOOL)supportsSecureCoding;
// - (void).cxx_destruct;
- (BOOL)getRouterIndex:(long long )arg1 token:(long long )arg2 location:(long long )arg3 appToken:(id )arg4;
- (void)setRouterIndex:(long long)arg1 token:(long long)arg2 location:(long long)arg3 appToken:(id)arg4;
- (id)identifier;
- (id)keyMasks;
- (void)addKeyMask:(unsigned int)arg1;
- (id)description;
- (int)displayMode;
- (void)setDisplayMode:(int)arg1;
- (int)displayToken;
- (void)setDisplayToken:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)addModifierMask:(unsigned int)arg1;
- (void)addSpacebarKeyMask;

@end

