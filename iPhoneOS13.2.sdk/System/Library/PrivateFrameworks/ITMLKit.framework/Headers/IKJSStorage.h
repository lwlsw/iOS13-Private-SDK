//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <ITMLKit/IKJSStorage-Protocol.h>

@class NSMutableDictionary, NSObject;
@protocol IKAppDataStoring, OS_dispatch_queue;

@interface IKJSStorage : IKJSObject <IKJSStorage>
{
    struct {
        BOOL usesExternalDataStore;
        BOOL externalStorageHasDictionaryRepresentation;
    } _flags;
    id <IKAppDataStoring> _appStorage;
    NSMutableDictionary *_storageDict;
    NSObject<OS_dispatch_queue> *_storageQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *storageQueue; // @synthesize storageQueue=_storageQueue;
@property(retain, nonatomic) NSMutableDictionary *storageDict; // @synthesize storageDict=_storageDict;
@property(readonly, nonatomic) __weak id <IKAppDataStoring> appStorage; // @synthesize appStorage=_appStorage;
// - (void).cxx_destruct;
- (void)_verifyExternalDataStoreForKey:(id)arg1;
- (id)keysAndValues;
- (void)clear;
- (void)removeItem:(id)arg1;
- (void)setItem:(id)arg1:(id)arg2;
- (id)getItem:(id)arg1;
- (id)key:(NSUInteger)arg1;
@property(readonly, nonatomic) NSUInteger length;
- (id)initWithAppContext:(id)arg1 appStorage:(id)arg2;

@end

