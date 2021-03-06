//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HFAccessoryVendor-Protocol.h>

@class HFRoomBuilder, NAFuture, NSArray, NSString;
@protocol HFIconDescriptor;

@protocol HFServiceLikeBuilder <HFAccessoryVendor, NSObject>
@property(retain, nonatomic) HFRoomBuilder *room;
@property(readonly, nonatomic) BOOL supportsFavoriting;
@property(readonly, nonatomic) NSString *originalName;
@property(copy, nonatomic) NSString *name;
- (NAFuture *)removeItemFromHome;

@optional
@property(readonly, nonatomic) NSArray *availableIconDescriptors;
@property(retain, nonatomic) id <HFIconDescriptor> iconDescriptor;
@property(nonatomic) BOOL isFavorite;
@end

