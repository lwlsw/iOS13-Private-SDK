//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, _UICompoundObjectMap;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIViewAnimatablePropertyTransformer : NSObject
{
    BOOL _presentationValueCallbackRan;
    NSObject<OS_dispatch_queue> *_lockingQueue;
    id /* CDUnknownBlockType */ _modelValueChangedCallback;
    id /* CDUnknownBlockType */ _presentationValueChangedCallback;
    id /* CDUnknownBlockType */ _stabilizedCallback;
    _UICompoundObjectMap *_capturedProperties;
    NSMutableSet *_runningProgresses;
}

@property(retain, nonatomic) NSMutableSet *runningProgresses; // @synthesize runningProgresses=_runningProgresses;
@property(retain, nonatomic) _UICompoundObjectMap *capturedProperties; // @synthesize capturedProperties=_capturedProperties;
@property(copy, nonatomic) id /* CDUnknownBlockType */ stabilizedCallback; // @synthesize stabilizedCallback=_stabilizedCallback;
@property(copy, nonatomic) id /* CDUnknownBlockType */ presentationValueChangedCallback; // @synthesize presentationValueChangedCallback=_presentationValueChangedCallback;
@property(copy, nonatomic) id /* CDUnknownBlockType */ modelValueChangedCallback; // @synthesize modelValueChangedCallback=_modelValueChangedCallback;
// - (void).cxx_destruct;
- (void)performWithLock:(CDUnknownBlockType)arg1;
- (void)progressInvalidated:(id)arg1;
- (void)modelValueUpdatedForProgress:(id)arg1;
- (void)presentationValueStabilizedForProgress:(id)arg1;
- (void)presentationValueUpdatedForProgress:(id)arg1;
- (id)initWithInputAnimatableProperties:(id)arg1 presentationValueChangedCallback:(CDUnknownBlockType)arg2;
- (id)initWithProgressAnimatableProperty:(id)arg1 modelValueSetter:(CDUnknownBlockType)arg2 presentationValueSetter:(CDUnknownBlockType)arg3;
- (id)initWithInputAnimatableProperties:(id)arg1 modelValueSetter:(CDUnknownBlockType)arg2 presentationValueSetter:(CDUnknownBlockType)arg3;
- (id)initWithInputAnimatableProperties:(id)arg1 modelValueSetter:(CDUnknownBlockType)arg2 presentationValueSetter:(CDUnknownBlockType)arg3 stabilizedCallback:(CDUnknownBlockType)arg4;
- (id)initWithInputAnimatableProperties:(id)arg1 modelValueSetter:(CDUnknownBlockType)arg2 presentationValueSetter:(CDUnknownBlockType)arg3 stabilizedCallback:(CDUnknownBlockType)arg4 allowsProgressAnimatableProperties:(BOOL)arg5;

@end

