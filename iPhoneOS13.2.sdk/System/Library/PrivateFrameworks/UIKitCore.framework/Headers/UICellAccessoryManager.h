//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString, UICellAccessoryConfiguration, UIView;
@protocol UICellAccessoryLayout;

__attribute__((visibility("hidden")))
@interface UICellAccessoryManager : NSObject
{
    struct CGSize _enforcedContainerSize;
    _Bool _needsLayout;
    double _minimumCompressionLayoutWidth;
    id <UICellAccessoryLayout> _leadingLayout;
    id <UICellAccessoryLayout> _trailingLayout;
    NSDictionary *_configurations;
    NSString *_currentConfigurationIdentifier;
    UIView *_containerView;
    UICellAccessoryConfiguration *_previousConfiguration;
    NSMutableDictionary *_accessoryViews;
    struct CGSize _previousContainerSize;
    struct UIEdgeInsets _safeAreaInsets;
    struct UIEdgeInsets _contentInset;
}

@property(retain, nonatomic) NSMutableDictionary *accessoryViews; // @synthesize accessoryViews=_accessoryViews;
@property(retain, nonatomic) UICellAccessoryConfiguration *previousConfiguration; // @synthesize previousConfiguration=_previousConfiguration;
@property(nonatomic) struct CGSize previousContainerSize; // @synthesize previousContainerSize=_previousContainerSize;
@property(nonatomic) _Bool needsLayout; // @synthesize needsLayout=_needsLayout;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(copy, nonatomic) NSString *currentConfigurationIdentifier; // @synthesize currentConfigurationIdentifier=_currentConfigurationIdentifier;
@property(retain, nonatomic) NSDictionary *configurations; // @synthesize configurations=_configurations;
@property(retain, nonatomic) id <UICellAccessoryLayout> trailingLayout; // @synthesize trailingLayout=_trailingLayout;
@property(retain, nonatomic) id <UICellAccessoryLayout> leadingLayout; // @synthesize leadingLayout=_leadingLayout;
@property(nonatomic) double minimumCompressionLayoutWidth; // @synthesize minimumCompressionLayoutWidth=_minimumCompressionLayoutWidth;
@property(nonatomic) struct UIEdgeInsets safeAreaInsets; // @synthesize safeAreaInsets=_safeAreaInsets;
- (id)description;
- (void)performWithEnforcedContainerSize:(struct CGSize)arg1 block:(id /* block */)arg2;
- (struct CGRect)containerBounds;
@property(readonly, nonatomic) struct CGSize containerSize;
@property(readonly, nonatomic) struct CGRect contentFrame;
- (void)layoutIfNeeded;
- (void)setNeedsLayout;
- (struct CGRect)_updateAccessories:(id)arg1 previousAccessories:(id)arg2 withLayout:(id)arg3 edge:(unsigned long long)arg4;
- (void)_updateFromPreviousConfiguration:(id)arg1;
@property(readonly, nonatomic) UICellAccessoryConfiguration *currentConfiguration;
- (id)_configurationWithIdentifier:(id)arg1;
- (void)updateContainerView:(id)arg1;
- (id)initWithContainerView:(id)arg1;

@end
