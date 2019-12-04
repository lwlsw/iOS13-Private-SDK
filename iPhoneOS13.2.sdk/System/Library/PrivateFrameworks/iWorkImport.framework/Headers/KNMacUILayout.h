//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




__attribute__((visibility("hidden")))
@interface KNMacUILayout : NSObject <NSCopying, NSMutableCopying>
{
    _Bool _showingInspectorPane;
    _Bool _inspectorPaneAutoHidden;
    _Bool _showingSidebar;
    _Bool _showingNavigatorViewInSidebar;
    _Bool _showingPresenterNotes;
    _Bool _showingLightTable;
    _Bool _showingMasterSlides;
    _Bool _showingElementList;
    long long _inspectorPaneViewMode;
}

+     // Error parsing type: @40@0:8r^{DesktopUILayoutArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}iBBBBiBBB}16@24@32, name: uiLayoutFromArchive:unarchiver:context:
@property(readonly, nonatomic, getter=isShowingElementList) _Bool showingElementList; // @synthesize showingElementList=_showingElementList;
@property(readonly, nonatomic, getter=isShowingMasterSlides) _Bool showingMasterSlides; // @synthesize showingMasterSlides=_showingMasterSlides;
@property(readonly, nonatomic) long long inspectorPaneViewMode; // @synthesize inspectorPaneViewMode=_inspectorPaneViewMode;
@property(readonly, nonatomic, getter=isShowingPresenterNotes) _Bool showingPresenterNotes; // @synthesize showingPresenterNotes=_showingPresenterNotes;
@property(readonly, nonatomic, getter=isShowingLightTable) _Bool showingLightTable; // @synthesize showingLightTable=_showingLightTable;
@property(readonly, nonatomic, getter=isShowingSidebar) _Bool showingSidebar; // @synthesize showingSidebar=_showingSidebar;
@property(readonly, nonatomic, getter=p_isShowingNavigatorViewInSidebar) _Bool p_showingNavigatorViewInSidebar;
@property(readonly, nonatomic) long long inspectorPaneHiddenState;
@property(readonly, nonatomic) long long sidebarViewMode;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
-     // Error parsing type: v32@0:8^{DesktopUILayoutArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}iBBBBiBBB}16@24, name: saveToArchive:archiver:
- (_Bool)inspectorPaneAutoHidden;
- (void)setInspectorPaneAutoHidden:(_Bool)arg1;
- (_Bool)showingInspectorPane;
- (void)setShowingInspectorPane:(_Bool)arg1;
- (id)archivedUILayoutInContext:(id)arg1;

@end
