//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class ECSubject, EDPBMessageHeaders, NSString;
@protocol ECMailAccount, ECMailbox, ECMessage;

@protocol EDPBHasher
- (EDPBMessageHeaders *)hashedMessageHeadersForMessage:(id <ECMessage>)arg1;
- (long long)hashedConversationID:(long long)arg1;
- (long long)hashedMailboxID:(id <ECMailbox>)arg1;
- (long long)hashedAccountID:(id <ECMailAccount>)arg1;
// - (CDStruct_5df41632)hashedSubject:(ECSubject *)arg1;
- (long long)hashedContactIDForAddress:(NSString *)arg1;
- (long long)hashedString:(NSString *)arg1;
@end

