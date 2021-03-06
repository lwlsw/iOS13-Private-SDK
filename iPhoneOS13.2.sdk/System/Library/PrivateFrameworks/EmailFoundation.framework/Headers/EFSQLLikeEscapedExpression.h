//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailFoundation/EFSQLExpressable-Protocol.h>

@class NSString;

@interface EFSQLLikeEscapedExpression : NSObject <EFSQLExpressable>
{
    unsigned short _escapeCharacter;
    NSString *_value;
    NSUInteger _pattern;
}

@property(readonly, nonatomic) NSUInteger pattern; // @synthesize pattern=_pattern;
@property(readonly, nonatomic) unsigned short escapeCharacter; // @synthesize escapeCharacter=_escapeCharacter;
@property(readonly, nonatomic) NSString *value; // @synthesize value=_value;
// - (void).cxx_destruct;
- (id)_stringForPattern:(NSUInteger)arg1 literal:(id)arg2;
@property(readonly, copy, nonatomic) NSString *ef_SQLExpression;
- (id)initWithValue:(id)arg1 pattern:(NSUInteger)arg2 escapeCharacter:(unsigned short)arg3;
- (id)initWithValue:(id)arg1 pattern:(NSUInteger)arg2;
- (id)initWithValue:(id)arg1;

@end

