//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PencilKit/PKStroke.h>

@class UIColor;

@interface PKMutableStroke : PKStroke
{
    UIColor *__color;
}

@property(copy, nonatomic) UIColor *_color; // @synthesize _color=__color;
- (void)_setColor:(id)arg1;
- (void)_setLocation:(struct CGPoint)arg1 atIndex:(unsigned long long)arg2;
- (void)_applyTransform:(struct CGAffineTransform)arg1;

@end
