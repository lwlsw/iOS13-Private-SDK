//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CompanionSync/SYChangeTracking-Protocol.h>

@class NSDictionary, NSMutableArray, SYLegacyStore;
@protocol OS_os_transaction;

@interface SYTransaction : NSObject <SYChangeTracking>
{
    _Atomic BOOL _inTransaction;
    NSObject<OS_os_transaction> *_transaction;
    NSDictionary *_contextInfo;
    NSDictionary *_idsOptions;
    id /* CDUnknownBlockType */ _completion;
    SYLegacyStore *_store;
    NSMutableArray *_changes;
}

@property(retain, nonatomic) NSMutableArray *changes; // @synthesize changes=_changes;
@property(retain, nonatomic) SYLegacyStore *store; // @synthesize store=_store;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completion; // @synthesize completion=_completion;
@property(copy, nonatomic) NSDictionary *idsOptions; // @synthesize idsOptions=_idsOptions;
@property(copy, nonatomic) NSDictionary *contextInfo; // @synthesize contextInfo=_contextInfo;
// - (void).cxx_destruct;
- (void)_transactionDidComplete:(BOOL)arg1;
- (void)rollback;
- (void)commitBlocking:(BOOL)arg1 reportError:(CDUnknownBlockType)arg2;
- (void)commit;
- (void)deleteObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3;
- (void)updateObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3;
- (void)addObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3;
- (void)deleteObject:(id)arg1 context:(id)arg2;
- (void)updateObject:(id)arg1 context:(id)arg2;
- (void)addObject:(id)arg1 context:(id)arg2;
- (void)deleteObject:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateObject:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addObject:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteObject:(id)arg1;
- (void)updateObject:(id)arg1;
- (void)addObject:(id)arg1;
- (id)changeList;
- (BOOL)_endTransaction;
- (BOOL)_beginTransaction;
- (void)dealloc;
- (id)initWithStore:(id)arg1;

@end

