//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSNumber, NSString;

@interface SANPSetVolumeLevel : SABaseClientBoundCommand
{
}

+ (id)setVolumeLevelWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setVolumeLevel;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSNumber *volumeValue;
@property(copy, nonatomic) NSArray *hashedRouteUIDs;
@property(copy, nonatomic) NSString *actionType;
@property(nonatomic) BOOL acknowledgedExceedingVolumeLimit;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

