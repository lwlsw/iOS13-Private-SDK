//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSString;

@interface SARollbackRequest : SABaseCommand <SAServerBoundCommand>
{
}

+ (id)rollbackRequestWithDictionary:(id)arg1 context:(id)arg2;
+ (id)rollbackRequest;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *requestId;
@property(copy, nonatomic) NSString *reason;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

