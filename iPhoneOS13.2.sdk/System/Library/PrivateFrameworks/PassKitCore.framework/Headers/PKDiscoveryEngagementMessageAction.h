//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSDictionary, NSString;

@interface PKDiscoveryEngagementMessageAction : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_titleKey;
    long long _type;
    NSDictionary *_actionInfo;
    NSString *_localizedTitle;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(retain, nonatomic) NSDictionary *actionInfo; // @synthesize actionInfo=_actionInfo;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *titleKey; // @synthesize titleKey=_titleKey;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)localizeWithBundle:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
