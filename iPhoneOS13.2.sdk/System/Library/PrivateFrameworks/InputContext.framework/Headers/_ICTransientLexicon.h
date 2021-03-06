//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _ICTransientLexicon : NSObject
{
//     struct _LXLexicon _lexicon;
    int _count;
    unsigned char _typeFlags;
    NSString *_name;
    NSUInteger _entryCount;
}

@property(readonly, nonatomic) NSUInteger entryCount; // @synthesize entryCount=_entryCount;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) unsigned char typeFlags; // @synthesize typeFlags=_typeFlags;
// - (void).cxx_destruct;
// - (struct _LXLexicon )getLexiconImplementation;
// - (struct _LXEntry )copyEntryForString:(id)arg1;
- (id)getSortKeyEquivalents:(id)arg1;
- (BOOL)contains:(id)arg1;
- (void)removeEntriesBySource:(unsigned char)arg1;
- (void)removeAllEntries;
- (void)removeEntry:(id)arg1 source:(unsigned char)arg2;
- (BOOL)addEntry:(id)arg1 source:(unsigned char)arg2 type:(unsigned char)arg3;
- (id)initWithName:(id)arg1 typeFlags:(unsigned char)arg2;
- (void)dealloc;
- (id)getUsageCount:(id)arg1;
- (id)getEntryRefCount:(id)arg1;
- (id)getEntries;

@end

