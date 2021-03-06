//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreUI/CUINamedLookup.h>

@class NSString;

@interface CUINamedColor : CUINamedLookup
{
    CGColorRef _cgColor;
    NSString *_colorName;
    BOOL _substituteWithSystemColor;
}

@property(readonly, nonatomic) NSString *systemColorName; // @synthesize systemColorName=_colorName;
@property(readonly, nonatomic) BOOL substituteWithSystemColor; // @synthesize substituteWithSystemColor=_substituteWithSystemColor;
- (void)dealloc;
@property(readonly, nonatomic) CGColorRef cgColor;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(NSUInteger)arg3;

@end

