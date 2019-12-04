//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, PXMutableArrayChangeDetails;

@interface _PXChangeDetailsEntry : NSObject
{
    PXMutableArrayChangeDetails *_changeDetails;
    long long _index;
    NSMutableArray *_subitemEntries;
}

@property(readonly, nonatomic) NSMutableArray *subitemEntries; // @synthesize subitemEntries=_subitemEntries;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(readonly, nonatomic) PXMutableArrayChangeDetails *changeDetails; // @synthesize changeDetails=_changeDetails;
@property(readonly, nonatomic) NSDictionary *subitemChangesByItem;
- (void)updateWithSectionedChangeDetails:(id)arg1;
- (void)addSubitemEntry:(id)arg1;
- (id)initWithIndex:(long long)arg1 changeDetails:(id)arg2;

@end
