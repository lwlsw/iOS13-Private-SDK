//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesShared/CRCoding-Protocol.h>
#import <NotesShared/CRDataType-Protocol.h>
#import <NotesShared/TTMergeableStringDelegate-Protocol.h>

@class CRDocument, NSArray, NSString, NSUUID, TTMergeableAttributedString;
@protocol CRUndoDelegate;

@interface TTArray : NSObject <CRCoding, TTMergeableStringDelegate, CRDataType>
{
    CRDocument *_document;
    NSObject<CRUndoDelegate> *_delegate;
    TTMergeableAttributedString *_contents;
}

@property(readonly, nonatomic) TTMergeableAttributedString *contents; // @synthesize contents=_contents;
@property(nonatomic) __weak NSObject<CRUndoDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CRDocument *document; // @synthesize document=_document;
// - (void).cxx_destruct;
- (BOOL)wantsUndoCommands;
- (void)addUndoCommand:(id)arg1;
- (void)edited:(NSUInteger)arg1 range:(NSRange *)arg2 changeInLength:(long long)arg3;
- (void)endEditing;
- (void)beginEditing;
- (void)walkGraph:(CDUnknownBlockType)arg1;
- (id)tombstone;
- (void)realizeLocalChangesIn:(id)arg1;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)mergeWith:(id)arg1;
@property(readonly, nonatomic) NSArray *nsArray;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSUUID *replicaUUID;
@property(readonly, nonatomic) NSUInteger count;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)objectAtIndexedSubscript:(NSUInteger)arg1;
- (void)replaceObjectAtIndex:(NSUInteger)arg1 withObject:(id)arg2;
- (void)removeObjectAtIndex:(NSUInteger)arg1;
- (void)removeLastObject;
- (void)insertObject:(id)arg1 atIndex:(NSUInteger)arg2;
- (NSUInteger)indexOfObject:(id)arg1;
- (void)addObject:(id)arg1;
- (id)textAttachmentAtIndex:(NSUInteger)arg1;
- (id)objectAtIndex:(NSUInteger)arg1;
- (id)initWithContents:(id)arg1;
- (id)initWithDocument:(id)arg1;
- (id)init;
- (void)encodeWithCRCoder:(id)arg1;
//  (id)initWithCRCoder:(id)arg1 stringArray:(const struct StringArray )arg2;
- (id)initWithCRCoder:(id)arg1;
//  (void)saveToArchive:(struct StringArray )arg1;
//  (id)initWithArchive:(const struct StringArray )arg1 andReplicaID:(id)arg2;
//  (id)serializeDataFromArchive:(const struct StringArray )arg1;

@end

