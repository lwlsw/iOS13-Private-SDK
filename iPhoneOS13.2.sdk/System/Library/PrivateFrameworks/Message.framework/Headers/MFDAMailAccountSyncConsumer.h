//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/MFDAMailAccountConsumer.h>

#import <Message/DAMailboxRequestConsumer-Protocol.h>
#import <Message/DAMailboxStreamingContentConsumer-Protocol.h>

@class MFActivityMonitor, NSArray, NSConditionLock, NSMutableData, NSMutableDictionary, NSString;
@protocol DAMailboxStreamingContentConsumer;

@interface MFDAMailAccountSyncConsumer : MFDAMailAccountConsumer <DAMailboxRequestConsumer, DAMailboxStreamingContentConsumer>
{
    NSArray *_requestPairs;
    NSString *_accountID;
    MFActivityMonitor *_monitor;
    NSMutableData *_bodyData;
    BOOL _receivedFirstItem;
    BOOL _firstSyncBatch;
    int _syncKeyResets;
    int _serverErrors;
    NSMutableDictionary *_syncResponseConsumersByMessageId;
    NSConditionLock *_accountHierarchyLock;
    BOOL _moreAvailable;
    NSString *_tag;
    id <DAMailboxStreamingContentConsumer> _streamConsumer;
}

@property(readonly, nonatomic) BOOL moreAvailable; // @synthesize moreAvailable=_moreAvailable;
@property(retain, nonatomic) id <DAMailboxStreamingContentConsumer> streamConsumer; // @synthesize streamConsumer=_streamConsumer;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
// - (void).cxx_destruct;
- (BOOL)refreshFolderHierarchyAndWait:(NSUInteger)arg1;
- (void)accountHierarchyChanged:(id)arg1;
- (void)taskFailed:(id)arg1 statusCode:(long long)arg2 error:(id)arg3;
- (void)didEndStreamingForMailMessage:(id)arg1;
- (void)consumeData:(char )arg1 length:(int)arg2 format:(int)arg3 mailMessage:(id)arg4;
- (BOOL)shouldBeginStreamingForMailMessage:(id)arg1 format:(int)arg2;
- (void)resultsForMailbox:(id)arg1 newTag:(id)arg2 actions:(id)arg3 responses:(id)arg4 percentComplete:(double)arg5 moreAvailable:(BOOL)arg6 sentBytesCount:(NSUInteger)arg7 receivedBytesCount:(NSUInteger)arg8;
- (void)partialResultsForMailbox:(id)arg1 actions:(id)arg2 responses:(id)arg3 percentComplete:(double)arg4 moreAvailable:(BOOL)arg5;
- (void)handleSyncResponses:(id)arg1;
- (id)actionsConsumer;
- (id)originalThreadMonitor;
- (void)reset;
- (id)initWithCurrentTag:(id)arg1 accountID:(id)arg2 requests:(id)arg3;

@end

