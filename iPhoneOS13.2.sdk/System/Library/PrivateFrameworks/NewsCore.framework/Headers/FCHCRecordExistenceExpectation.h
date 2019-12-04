//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCHCExpectation-Protocol.h>

@class CKDatabase, CKRecordID, NSString;

@interface FCHCRecordExistenceExpectation : NSObject <FCHCExpectation>
{
    _Bool _shouldExist;
    CKDatabase *_database;
    CKRecordID *_recordID;
}

@property(nonatomic) _Bool shouldExist; // @synthesize shouldExist=_shouldExist;
@property(copy, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
@property(retain, nonatomic) CKDatabase *database; // @synthesize database=_database;
- (void)validate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
