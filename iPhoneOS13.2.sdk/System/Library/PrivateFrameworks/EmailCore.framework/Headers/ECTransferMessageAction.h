//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailCore/ECLocalMessageAction.h>

#import <EmailCore/ECTransferMessageActionBuilder-Protocol.h>

@class NSArray, NSMutableOrderedSet, NSString, NSURL;

@interface ECTransferMessageAction : ECLocalMessageAction <ECTransferMessageActionBuilder>
{
    NSMutableOrderedSet *_itemsToDownload;
    NSMutableOrderedSet *_itemsToCopy;
    NSMutableOrderedSet *_itemsToDelete;
    long long _transferType;
    NSURL *_sourceMailboxURL;
    NSURL *_destinationMailboxURL;
}

@property(retain, nonatomic) NSURL *destinationMailboxURL; // @synthesize destinationMailboxURL=_destinationMailboxURL;
@property(retain, nonatomic) NSURL *sourceMailboxURL; // @synthesize sourceMailboxURL=_sourceMailboxURL;
@property(nonatomic) long long transferType; // @synthesize transferType=_transferType;
// - (void).cxx_destruct;
- (void)updateWithFailedItems:(id)arg1 forPhase:(long long)arg2;
- (void)updateWithCompletedItems:(id)arg1 forPhase:(long long)arg2;
@property(retain, nonatomic) NSArray *itemsToDelete;
@property(retain, nonatomic) NSArray *itemsToCopy;
@property(retain, nonatomic) NSArray *itemsToDownload;
@property(readonly, copy) NSString *description;
- (id)init;
- (id)initWithBuilder:(CDUnknownBlockType)arg1;

@end

