//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLKUIAtlas : NSObject
{
    _Atomic int _instanceCount;
    NSString *_uuid;
    NSUInteger _status;
    NSUInteger _width;
    NSUInteger _height;
    double _boundTime;
    NSUInteger _memoryCost;
}

@property(nonatomic) NSUInteger memoryCost; // @synthesize memoryCost=_memoryCost;
@property(nonatomic) double boundTime; // @synthesize boundTime=_boundTime;
@property(readonly, nonatomic) NSUInteger height; // @synthesize height=_height;
@property(readonly, nonatomic) NSUInteger width; // @synthesize width=_width;
@property(nonatomic) NSUInteger status; // @synthesize status=_status;
@property(readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
// - (void).cxx_destruct;
@property(readonly) BOOL isPurgable;
- (void)decrementInstanceCount;
- (void)incrementInstanceCount;
- (id)backing;
@property(readonly, nonatomic) long long instanceCount;
- (id)initWithUuid:(id)arg1;

@end

