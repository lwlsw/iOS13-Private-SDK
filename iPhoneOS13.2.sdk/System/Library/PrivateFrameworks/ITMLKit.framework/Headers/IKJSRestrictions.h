//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <ITMLKit/IKJSRestrictions-Protocol.h>
#import <ITMLKit/_IKJSRestrictions-Protocol.h>
#import <ITMLKit/_IKJSRestrictionsProxy-Protocol.h>

@class NSString;

@interface IKJSRestrictions : IKJSObject <NSObject, IKJSRestrictions, _IKJSRestrictionsProxy, _IKJSRestrictions>
{
}

+ (id)restrictionsDidChangeNotificationName;
- (id)_contentRestrictionsCountryCode;
- (id)_ratingForSetting:(id)arg1 domain:(id)arg2 countryCode:(id)arg3;
@property(readonly, nonatomic) BOOL allowsShowingUndownloadedMovies;
@property(readonly, nonatomic) BOOL allowsShowingUndownloadedTVShows;
@property(readonly, nonatomic) BOOL allowsITunes;
@property(readonly, nonatomic) BOOL allowsExplicit;
@property(readonly, nonatomic) BOOL allowsErotica;
@property(readonly, nonatomic) BOOL allowArtistActivity;
- (id)maxTVShowRatingForCountry:(id)arg1;
- (id)maxMovieRatingForCountry:(id)arg1;
@property(readonly, nonatomic) BOOL appAnalyticsAllowed;
@property(readonly, nonatomic) BOOL appInstallationAllowed;
@property(readonly, nonatomic) NSString *maxAppRating;
@property(readonly, nonatomic) long long maxTVShowRank;
@property(readonly, nonatomic) long long maxMovieRank;
@property(readonly, nonatomic) long long maxAppRank;
- (id)asPrivateIKJSRestrictions;

@end

