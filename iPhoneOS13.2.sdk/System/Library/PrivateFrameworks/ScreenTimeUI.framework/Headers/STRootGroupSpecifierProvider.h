//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeUI/STGroupSpecifierProvider.h>

@class NSObject;
@protocol STRootViewModelCoordinator;

__attribute__((visibility("hidden")))
@interface STRootGroupSpecifierProvider : STGroupSpecifierProvider
{
    NSObject<STRootViewModelCoordinator> *_coordinator;
}

+ (id)providerWithCoordinator:(id)arg1;
@property(retain) NSObject<STRootViewModelCoordinator> *coordinator; // @synthesize coordinator=_coordinator;
// - (void).cxx_destruct;
- (void)invalidate;

@end

