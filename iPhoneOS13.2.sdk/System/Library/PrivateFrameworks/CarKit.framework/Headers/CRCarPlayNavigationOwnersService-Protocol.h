//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString;

@protocol CRCarPlayNavigationOwnersService <NSObject>
- (void)fetchNavigationIdentifierWithReply:(void (^)(NSString *))arg1;
- (void)fetchNavigationOwnerWithReply:(void (^)(NSUInteger))arg1;
- (void)removeNavigationOwnerWithIdentifier:(NSString *)arg1;
- (void)addNavigationOwnerWithIdentifier:(NSString *)arg1;
@end

