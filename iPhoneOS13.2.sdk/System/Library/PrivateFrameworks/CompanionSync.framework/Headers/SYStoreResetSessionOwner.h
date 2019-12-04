//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CompanionSync/SYStoreSessionOwner.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SYStoreResetSessionOwner : SYStoreSessionOwner
{
    NSMutableArray *_buffer;
    long long _bufferedState;
    id /* block */ _fetchNextBatch;
}

@property(copy, nonatomic) id /* block */ fetchNextBatch; // @synthesize fetchNextBatch=_fetchNextBatch;
- (long long)syncSession:(id)arg1 enqueueChanges:(id /* block */)arg2 error:(id *)arg3;
- (long long)_sendBufferedChanges:(id /* block */)arg1;
- (_Bool)isResetSync;
- (id)init;

@end
