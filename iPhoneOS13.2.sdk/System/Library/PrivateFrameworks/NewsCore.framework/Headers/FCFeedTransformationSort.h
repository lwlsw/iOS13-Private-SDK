//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCFeedTransforming-Protocol.h>

@interface FCFeedTransformationSort : NSObject <FCFeedTransforming>
{
}

+ (id)transformationWithSortMethod:(long long)arg1 personalizer:(id)arg2;
+ (id)transformationWithSortMethod:(long long)arg1 configurationSet:(long long)arg2 personalizer:(id)arg3;
+ (id)transformationWithSortMethod:(long long)arg1;
- (id)transformFeedItems:(id)arg1;

@end

