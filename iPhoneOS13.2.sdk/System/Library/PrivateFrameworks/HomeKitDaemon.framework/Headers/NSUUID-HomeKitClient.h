//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface NSUUID (HomeKitClient)
+ (void)setIdentifierSalt:(id)arg1 assistantSalt:(BOOL)arg2;
+ (id)deriveUUIDForAssistantFromBaseUUID:(id)arg1 withSalts:(id)arg2;
+ (id)deriveUUIDForAssistantFromBaseUUID:(id)arg1;
+ (id)deriveUUIDFromBaseUUID:(id)arg1 withSalts:(id)arg2;
+ (id)deriveUUIDFromBaseUUID:(id)arg1;
+ (id)deriveUUIDFromBaseUUID:(id)arg1 identifierSalt:(id)arg2 withSalts:(id)arg3;
+ (id)deriveUUIDFromBaseUUID:(id)arg1 identifierSalt:(id)arg2;
+ (id)uuid:(id)arg1 identifierSalt:(id)arg2 withSalts:(id)arg3;
- (id)convertToData;
@end

