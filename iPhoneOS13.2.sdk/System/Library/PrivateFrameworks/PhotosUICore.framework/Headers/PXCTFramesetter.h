//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSShadow;

@interface PXCTFramesetter : NSObject
{
    BOOL _prepared;
    NSAttributedString *_attributedString;
    CGContextRef _context;
//    const struct __CTFramesetter _framesetter;
    NSShadow *_shadow;
}

@property(readonly, nonatomic) NSShadow *shadow; // @synthesize shadow=_shadow;
// property(readonly, nonatomic) const struct __CTFramesetter framesetter; // @synthesize framesetter=_framesetter;
@property(readonly, nonatomic) CGContextRef context; // @synthesize context=_context;
@property(readonly, copy, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
// - (void).cxx_destruct;
- (void)prepare;
- (id)frameWithRect:(CGRect)arg1 maximumLineCount:(NSUInteger)arg2 allowTruncation:(BOOL)arg3;
- (void)dealloc;
- (id)initWithAttributedString:(id)arg1 context:(CGContextRef )arg2;
- (id)init;

@end

