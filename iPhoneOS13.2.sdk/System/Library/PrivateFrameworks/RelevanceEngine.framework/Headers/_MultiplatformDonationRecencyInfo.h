//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface _MultiplatformDonationRecencyInfo : NSObject
{
    NSString *_remoteBundleIdentifier;
    NSString *_localBundleIdentifier;
    NSDate *_remoteDonationCreationDate;
    NSDate *_localDonationCreationDate;
}

@property(retain, nonatomic) NSDate *localDonationCreationDate; // @synthesize localDonationCreationDate=_localDonationCreationDate;
@property(retain, nonatomic) NSDate *remoteDonationCreationDate; // @synthesize remoteDonationCreationDate=_remoteDonationCreationDate;
@property(copy, nonatomic) NSString *localBundleIdentifier; // @synthesize localBundleIdentifier=_localBundleIdentifier;
@property(copy, nonatomic) NSString *remoteBundleIdentifier; // @synthesize remoteBundleIdentifier=_remoteBundleIdentifier;
// - (void).cxx_destruct;
- (id)identifierForMostRecentData;

@end

