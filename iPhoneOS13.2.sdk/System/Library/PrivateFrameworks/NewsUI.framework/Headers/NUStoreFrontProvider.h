//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/SXStoreFrontProvider-Protocol.h>

@class NSString;
@protocol FCAppleAccount;

@interface NUStoreFrontProvider : NSObject <SXStoreFrontProvider>
{
    id <FCAppleAccount> _appleAccount;
}

@property(readonly, nonatomic) id <FCAppleAccount> appleAccount; // @synthesize appleAccount=_appleAccount;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSString *storeFrontIdentifier;
- (id)initWithAppleAccount:(id)arg1;

@end

