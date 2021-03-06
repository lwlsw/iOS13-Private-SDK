//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSDMixing-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSDInfoGeometry : NSObject <TSDMixing, NSCopying, NSMutableCopying>
{
    CGPoint _position;
    CGSize _size;
    struct {
        unsigned int widthValid:1;
        unsigned int heightValid:1;
        unsigned int horizontalFlip:1;
        unsigned int verticalFlip:1;
    } _flags;
    double _angle;
}

+ (id)geometryFromTransform:(CGAffineTransform)arg1 withSize:(CGSize)arg2;
+ (id)geometryFromFullTransform:(CGAffineTransform)arg1;
+ (id)geometryFromFullTransform:(CGAffineTransform)arg1 widthValid:(BOOL)arg2 heightValid:(BOOL)arg3;
@property(readonly, nonatomic) double angle; // @synthesize angle=_angle;
@property(readonly, nonatomic) CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) CGPoint position; // @synthesize position=_position;
- (id)description;
- (id)normalizedGeometry;
- (id)geometryWithNewBounds:(CGRect)arg1;
- (id)geometryRelativeToGeometry:(id)arg1;
- (id)geometryWithParentGeometry:(id)arg1;
- (id)geometryByAppendingTransform:(CGAffineTransform)arg1;
@property(readonly, nonatomic) CGAffineTransform fullTransform;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (BOOL)isEqualExceptForPosition:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)geometryWithValidNumbers;
@property(readonly, nonatomic) BOOL allValuesValidNumbers;
@property(readonly, nonatomic) CGPoint transformedBoundsOrigin;
@property(readonly, nonatomic) CGRect transformedBounds;
@property(readonly, nonatomic) CGAffineTransform transformWithoutFlips;
- (CGAffineTransform)transformBasedOnPoint:(CGPoint)arg1 centeredAtPoint:(CGPoint)arg2 withFlips:(BOOL)arg3;
- (CGAffineTransform)transformBasedOnPoint:(CGPoint)arg1 centeredAtPoint:(CGPoint)arg2;
- (CGAffineTransform)transformBasedOnRect:(CGRect)arg1;
@property(readonly, nonatomic) CGAffineTransform transform;
@property(readonly, nonatomic) CGPoint center;
@property(readonly, nonatomic) CGRect boundsBeforeRotation;
@property(readonly, nonatomic) BOOL verticalFlip;
@property(readonly, nonatomic) BOOL horizontalFlip;
@property(readonly, nonatomic) BOOL heightValid;
@property(readonly, nonatomic) BOOL widthValid;
- (id)initWithLayoutGeometry:(id)arg1;
- (id)initWithTransform:(CGAffineTransform)arg1 size:(CGSize)arg2;
- (id)initWithTransformedBoundsOrigin:(CGPoint)arg1 size:(CGSize)arg2 horizontalFlip:(BOOL)arg3 verticalFlip:(BOOL)arg4 angle:(double)arg5;
- (id)initWithTransformedBoundsOrigin:(CGPoint)arg1 size:(CGSize)arg2 angle:(double)arg3;
- (id)initWithCenter:(CGPoint)arg1 size:(CGSize)arg2;
- (id)initWithPosition:(CGPoint)arg1 size:(CGSize)arg2 angle:(double)arg3;
- (id)initWithPosition:(CGPoint)arg1 size:(CGSize)arg2;
- (id)initWithHeight:(double)arg1;
- (id)initWithWidth:(double)arg1;
- (id)initWithSize:(CGSize)arg1;
- (id)init;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithFullTransform:(CGAffineTransform)arg1 widthValid:(BOOL)arg2 heightValid:(BOOL)arg3;
- (id)initWithPosition:(CGPoint)arg1 size:(CGSize)arg2 widthValid:(BOOL)arg3 heightValid:(BOOL)arg4 horizontalFlip:(BOOL)arg5 verticalFlip:(BOOL)arg6 angle:(double)arg7;
// - (void)saveToArchive:(struct GeometryArchive )arg1 archiver:(id)arg2;
// - (id)initWithArchive:(const struct GeometryArchive )arg1;

@end

