//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class REImage;

@interface REAccessoryImage : NSObject <NSCopying, NSCoding>
{
    REImage *_image;
}

@property(copy, nonatomic) REImage *image; // @synthesize image=_image;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

