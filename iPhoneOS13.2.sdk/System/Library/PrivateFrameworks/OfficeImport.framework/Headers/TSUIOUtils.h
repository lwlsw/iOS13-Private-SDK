//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSUIOUtils : NSObject
{
}

+ (CGDataProvider )newCGDataProviderForReadChannel:(id)arg1;
+ (CGDataProvider )newCGDataProviderForInputStream:(id)arg1;
+ (void)readAllFromChannel:(id)arg1 offset:(long long)arg2 length:(NSUInteger)arg3 completion:(CDUnknownBlockType)arg4;

@end

