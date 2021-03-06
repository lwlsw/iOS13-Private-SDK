//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UISEGestureFeature.h>

#import <UIKitCore/_UISETouchedEdgesProvider-Protocol.h>

@protocol _UISEGestureFeatureSettings;

__attribute__((visibility("hidden")))
@interface _UISEFirmwareEdgesFailGestureFeature : _UISEGestureFeature <_UISETouchedEdgesProvider>
{
    id <_UISEGestureFeatureSettings> _settings;
    BOOL _hasDoneTest;
    CGPoint _initialLocation;
    double _initialTimestamp;
    NSUInteger _touchedEdges;
}

@property(readonly, nonatomic) NSUInteger touchedEdges; // @synthesize touchedEdges=_touchedEdges;
// - (void).cxx_destruct;
// - (void)_incorporateSample:(const struct _UISEGestureFeatureSample )arg1;
- (id)debugDictionary;
- (id)initWithSettings:(id)arg1;

@end

