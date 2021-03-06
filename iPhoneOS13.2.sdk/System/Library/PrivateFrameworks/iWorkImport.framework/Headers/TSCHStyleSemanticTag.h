//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


__attribute__((visibility("hidden")))
@interface TSCHStyleSemanticTag : NSObject <NSCopying>
{
    int mType;
    NSUInteger mIndex;
}

+ (id)styleSemanticTagWithType:(int)arg1 index:(NSUInteger)arg2;
@property(readonly, nonatomic) NSUInteger index; // @synthesize index=mIndex;
@property(readonly, nonatomic) int type; // @synthesize type=mType;
- (Class)styleClass;
- (id)description;
@property(readonly, nonatomic) BOOL isReferenceLine; // @dynamic isReferenceLine;
@property(readonly, nonatomic) BOOL isSeries; // @dynamic isSeries;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithType:(int)arg1 index:(NSUInteger)arg2;

@end

