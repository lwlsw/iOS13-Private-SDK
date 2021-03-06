//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class LPPointUnit;

__attribute__((visibility("hidden")))
@interface LPSize : NSObject <NSCopying>
{
    LPPointUnit *_width;
    LPPointUnit *_height;
}

@property(readonly, retain, nonatomic) LPPointUnit *height; // @synthesize height=_height;
@property(readonly, retain, nonatomic) LPPointUnit *width; // @synthesize width=_width;
// - (void).cxx_destruct;
@property(readonly, nonatomic, getter=isEmpty) BOOL empty;
@property(readonly, nonatomic) CGSize asSize;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithSquareSize:(double)arg1;
- (id)initWithSize:(CGSize)arg1;
- (id)init;

@end

