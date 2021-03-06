//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACUIAppDescription, NSDate, NSURL;
@protocol ACUIAppInstallerDelegate;

@interface ACUIAppInstaller : NSObject
{
    ACUIAppDescription *_app;
    NSDate *_dateOfLastReachabilityCheck;
    BOOL _cachedReachabilityResult;
    NSDate *_dateOfLastInstallationCheck;
    BOOL _resultOfLastInstallationCheck;
    BOOL _needsAvailableInStoreCheck;
    BOOL _availableInStoreResult;
    NSURL *_publisherURL;
    id <ACUIAppInstallerDelegate> _delegate;
}

+ (id)currentStoreFront;
@property(nonatomic) __weak id <ACUIAppInstallerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSURL *publisherURL; // @synthesize publisherURL=_publisherURL;
// - (void).cxx_destruct;
- (void)checkAvailabilityInStore:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL isAvailableInStore;
- (void)_performAvailabilityCheck:(CDUnknownBlockType)arg1;
- (void)_setAvailableInStoreResult:(BOOL)arg1;
- (void)start;
- (void)fetchDownloadability:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL isDownloadable;
@property(readonly, nonatomic) BOOL requiresReachabilityCheckToDetermineDownloadability;
- (void)_performReachabilityCheck:(CDUnknownBlockType)arg1;
- (BOOL)_quicklyGenerateCachedReachabilityResultConsideringPublisherURL:(BOOL)arg1;
- (BOOL)_isGreenTeaAvailable;
- (void)_setCachedReachabilityResult:(BOOL)arg1;
@property(readonly, nonatomic) BOOL isInstalled;
- (id)initForAppWithDescription:(id)arg1;

@end

