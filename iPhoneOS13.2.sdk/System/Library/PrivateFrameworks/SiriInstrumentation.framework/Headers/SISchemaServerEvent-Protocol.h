//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSData, NSDictionary, NSNumber, PBCodable, SISchemaConversationTrace, SISchemaDeviceFixedContext, SISchemaServerEventMetadata, SISchemaSpeechResultSelected, SISchemaTurnInteraction, SISchemaUserSpeechDuration;

@protocol SISchemaServerEvent <NSObject>
+ (NSNumber *)getTagForEventTypeClass:(Class)arg1;
+ (Class)getEventTypeClassForTag:(int)arg1;
@property(readonly, nonatomic) NSUInteger whichEvent_Type;
@property(readonly, nonatomic) NSData *jsonData;
@property(retain, nonatomic) SISchemaDeviceFixedContext *serverDeviceFixedContext;
@property(retain, nonatomic) SISchemaSpeechResultSelected *speechResultSelected;
@property(retain, nonatomic) SISchemaTurnInteraction *turnInteraction;
@property(retain, nonatomic) SISchemaConversationTrace *serverConversationTrace;
@property(retain, nonatomic) SISchemaUserSpeechDuration *userSpeechDuration;
@property(retain, nonatomic) SISchemaServerEventMetadata *eventMetadata;
- (void)setEventType:(PBCodable *)arg1;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

