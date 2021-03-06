//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface SBUIBannerAction : NSObject
{
    id /* CDUnknownBlockType */ _actionBlock;
    NSString *_remoteViewControllerClassName;
    NSString *_remoteServiceBundleIdentifier;
    NSUInteger _behavior;
    NSUInteger _activationMode;
    NSString *_identifier;
    NSDictionary *_parameters;
}

+ (id)actionWithBlock:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSUInteger activationMode; // @synthesize activationMode=_activationMode;
@property(nonatomic) NSUInteger behavior; // @synthesize behavior=_behavior;
@property(copy, nonatomic) NSString *remoteServiceBundleIdentifier; // @synthesize remoteServiceBundleIdentifier=_remoteServiceBundleIdentifier;
@property(copy, nonatomic) NSString *remoteViewControllerClassName; // @synthesize remoteViewControllerClassName=_remoteViewControllerClassName;
@property(copy, nonatomic) id /* CDUnknownBlockType */ actionBlock; // @synthesize actionBlock=_actionBlock;
// - (void).cxx_destruct;
- (id)initWithActionBlock:(CDUnknownBlockType)arg1 remoteViewControllerClassName:(id)arg2 remoteServiceBundleIdentifier:(id)arg3 actionIdentifier:(id)arg4 activationMode:(NSUInteger)arg5 behavior:(NSUInteger)arg6 parameters:(id)arg7;

@end

