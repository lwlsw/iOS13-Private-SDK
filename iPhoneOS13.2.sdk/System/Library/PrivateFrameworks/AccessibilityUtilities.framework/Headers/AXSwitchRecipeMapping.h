//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AXReplayableGesture, NSString, NSUUID;

@interface AXSwitchRecipeMapping : NSObject
{
    BOOL _optional;
    NSString *_action;
    NSString *_longPressAction;
    AXReplayableGesture *_gesture;
    AXReplayableGesture *_longPressGesture;
    NSUUID *_switchUUID;
    long long _switchOriginalAction;
    CGPoint _holdPoint;
}

+ (id)recipeMappingWithDictionaryRepresentation:(id)arg1;
@property(nonatomic) long long switchOriginalAction; // @synthesize switchOriginalAction=_switchOriginalAction;
@property(copy, nonatomic) NSUUID *switchUUID; // @synthesize switchUUID=_switchUUID;
@property(nonatomic, getter=isOptional) BOOL optional; // @synthesize optional=_optional;
@property(nonatomic) CGPoint holdPoint; // @synthesize holdPoint=_holdPoint;
@property(retain, nonatomic) AXReplayableGesture *longPressGesture; // @synthesize longPressGesture=_longPressGesture;
@property(retain, nonatomic) AXReplayableGesture *gesture; // @synthesize gesture=_gesture;
@property(copy, nonatomic) NSString *longPressAction; // @synthesize longPressAction=_longPressAction;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
// - (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)dictionaryRepresentation;

@end

