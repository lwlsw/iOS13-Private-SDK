//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class OADColor;

__attribute__((visibility("hidden")))
@interface OADFontReference : NSObject <NSCopying>
{
    int mIndex;
    OADColor *mColor;
}

// - (void).cxx_destruct;
- (id)description;
- (void)applyToParagraphProperties:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)setColor:(id)arg1;
- (id)color;
- (void)setIndex:(int)arg1;
- (int)index;
// - (id)copyWithZone:(_NSZone )arg1;

@end

