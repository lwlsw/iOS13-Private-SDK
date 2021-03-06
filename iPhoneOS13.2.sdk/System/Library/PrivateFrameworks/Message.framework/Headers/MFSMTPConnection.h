//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/MFConnection.h>

@class MFSMTPResponse, NSMutableArray, NSMutableData, NSString;

@interface MFSMTPConnection : MFConnection
{
    MFSMTPResponse *_lastResponse;
    NSMutableArray *_serviceExtensions;
    NSMutableData *_mdata;
    NSString *_domainName;
    NSString *_saveSentMbox;
    int _originalSocketTimeout;
    long long _lastCommandTimestamp;
    id _delegate;
    BOOL _hideLoggedData;
    BOOL _useSaveSent;
    BOOL _dislikesSaveSentMbox;
}

// - (void).cxx_destruct;
- (void)setUseSaveSent:(BOOL)arg1 toFolder:(id)arg2;
- (BOOL)_supportsSaveSentExtension;
- (id)lastResponseLine;
- (void)_setLastResponse:(id)arg1;
- (BOOL)_supportsExtension:(id)arg1;
- (BOOL)_hasParameter:(id)arg1 forKeyword:(id)arg2;
- (int)_doHandshakeUsingAccount:(id)arg1;
- (BOOL)_connectUsingAccount:(id)arg1;
- (int)_readResponseRange:(NSRange * )arg1 isContinuation:(BOOL )arg2;
- (int)_getReply;
- (int)_sendCommand:(const char )arg1 length:(NSUInteger)arg2 argument:(id)arg3 trailer:(const char )arg4;
- (id)_dataForCommand:(const char )arg1 length:(NSUInteger)arg2 argument:(id)arg3 trailer:(const char )arg4;
- (int)_sendData:(id)arg1 progressHandler:(CDUnknownBlockType)arg2;
- (int)_sendData:(id)arg1;
- (int)_sendBytes:(const char )arg1 length:(NSUInteger)arg2 progressHandler:(CDUnknownBlockType)arg3;
- (long long)timeLastCommandWasSent;
- (long long)mailFrom:(id)arg1 recipients:(id)arg2 withData:(id)arg3 host:(id)arg4 errorTitle:(id )arg5 errorMessage:(id )arg6 serverResponse:(id )arg7 displayError:(BOOL )arg8 errorCode:(int )arg9 errorUserInfo:(id )arg10;
- (id)dataForDataCmd;
- (id)dataForRcptTo:(id)arg1;
- (id)dataForMailFrom:(id)arg1;
- (void)abort;
- (int)quit;
- (int)sendData:(id)arg1;
- (int)sendBData:(id)arg1;
- (int)noop;
- (int)rcptTo:(id)arg1;
- (int)mailFrom:(id)arg1;
- (BOOL)connectUsingAccount:(id)arg1;
- (BOOL)authenticateUsingAccount:(id)arg1 authenticator:(id)arg2;
- (BOOL)authenticateUsingAccount:(id)arg1;
- (id)authenticationMechanisms;
- (NSUInteger)maximumMessageBytes;
- (BOOL)supportsChunking;
- (BOOL)supportsEnhancedStatusCodes;
- (BOOL)supportsBinaryMime;
- (BOOL)supports8BitMime;
- (BOOL)supportsPipelining;
- (BOOL)supportsOutboxCopy;
- (void)setDomainName:(id)arg1;
- (id)domainName;
- (id)lastResponse;
- (int)state;
- (void)setDelegate:(id)arg1;
- (id)init;

@end

