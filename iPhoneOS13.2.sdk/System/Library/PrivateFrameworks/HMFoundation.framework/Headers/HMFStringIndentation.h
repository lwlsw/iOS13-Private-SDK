//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@interface HMFStringIndentation : HMFObject
{
    NSUInteger _width;
    NSUInteger _level;
}

+ (id)indentationWithWidth:(NSUInteger)arg1;
+ (id)indentation;
@property(readonly) NSUInteger level; // @synthesize level=_level;
@property(readonly) NSUInteger width; // @synthesize width=_width;
- (id)indentationByLevels:(long long)arg1;
- (id)description;
- (id)initWithWidth:(NSUInteger)arg1;
- (id)init;

@end

