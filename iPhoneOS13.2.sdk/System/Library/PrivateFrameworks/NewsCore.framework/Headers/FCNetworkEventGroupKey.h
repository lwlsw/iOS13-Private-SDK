//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface FCNetworkEventGroupKey : NSObject <NSCopying>
{
    long long _eventType;
    NSUInteger _sessionID;
    NSString *_respondingPOP;
}

@property(retain, nonatomic) NSString *respondingPOP; // @synthesize respondingPOP=_respondingPOP;
@property(nonatomic) NSUInteger sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) long long eventType; // @synthesize eventType=_eventType;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;

@end

