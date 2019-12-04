//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSString, PBDataReader;

@interface GEOLogMsgEventUserAction : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSString *_userActionEventKey;
    NSString *_userActionEventValue;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _userActionEventAction;
    int _userActionEventTarget;
    struct {
        unsigned int has_userActionEventAction:1;
        unsigned int has_userActionEventTarget:1;
        unsigned int read_userActionEventKey:1;
        unsigned int read_userActionEventValue:1;
        unsigned int wrote_userActionEventKey:1;
        unsigned int wrote_userActionEventValue:1;
        unsigned int wrote_userActionEventAction:1;
        unsigned int wrote_userActionEventTarget:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsUserActionEventAction:(id)arg1;
- (id)userActionEventActionAsString:(int)arg1;
@property(nonatomic) _Bool hasUserActionEventAction;
@property(nonatomic) int userActionEventAction;
- (int)StringAsUserActionEventTarget:(id)arg1;
- (id)userActionEventTargetAsString:(int)arg1;
@property(nonatomic) _Bool hasUserActionEventTarget;
@property(nonatomic) int userActionEventTarget;
@property(retain, nonatomic) NSString *userActionEventValue;
@property(readonly, nonatomic) _Bool hasUserActionEventValue;
- (void)_readUserActionEventValue;
@property(retain, nonatomic) NSString *userActionEventKey;
@property(readonly, nonatomic) _Bool hasUserActionEventKey;
- (void)_readUserActionEventKey;
- (id)initWithData:(id)arg1;
- (id)init;

@end
