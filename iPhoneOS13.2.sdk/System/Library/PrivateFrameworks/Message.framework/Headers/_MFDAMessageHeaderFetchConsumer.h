//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/MFDASyncResponseConsumer-Protocol.h>

@class MFDAMessageStore, MFError, NSData;

@interface _MFDAMessageHeaderFetchConsumer : NSObject <MFDASyncResponseConsumer>
{
    BOOL _succeeded;
    MFError *_error;
    NSData *_data;
    MFDAMessageStore *_store;
}

@property(retain, nonatomic) MFDAMessageStore *store; // @synthesize store=_store;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) MFError *error; // @synthesize error=_error;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL succeeded; // @synthesize succeeded=_succeeded;
- (void)handleResponse:(id)arg1 error:(id)arg2;
- (BOOL)wantsData;

@end

