//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TSKChangeGroup : NSObject <NSCopying>
{
    NSMutableArray *_changesArray;
}

@property(readonly, nonatomic) NSMutableArray *changesArray; // @synthesize changesArray=_changesArray;
- (void)registerChange:(int)arg1 details:(id)arg2 forChangeSource:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithChangesArray:(id)arg1;

@end
