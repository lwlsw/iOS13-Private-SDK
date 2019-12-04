//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, NSNumber, NSString, NSURL, NSUUID;

@protocol UIActivityContentDelegate 
- (NSString *)_titleForActivity:(NSString *)arg1;
- (void)_editActionsTapped;
- (NSURL *)fallbackURLForLinkPresentation;
- (NSArray *)requestMetadataValues;
- (void)showScreenTimeRestrictedAlert;
- (void)selectedActionWithIdentifier:(NSUUID *)arg1;
- (void)selectedAppWithIdentifier:(NSUUID *)arg1;
- (void)selectedPersonWithIdentifier:(NSUUID *)arg1;
- (void)nextButtonTappedWithPeopleProxies:(NSArray *)arg1 shareProxies:(NSArray *)arg2 actionProxies:(NSArray *)arg3 nearbyCountSlotID:(NSNumber *)arg4;
- (void)optionsButtonTapped;
- (void)closeButtonTapped;
@end
