//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSNumber;

@interface SALocalSearchNavigationPromptManeuver : SADomainCommand
{
}

+ (id)navigationPromptManeuverWithDictionary:(id)arg1 context:(id)arg2;
+ (id)navigationPromptManeuver;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSNumber *maneuverIndex;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

