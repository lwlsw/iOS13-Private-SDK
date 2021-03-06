//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HAPBTLERequest, HAPBTLETransactionIdentifier, NSData, NSMutableData;

@interface HAPBTLEResponse : HMFObject
{
    BOOL _headerComplete;
    unsigned char _statusCode;
    HAPBTLERequest *_request;
    HAPBTLETransactionIdentifier *_identifier;
    NSData *_body;
    NSUInteger _bodyLength;
    NSMutableData *__internalBody;
}

@property(retain, nonatomic, setter=_setInternalBody:) NSMutableData *_internalBody; // @synthesize _internalBody=__internalBody;
@property(readonly, nonatomic) unsigned char statusCode; // @synthesize statusCode=_statusCode;
@property(readonly, nonatomic) NSUInteger bodyLength; // @synthesize bodyLength=_bodyLength;
@property(copy, nonatomic) NSData *body; // @synthesize body=_body;
@property(nonatomic, getter=isHeaderComplete) BOOL headerComplete; // @synthesize headerComplete=_headerComplete;
@property(readonly, nonatomic) HAPBTLETransactionIdentifier *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) HAPBTLERequest *request; // @synthesize request=_request;
// - (void).cxx_destruct;
- (NSUInteger)_deserializeHeaderBodyLengthWithData:(id)arg1 error:(id )arg2;
- (NSUInteger)_deserializeHeaderWithData:(id)arg1 error:(id )arg2;
- (NSUInteger)appendData:(id)arg1 error:(id )arg2;
- (NSUInteger)_remainingBodyLength;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
@property(readonly, nonatomic, getter=isBodyComplete) BOOL bodyComplete;
@property(readonly, nonatomic, getter=isComplete) BOOL complete;
@property(readonly, nonatomic, getter=isEncrypted) BOOL encrypted;
- (id)description;
- (id)debugDescription;
- (id)descriptionWithPointer:(BOOL)arg1;
- (id)shortDescription;
- (id)initWithRequest:(id)arg1;
- (id)init;

@end

