//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class OADColor;

__attribute__((visibility("hidden")))
@interface OADStyleMatrixReference : NSObject <NSCopying>
{
    unsigned long long mMatrixIndex;
    OADColor *mColor;
}

+ (id)styleMatrixReferenceWithMatrixIndex:(unsigned long long)arg1 color:(id)arg2;
- (id)description;
- (void)setColor:(id)arg1;
- (id)color;
- (void)setMatrixIndex:(unsigned long long)arg1;
- (unsigned long long)matrixIndex;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMatrixIndex:(unsigned long long)arg1 color:(id)arg2;

@end
