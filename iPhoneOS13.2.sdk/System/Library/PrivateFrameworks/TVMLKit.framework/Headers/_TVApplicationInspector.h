//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVMLKit/_TVInspectorCapturingViewDelegate-Protocol.h>

@class NSHashTable, TVApplicationController, _TVInspectorCapturingView;

@interface _TVApplicationInspector : NSObject <_TVInspectorCapturingViewDelegate>
{
    BOOL _inspectionModeEnabled;
    NSHashTable *_highlightViews;
    _TVInspectorCapturingView *_capturingView;
    TVApplicationController *_applicationController;
}

@property(nonatomic, getter=isInspectionModeEnabled) BOOL inspectionModeEnabled; // @synthesize inspectionModeEnabled=_inspectionModeEnabled;
@property(readonly, nonatomic) __weak TVApplicationController *applicationController; // @synthesize applicationController=_applicationController;
// - (void).cxx_destruct;
- (id)_highlightViewForElement:(id)arg1 contentColor:(id)arg2 borderColor:(id)arg3;
- (void)cancelHighlight;
- (void)highlightViewElements:(id)arg1 contentColor:(id)arg2 borderColor:(id)arg3;
- (void)capturingView:(id)arg1 didCaptureTapOnView:(id)arg2;
- (id)rootView;
@property(readonly, nonatomic) _TVInspectorCapturingView *capturingView; // @synthesize capturingView=_capturingView;
@property(readonly, nonatomic) NSHashTable *highlightViews; // @synthesize highlightViews=_highlightViews;
- (id)initWithApplicationController:(id)arg1;

@end

