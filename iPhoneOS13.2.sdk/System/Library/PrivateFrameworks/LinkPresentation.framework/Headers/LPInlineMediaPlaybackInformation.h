//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LPAudio, NSArray, NSString, NSURL;

@interface LPInlineMediaPlaybackInformation : NSObject
{
    unsigned long long _type;
    NSString *_storeIdentifier;
    NSString *_storefrontIdentifier;
    NSArray *_offers;
    NSURL *_previewURL;
    NSString *_persistentIdentifier;
    LPAudio *_audio;
}

@property(retain, nonatomic) LPAudio *audio; // @synthesize audio=_audio;
@property(copy, nonatomic) NSString *persistentIdentifier; // @synthesize persistentIdentifier=_persistentIdentifier;
@property(copy, nonatomic) NSURL *previewURL; // @synthesize previewURL=_previewURL;
@property(copy, nonatomic) NSArray *offers; // @synthesize offers=_offers;
@property(copy, nonatomic) NSString *storefrontIdentifier; // @synthesize storefrontIdentifier=_storefrontIdentifier;
@property(copy, nonatomic) NSString *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) _Bool isAvailableForAnonymousDownload;
- (unsigned long long)availability;
- (id)initWithType:(unsigned long long)arg1;

@end
