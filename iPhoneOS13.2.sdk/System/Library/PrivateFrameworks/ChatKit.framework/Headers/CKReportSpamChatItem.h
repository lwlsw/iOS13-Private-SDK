//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKStampChatItem.h>

@class NSAttributedString;

@interface CKReportSpamChatItem : CKStampChatItem
{
    NSAttributedString *_transcriptButtonText;
}

@property(copy, nonatomic) NSAttributedString *transcriptButtonText; // @synthesize transcriptButtonText=_transcriptButtonText;
- (_Bool)showReportSMSSpam;
- (_Bool)hasMultipleMessages;
- (_Bool)isGroupChat;
@property(readonly, copy, nonatomic) NSAttributedString *internalPhishingWarning;
- (id)transcriptTextForSpam:(_Bool)arg1;
- (id)loadTranscriptText;
- (struct CGSize)loadSizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(out struct UIEdgeInsets *)arg2;
- (Class)cellClass;

@end
