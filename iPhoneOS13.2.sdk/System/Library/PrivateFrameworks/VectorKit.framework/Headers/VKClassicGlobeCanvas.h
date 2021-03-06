//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/VKScreenCanvas.h>

#import <VectorKit/GEOResourceManifestTileGroupObserver-Protocol.h>
#import <VectorKit/VKInteractiveMap-Protocol.h>

@class NSArray, VKARCameraController, VKGlobeCameraController;
@protocol VKInteractiveMapDelegate;

__attribute__((visibility("hidden")))
@interface VKClassicGlobeCanvas : VKScreenCanvas <GEOResourceManifestTileGroupObserver, VKInteractiveMap>
{
    VKGlobeCameraController *_globeCameraController;
    int _mapType;
//     CDStruct_80aa614a _mapDisplayStyle;
    double _contentScale;
    BOOL _disableRoads;
    BOOL _disableLabels;
//    struct AltitudeDebugSettings _debugSettings;
//    struct GlobeAdapter _globeAdapter;
//    struct RealisticRenderer _renderer;
//    struct shared_ptr<md::GlobeOverlayContainer> _overlayContainer;
//    struct shared_ptr<ggl::FlyoverLibrary> _flyoverLibrary;
    BOOL _initialized;
    BOOL _canShowFlyover;
//    struct shared_ptr<bool> _isDead;
    BOOL _isLoading;
    BOOL _isDownloading;
    BOOL _coarseLoading;
    BOOL _tourIsDownloading;
//    struct LoadingStatusTracker _loadingStatusTracker;
    double _currentZoomLevel;
    id /* CDUnknownBlockType */ _sceneDidLoadCallback;
    VKARCameraController *_arCameraController;
    BOOL _arRoadDisabledState;
    CGSize _lastCanvasSize;
    BOOL _trafficEnabled;
    int _flyoverMode;
    id <VKInteractiveMapDelegate> _delegate;
}

+ (BOOL)supportsMapType:(int)arg1 scale:(int)arg2;
@property(readonly, nonatomic) int flyoverMode; // @synthesize flyoverMode=_flyoverMode;
@property(nonatomic) BOOL trafficEnabled; // @synthesize trafficEnabled=_trafficEnabled;
@property(nonatomic) int mapType; // @synthesize mapType=_mapType;
@property(nonatomic) BOOL disableLabels; // @synthesize disableLabels=_disableLabels;
@property(nonatomic) BOOL disableRoads; // @synthesize disableRoads=_disableRoads;
@property(readonly, nonatomic) VKGlobeCameraController *globeCameraController; // @synthesize globeCameraController=_globeCameraController;
@property(copy, nonatomic) id /* CDUnknownBlockType */ sceneDidLoadCallback; // @synthesize sceneDidLoadCallback=_sceneDidLoadCallback;
@property(readonly, nonatomic) BOOL flyoverAvailable; // @synthesize flyoverAvailable=_canShowFlyover;
@property(nonatomic) id <VKInteractiveMapDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (float)currentRoadSignOffset;
- (void)setNavCameraIsDetached:(BOOL)arg1;
- (void)puckAnimator:(id)arg1 updatedTargetPosition:(const Coordinate3D_bc242218 )arg2;
- (void)puckAnimator:(id)arg1 updatedPosition:(const Coordinate3D_bc242218 )arg2 course:(const Unit_3d259e8a )arg3;
// - (void)transitionToTracking:(BOOL)arg1 mapMode:(long long)arg2 startLocation:(CDStruct_c3b9c2ee)arg3 startCourse:(double)arg4 cameraController:(id)arg5 pounceCompletionHandler:(CDUnknownBlockType)arg6;
//  (struct GlobeOverlayContainer )overlayContainer;
- (void)_setDefaultFov:(float)arg1;
- (void)disableTileAnalytics;
- (void)enableTileAnalytics;
- (id)flyoverStatistics;
- (void)resetFlyoverStatistics;
- (void)disableFlyoverStatistics;
- (void)enableFlyoverStatistics;
- (void)setupMapScene;
- (void)waitForLoading;
- (void)_updateDebugSettings;
- (void)didReceiveMemoryWarning:(BOOL)arg1 beAggressive:(BOOL)arg2;
@property(readonly, nonatomic) NSArray *overlays;
- (void)insertOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)insertOverlay:(id)arg1 belowOverlay:(id)arg2;
- (void)removeOverlay:(id)arg1;
- (void)addOverlay:(id)arg1;
- (BOOL)shouldHideOffscreenSelectedAnnotation;
- (CDUnknownBlockType)annotationCoordinateTest;
- (CDUnknownBlockType)annotationRectTest;
- (id)attributionsForCurrentRegion;
@property(readonly, nonatomic) NSArray *visibleTileSets;
- (void)debugHighlightObjectAtPoint:(CGPoint)arg1 highlightTarget:(unsigned char)arg2;
- (void)_viewTransformSetup;
- (void)didPresent;
- (void)updateCameraForFrameResize;
- (void)_update;
- (void)updateWithTimestamp:(double)arg1;
// - (CGPoint)convertCoordinateToCameraModelPoint:(CDStruct_c3b9c2ee)arg1;
// - (CGPoint)convertCoordinateToPoint:(CDStruct_c3b9c2ee)arg1;
// - (CDStruct_c3b9c2ee)convertPointToCoordinateOnSphere:(CGPoint)arg1;
// - (CDStruct_c3b9c2ee)convertPointToCoordinate:(CGPoint)arg1;
// - (CGPoint)convertMapPointToPoint:(CDStruct_c3b9c2ee)arg1;
// - (CDStruct_c3b9c2ee)convertPointToMapPoint:(CGPoint)arg1;
- (void)stopAnimations;
- (void)resumeFlyoverTourAnimation;
- (void)pauseFlyoverTourAnimation;
- (void)startFlyoverTourAnimation:(NSUInteger)arg1 animateToStart:(BOOL)arg2 labelChanged:(CDUnknownBlockType)arg3 stateChange:(CDUnknownBlockType)arg4;
- (void)stopFlyoverAnimation;
- (void)startFlyoverAnimation:(id)arg1 animateToStart:(BOOL)arg2 labelChanged:(CDUnknownBlockType)arg3 stateChange:(CDUnknownBlockType)arg4;
- (void)prepareFlyoverAnimation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)createFlyoverPreTourAnimation:(id)arg1 duration:(double)arg2;
- (id)viewportInfo;
- (id)camera;
- (void)updateCameraFromGlobe;
- (void)transferStateFromCanvas:(id)arg1;
- (CGPoint)_centerScreenPoint;
- (void)stopSnappingAnimations;
- (id)detailedDescription;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)setContentsScale:(double)arg1;
- (const shared_ptr_a3c46825 )_styleManager;
- (void)_reloadStylesheet;
- (id)consoleString:(BOOL)arg1;
- (void)dealloc;
//  (id)initWithMapEngine:(struct MapEngine )arg1 inBackground:(BOOL)arg2;
- (void)stopLoading;
- (void)setNightMode:(BOOL)arg1;
//  (void)requestStylesheetMapDisplayStyle:(struct DisplayStyle)arg1 animated:(BOOL)arg2;
- (void)setMapType:(int)arg1 animated:(BOOL)arg2;
- (BOOL)isPointValidForGesturing:(CGPoint)arg1;
@property(readonly, nonatomic) VKARCameraController *arCameraController; // @synthesize arCameraController=_arCameraController;
- (BOOL)useNewRenderPath;

@end

