//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MRAVOutputContextModification : NSObject
{
    unsigned long long _modificationType;
    NSArray *_concreteOutputDevices;
    NSArray *_outputDevices;
    NSArray *_avOutputDevices;
    NSString *_password;
    NSString *_initiator;
}

@property(copy, nonatomic) NSString *initiator; // @synthesize initiator=_initiator;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, nonatomic) NSArray *avOutputDevices; // @synthesize avOutputDevices=_avOutputDevices;
@property(readonly, nonatomic) NSArray *outputDevices; // @synthesize outputDevices=_outputDevices;
@property(readonly, nonatomic) NSArray *concreteOutputDevices; // @synthesize concreteOutputDevices=_concreteOutputDevices;
@property(readonly, nonatomic) unsigned long long modificationType; // @synthesize modificationType=_modificationType;
- (id)errorFromResult:(id)arg1;
- (void)_modifyWithOutputContext:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)modifyWithOutputContext:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithType:(unsigned long long)arg1 devices:(id)arg2;

@end
