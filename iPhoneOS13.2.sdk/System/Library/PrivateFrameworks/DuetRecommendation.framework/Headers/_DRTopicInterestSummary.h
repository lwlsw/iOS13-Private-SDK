//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@interface _DRTopicInterestSummary : NSObject <NSCoding, NSCopying>
{
    unsigned long long _topicSelectionsCount;
    unsigned long long _topicPresentationsCount;
}

@property unsigned long long topicPresentationsCount; // @synthesize topicPresentationsCount=_topicPresentationsCount;
@property unsigned long long topicSelectionsCount; // @synthesize topicSelectionsCount=_topicSelectionsCount;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithPresentationsCount:(unsigned long long)arg1 selectionsCount:(unsigned long long)arg2;

@end
