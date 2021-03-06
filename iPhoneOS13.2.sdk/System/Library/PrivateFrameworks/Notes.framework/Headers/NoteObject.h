//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

#import <Notes/ICSearchIndexableNote-Protocol.h>

@class NSArray, NSData, NSString, NSURL;

@interface NoteObject : NSManagedObject <ICSearchIndexableNote>
{
}

- (BOOL)belongsToCollection:(id)arg1;
@property(nonatomic) NSUInteger sequenceNumber;
- (BOOL)containsAttachments;
@property(retain, nonatomic) NSString *externalContentRef;
@property(retain, nonatomic) NSData *externalRepresentation;
@property(readonly, nonatomic) BOOL hasValidServerIntId;
@property(nonatomic) long long serverIntId;
@property(nonatomic) NSUInteger flags;
@property(readonly, nonatomic) NSURL *noteId;
@property(readonly, nonatomic) BOOL isBeingMarkedForDeletion;
@property(readonly, nonatomic) BOOL isMarkedForDeletion;
- (void)markForDeletion;
@property(nonatomic) BOOL isPlainText;
@property(readonly, nonatomic) NSString *contentAsPlainTextPreservingNewlines;
@property(readonly, nonatomic) NSString *contentAsPlainText;
@property(retain, nonatomic) NSString *content;
@property(retain, nonatomic) NSString *title; // @dynamic title;
- (id)defaultTitleForEmptyNote;
- (id)dataForTypeIdentifier:(id)arg1;
- (id)searchableItemAttributeSet;
- (id)userActivityContentAttributeSet;
- (id)searchDomainIdentifier;
- (id)contentIdentifier;
- (id)searchIndexingIdentifier;
- (id)dateForCurrentSortType;
- (id)contentInfoText;
- (id)noteAsPlainTextWithoutTitle;
@property(readonly, nonatomic) NSArray *noteCellKeyPaths;
- (id)authorsExcludingCurrentUser;
- (BOOL)isHiddenFromSearch;
- (BOOL)searchResultCanBeDeletedFromNoteContext;
- (NSUInteger)searchResultType;
- (NSUInteger)searchResultsSection;
- (long long)visibilityTestingType;
- (id)identifier;
- (id)accountName;
- (id)folderNameForNoteList;
- (id)folderName;
- (id)trimmedTitle;
- (BOOL)isMovable;
- (BOOL)isSharedReadOnly;
- (BOOL)isSharedViaICloudFolder;
- (BOOL)isSharedViaICloud;
@property(readonly, nonatomic) BOOL isModernNote;
- (BOOL)isPasswordProtected;

@end

