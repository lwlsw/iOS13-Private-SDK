//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSData;

@interface SAIntentGroupIntentDefinitionInfo : AceObject <SAAceSerializable>
{
}

+ (id)intentDefinitionInfoWithDictionary:(id)arg1 context:(id)arg2;
+ (id)intentDefinitionInfo;
@property(copy, nonatomic) NSData *intentDefinition;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

