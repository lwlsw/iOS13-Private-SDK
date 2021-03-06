//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, RKMessageResponseManager;
@protocol TILinguisticDataSourceMessage;

@interface TIRecipientModel : NSObject
{
    NSString *_identifier;
    RKMessageResponseManager *_trainer;
    id <TILinguisticDataSourceMessage> _lastMessage;
}

@property(retain, nonatomic) id <TILinguisticDataSourceMessage> lastMessage; // @synthesize lastMessage=_lastMessage;
@property(retain, nonatomic) RKMessageResponseManager *trainer; // @synthesize trainer=_trainer;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (void)handleMessages:(id)arg1;
- (id)languageGuessForString:(id)arg1;
- (id)initWithCompositeName:(id)arg1 andTrainer:(id)arg2;

@end

