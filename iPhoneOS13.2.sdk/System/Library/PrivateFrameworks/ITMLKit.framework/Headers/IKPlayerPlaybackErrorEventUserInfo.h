//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/IKPlayerEventMarshaling-Protocol.h>

@class NSDictionary, NSError;

@interface IKPlayerPlaybackErrorEventUserInfo : NSObject <IKPlayerEventMarshaling>
{
    BOOL _shouldStopDueToError;
    NSError *_error;
}

@property(readonly, nonatomic) BOOL shouldStopDueToError; // @synthesize shouldStopDueToError=_shouldStopDueToError;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *properties;
- (id)initWithError:(id)arg1 shouldStopDueToError:(BOOL)arg2;

@end

