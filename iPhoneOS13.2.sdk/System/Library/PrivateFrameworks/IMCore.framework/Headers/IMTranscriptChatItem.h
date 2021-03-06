//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMCore/IMChatItem.h>

#import <IMCore/IMChatTranscriptItem-Protocol.h>

@class IMHandle, IMServiceImpl, NSAttributedString, NSDate, NSString;

@interface IMTranscriptChatItem : IMChatItem <IMChatTranscriptItem>
{
    NSString *_guid;
    unsigned char _contiguousType;
    unsigned char _attachmentContiguousType;
    unsigned int _contiguousLoaded:1;
}

@property(copy, nonatomic, setter=_setGUID:) NSString *guid; // @synthesize guid=_guid;
// - (void).cxx_destruct;
- (void)_setAttachmentContiguousType:(unsigned char)arg1;
- (void)_setContiguousType:(unsigned char)arg1;
- (void)_setContiguousLoaded:(BOOL)arg1;
- (BOOL)_isContiguousLoaded;
@property(readonly, nonatomic) IMHandle *handle;
@property(readonly, nonatomic) IMServiceImpl *service;
@property(readonly, nonatomic) NSDate *transcriptDate;
@property(readonly, copy, nonatomic) NSAttributedString *transcriptText;
@property(readonly, nonatomic) BOOL wantsTail;
@property(readonly, nonatomic, getter=isFromMe) BOOL fromMe;
@property(readonly, nonatomic, getter=isContiguous) BOOL contiguous;
@property(readonly, nonatomic) unsigned char attachmentContiguousType;
@property(readonly, nonatomic) unsigned char contiguousType;
- (BOOL)isAttachmentContiguousWithChatItem:(id)arg1;
- (BOOL)isContiguousWithChatItem:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
@property(readonly, copy) NSString *description;

@end

