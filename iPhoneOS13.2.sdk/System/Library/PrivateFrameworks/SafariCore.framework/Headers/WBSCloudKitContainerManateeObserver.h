//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariCore/WBSCloudKitContainerManateeObserving-Protocol.h>

@class CKContainer, NSMutableArray, NSString;
@protocol OS_dispatch_queue, WBSAppleAccountInformationProviding;

@interface WBSCloudKitContainerManateeObserver : NSObject <WBSCloudKitContainerManateeObserving>
{
    NSObject<OS_dispatch_queue> *_queue;
    CKContainer *_container;
    BOOL _determiningManateeState;
    long long _currentState;
    id /* CDUnknownBlockType */ _stateChangeObserver;
    NSMutableArray *_stateDeterminationCompletionBlocks;
    id <WBSAppleAccountInformationProviding> _appleAccountInformationProvider;
    NSString *_containerIdentifier;
}

@property(readonly, copy, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
// - (void).cxx_destruct;
- (void)determineManateeStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_determineManateeStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_accountChanged:(id)arg1;
@property(copy, nonatomic) id /* CDUnknownBlockType */ stateChangeObserver;
- (id)initWithContainerIdentifier:(id)arg1 appleAccountInformationProvider:(id)arg2;

@end

