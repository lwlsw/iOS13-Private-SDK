//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HMBSQLStatementQueryPlanTuple : HMFObject
{
    int _row;
    int _parent;
    NSString *_detail;
}

@property(readonly, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(readonly, nonatomic) int parent; // @synthesize parent=_parent;
@property(readonly, nonatomic) int row; // @synthesize row=_row;
- (id)initWithRow:(id)arg1;

@end
