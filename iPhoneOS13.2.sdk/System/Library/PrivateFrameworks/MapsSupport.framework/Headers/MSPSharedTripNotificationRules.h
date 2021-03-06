//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDate;

__attribute__((visibility("hidden")))
@interface MSPSharedTripNotificationRules : NSObject <NSSecureCoding>
{
    BOOL _hasMadeFinalPush;
    NSUInteger _maxPostedNotifications;
    NSUInteger _postedNotifcations;
    double _minimumETADifference;
    double _minimumNotificationInterval;
    NSDate *_lastPostedETADate;
    NSDate *_lastPostedNotificationDate;
    NSDate *_lastUpdatedDate;
    NSDate *_currentETADate;
}

+ (BOOL)supportsSecureCoding;
+ (id)unarchivingObjectsSet;
@property(nonatomic) BOOL hasMadeFinalPush; // @synthesize hasMadeFinalPush=_hasMadeFinalPush;
@property(retain, nonatomic) NSDate *currentETADate; // @synthesize currentETADate=_currentETADate;
@property(retain, nonatomic) NSDate *lastUpdatedDate; // @synthesize lastUpdatedDate=_lastUpdatedDate;
@property(retain, nonatomic) NSDate *lastPostedNotificationDate; // @synthesize lastPostedNotificationDate=_lastPostedNotificationDate;
@property(retain, nonatomic) NSDate *lastPostedETADate; // @synthesize lastPostedETADate=_lastPostedETADate;
@property(nonatomic) double minimumNotificationInterval; // @synthesize minimumNotificationInterval=_minimumNotificationInterval;
@property(nonatomic) double minimumETADifference; // @synthesize minimumETADifference=_minimumETADifference;
@property(nonatomic) NSUInteger postedNotifcations; // @synthesize postedNotifcations=_postedNotifcations;
@property(nonatomic) NSUInteger maxPostedNotifications; // @synthesize maxPostedNotifications=_maxPostedNotifications;
// - (void).cxx_destruct;
- (double)minimumETADifferenceIncrement;
- (void)incrementMinimumETADiffernce;
- (void)didReceiveUpdateWithETA:(double)arg1 lastUpdated:(double)arg2;
@property(readonly, nonatomic) NSUInteger currentlyNecessaryNotificationType;
- (void)didPostNotification;
- (id)description;
- (id)initWithMaximumNumberOfNotifications:(NSUInteger)arg1 minimumNotificationInterval:(double)arg2;
- (id)initWithMaximumNumberOfNotifications:(NSUInteger)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

