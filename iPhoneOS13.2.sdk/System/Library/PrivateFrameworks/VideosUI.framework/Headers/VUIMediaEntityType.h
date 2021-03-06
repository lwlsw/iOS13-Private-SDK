//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface VUIMediaEntityType : NSObject <NSCopying>
{
    BOOL _rental;
    NSUInteger _subtype;
    NSUInteger _mediaCategoryType;
    NSUInteger _mediaCollectionType;
}

+ (id)season;
+ (id)show;
+ (id)episode;
+ (id)homeVideo;
+ (id)movieRental;
+ (id)movie;
@property(nonatomic, getter=isRental) BOOL rental; // @synthesize rental=_rental;
@property(nonatomic) NSUInteger mediaCollectionType; // @synthesize mediaCollectionType=_mediaCollectionType;
@property(nonatomic) NSUInteger mediaCategoryType; // @synthesize mediaCategoryType=_mediaCategoryType;
@property(nonatomic) NSUInteger subtype; // @synthesize subtype=_subtype;
- (id)description;
- (id)stringDescription;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)_initWithMediaCollectionType:(NSUInteger)arg1 mediaCategoryType:(NSUInteger)arg2;
- (id)_initWithMediaItemCategoryType:(NSUInteger)arg1 isRental:(BOOL)arg2;
- (id)init;

@end

