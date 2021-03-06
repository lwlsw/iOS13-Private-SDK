//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/DMFTaskRequest.h>

@class NSData, NSString;

@interface DMFInstallProfileRequest : DMFTaskRequest
{
    NSUInteger _style;
    NSUInteger _type;
    NSString *_managingProfileIdentifier;
    NSData *_profileData;
    NSString *_personaID;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
@property(copy, nonatomic) NSString *personaID; // @synthesize personaID=_personaID;
@property(copy, nonatomic) NSData *profileData; // @synthesize profileData=_profileData;
@property(copy, nonatomic) NSString *managingProfileIdentifier; // @synthesize managingProfileIdentifier=_managingProfileIdentifier;
@property(nonatomic) NSUInteger type; // @synthesize type=_type;
@property(nonatomic) NSUInteger style; // @synthesize style=_style;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

