//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDContainerRep.h>

#import <TSReading/TSDDecorator-Protocol.h>
#import <TSReading/TSDTilingLayerDelegate-Protocol.h>
#import <TSReading/TSKHighlightArrayControllerProtocol-Protocol.h>
#import <TSReading/TSKPulseAnimationControllerProtocol-Protocol.h>
#import <TSReading/TSWPHyperlinkHostRepProtocol-Protocol.h>

@class CALayer, CAShapeLayer, NSArray, TSDTilingLayer, TSKHighlightArrayController, TSKPulseAnimationController, TSWPEditingController, TSWPSearchReference, TSWPSelection, TSWPStorage, TSWPStorageSpellChecker;

@interface TSWPRep : TSDContainerRep <TSDTilingLayerDelegate, CAAnimationDelegate, TSKHighlightArrayControllerProtocol, TSKPulseAnimationControllerProtocol, TSWPHyperlinkHostRepProtocol, TSDDecorator>
{
    TSDTilingLayer *_textLayers[2];
    CALayer *_caretLayer;
    CAShapeLayer *_selectionLineLayers[2];
    CAShapeLayer *_selectionHighlightLayer;
    CAShapeLayer *_selectionParagraphBorderLayer;
    CAShapeLayer *_markHighlightLayer;
    CAShapeLayer *_smartFieldHighlightLayer;
    CAShapeLayer *_secondaryHighlightLayer;
    NSRange * _secondaryHighlightRange;
    int _secondaryHighlightPathStyle;
    TSKHighlightArrayController *_pulseArrayController;
    TSKHighlightArrayController *_highlightArrayController;
    TSKPulseAnimationController *_caretPulseController;
    BOOL _caretAnimationDisabled;
    BOOL _suppressCaret;
    TSWPStorageSpellChecker *_spellChecker;
    NSRange * _suppressedMisspellingRange;
    BOOL _updatingHighlights;
    BOOL _suppressSelectionHighlight;
    NSRange * _dragRange;
    TSWPSelection *_lastSelection;
    BOOL _selectionChanged;
    BOOL _markChanged;
    NSUInteger _newSelectionFlags;
    BOOL _repFieldsAreActive;
    BOOL _secondaryHighlightChanged;
    BOOL _indentAnimationRunning;
    CALayer *_indentAnimationLayer;
    long long _indentDelta;
    SEL _indentSelector;
    id _indentTarget;
    BOOL _hudStateDirty;
    BOOL _invalidateHUDState;
    BOOL _useKeyboardWhenEditing;
    CALayer *_dragAndDropCaretLayer;
    TSWPSelection *_dropSelection;
    BOOL _findIsShowing;
    BOOL _shouldHideSelectionControls;
    TSWPSearchReference *_activeSearchReference;
    NSArray *_searchReferences;
}

@property(retain, nonatomic) NSArray *searchReferences; // @synthesize searchReferences=_searchReferences;
@property(nonatomic) BOOL shouldHideSelectionControls; // @synthesize shouldHideSelectionControls=_shouldHideSelectionControls;
@property(nonatomic) BOOL findIsShowing; // @synthesize findIsShowing=_findIsShowing;
@property(retain, nonatomic) TSWPSearchReference *activeSearchReference; // @synthesize activeSearchReference=_activeSearchReference;
@property(nonatomic) TSWPSelection *dropSelection; // @synthesize dropSelection=_dropSelection;
@property(nonatomic) NSRange * dragRange; // @synthesize dragRange=_dragRange;
@property(nonatomic, getter=isSelectionHighlightSuppressed) BOOL suppressSelectionHighlight; // @synthesize suppressSelectionHighlight=_suppressSelectionHighlight;
@property(nonatomic) BOOL useKeyboardWhenEditing; // @synthesize useKeyboardWhenEditing=_useKeyboardWhenEditing;
- (id)imageForSearchReference:(id)arg1 forPath:(CGPathRef)arg2 shouldPulsate:(BOOL)arg3;
- (CGPathRef)newPathForSearchReference:(id)arg1;
- (void)p_updateHighlights;
- (void)p_didDismissPopover:(id)arg1;
- (void)p_setSearchReferencesToHighlight:(id)arg1;
- (void)p_findUIStateChangedNotification:(id)arg1;
- (void)processFindUIStateChangedNotificationUserInfo:(id)arg1;
- (void)p_setActiveSearchReference:(id)arg1;
- (void)p_activeFindHighlightChangedNotification:(id)arg1;
- (void)p_setPulseControllerActive:(BOOL)arg1 autohide:(BOOL)arg2;
- (BOOL)shouldAlwaysAutoHide;
- (void)pulseAnimationDidStopForPulse:(id)arg1;
- (void)pulseAnimationDidStop:(id)arg1;
- (id)selectionForDragAndDropNaturalPoint:(CGPoint)arg1 dragIsTopicSelection:(BOOL)arg2;
@property(readonly, nonatomic) CGAffineTransform transformToConvertNaturalToScaledRoot;
- (CGColorRef)p_caretLayerColor;
- (BOOL)p_hasEmptyList;
- (BOOL)p_hasVisibleContents;
- (void)p_editingDidEndNotification:(id)arg1;
- (void)p_markChangedNotification:(id)arg1;
- (void)p_selectionContentsChangedNotification:(id)arg1;
- (void)p_selectionChangedNotification:(id)arg1;
- (void)p_invalidateCommentKnobs;
- (void)didDrawInLayer:(id)arg1 context:(CGContextRef )arg2;
- (void)p_updateSmartFieldHighlightLayer;
- (void)p_hideSmartFieldHighlightLayer;
- (void)p_createSmartFieldHighlightLayer;
- (void)p_destroySpellChecker;
- (BOOL)p_needsSpellChecker;
- (BOOL)p_spellCheckingEnabled;
- (void)p_updateMarkHighlightLayer;
- (void)p_hideMarkHighlightLayer;
- (void)p_createMarkHighlightLayer;
- (void)p_showSelectionParagraphBorderLayerWithPath:(CGPathRef)arg1;
- (void)p_hideSelectionParagraphBorderLayer;
- (void)p_hideSelectionHighlightLayer;
- (void)p_createSelectionParagraphBorderLayer;
- (void)p_createSelectionHighlightLayer;
- (void)p_setSelectionHighlightColor;
- (void)p_setSelectionLineLayersHidden:(BOOL)arg1;
- (void)p_createSelectionLineLayers;
- (void)p_stopCaretLayerAnimation;
- (void)p_startCaretLayerAnimation;
- (void)p_hideCaretLayer;
- (void)p_showCaretLayer;
- (BOOL)p_positionCaretLayer:(id)arg1 forSelection:(id)arg2 layerRelative:(BOOL)arg3;
- (id)p_newCaretLayerWithZPosition:(double)arg1;
- (void)p_destroyLayer:(int)arg1;
- (void)p_createLayer:(int)arg1;
- (void)p_drawTextInLayer:(id)arg1 context:(CGContextRef )arg2 limitSelection:(id)arg3 rubyGlyphRange:(NSRange *)arg4 renderMode:(int)arg5 suppressInvisibles:(BOOL)arg6;
- (BOOL)preventClipToColumn;
- (void)p_teardown;
@property(readonly, nonatomic) BOOL textIsVertical;
- (void)tilingLayerWillSetNeedsDisplayForDirtyTiles:(id)arg1;
- (void)tilingLayerWillSetNeedsLayout:(id)arg1;
- (void)tilingLayerWillSetNeedsDisplay:(id)arg1;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)drawLayer:(id)arg1 inContext:(CGContextRef )arg2;
- (void)p_drawTextBackgroundLayerInContext:(CGContextRef )arg1;
- (void)p_drawTextLayerInContext:(CGContextRef )arg1;
- (void)i_setNeedsDisplayForSelectionChange;
- (void)p_updateForCurrentSelectionWithFlags:(NSUInteger)arg1;
- (void)p_updateSuppressedSpellingRange;
- (void)p_setSuppressedMisspellingRange:(NSRange *)arg1;
- (void)p_invalidateSuppressedMisspellingRange;
- (void)p_renderingOptionsDidChangeNotification:(id)arg1;
- (void)p_spellCheckerLanguageDidChangeNotification:(id)arg1;
- (void)i_setNeedsErasableDisplayInRange:(NSRange *)arg1;
- (void)p_hideSelectionLayers;
- (BOOL)p_isSelectionSingleAnchoredDrawableAttachment;
- (BOOL)p_canShowSelectionAndCaretLayers;
- (void)p_updateLayersForRangeSelection:(id)arg1 selectionFlags:(NSUInteger)arg2;
- (CGPoint)p_pinPoint:(CGPoint)arg1 toRect:(CGRect)arg2;
- (id)lineSearchReferencesForSearchReference:(id)arg1;
- (id)lineSelectionsForSelection:(id)arg1;
- (id)p_lineSelectionsForSelection:(id)arg1;
- (CGPathRef)p_newSelectionPathForRange:(NSRange *)arg1 headKnobRect:(CGRect )arg2 tailKnobRect:(CGRect )arg3 selectionType:(int)arg4 selection:(id)arg5;
- (CGPathRef)p_createPathForParagraphSelection:(id)arg1 needsParagraphBorder:(BOOL)arg2;
- (BOOL)p_paragraphModeBorderNeededForColumn:(id)arg1 dragCharIndex:(NSUInteger)arg2 knobTag:(NSUInteger)arg3;
- (CGRect)p_paragraphModeRectangleForColumn:(id)arg1 selection:(id)arg2;
- (void)p_updateAnimationWithAnimatingPulse:(BOOL)arg1;
- (void)editingDidEnd;
- (BOOL)doesNeedDisplayOnEditingDidEnd;
- (BOOL)isOverflowing;
- (id)textImageForRect:(CGRect)arg1;
- (id)textImageForSelection:(id)arg1 frame:(CGRect )arg2 usingGlyphRect:(BOOL)arg3 drawBackground:(BOOL)arg4 shouldPulsate:(BOOL)arg5 suppressInvisibles:(BOOL)arg6;
- (id)textImageForSelection:(id)arg1 frame:(CGRect )arg2 usingGlyphRect:(BOOL)arg3 shouldPulsate:(BOOL)arg4 suppressInvisibles:(BOOL)arg5;
- (id)textImageForSelection:(id)arg1;
- (id)p_imageForRect:(CGRect)arg1 usingGlyphRect:(BOOL)arg2 drawBackground:(BOOL)arg3 shouldPulsate:(BOOL)arg4 forCaret:(BOOL)arg5 drawSelection:(id)arg6 suppressInvisibles:(BOOL)arg7;
- (void)p_addRoundedRectToContext:(CGContextRef )arg1 rect:(CGRect)arg2 forCaret:(BOOL)arg3;
- (void)p_addRectToContext:(CGContextRef )arg1 rect:(CGRect)arg2;
- (void)p_addRoundedRectToContext:(CGContextRef )arg1 rect:(CGRect)arg2;
- (void)p_updateLayersForInsertionPointSelection:(id)arg1;
- (CGRect)p_convertNaturalRectToRotated:(CGRect)arg1 repAngle:(double)arg2;
- (NSRange *)rangeOfMisspelledWordAtCharIndex:(NSUInteger)arg1;
- (CGRect)glyphRectForRubyFieldAtCharIndex:(NSUInteger)arg1 glyphRange:(NSRange *)arg2;
- (NSUInteger)glyphCountForRubyFieldAtCharIndex:(NSUInteger)arg1;
- (NSUInteger)charCountOfGlyphStartingAtCharIndex:(NSUInteger)arg1;
- (CGRect)glyphRectForRange:(NSRange *)arg1 includingLabel:(BOOL)arg2;
- (CGRect)columnRectForRange:(NSRange *)arg1;
- (CGRect)labelRectForCharIndex:(NSUInteger)arg1;
- (id)decoratorOverlayLayers;
- (void)animateIndent:(long long)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)p_indentAfterAnimationWithOptions:(id)arg1;
- (BOOL)shouldCreateTextKnobs;
- (BOOL)shouldCreateLockedKnobs;
- (BOOL)shouldCreateSelectionKnobs;
- (void)updatePositionsOfKnobs:(id)arg1;
- (void)addKnobsToArray:(id)arg1;
- (void)invalidateKnobs;
@property(readonly, nonatomic) TSWPSelection *selection;
@property(readonly, nonatomic) NSArray *columns;
@property(readonly, nonatomic) TSWPStorage *storage;
- (BOOL)wantsToHandleTapsWhenLocked;
- (BOOL)wantsToHandleTapsOnContainingGroup;
- (id)hyperlinkRegions;
- (BOOL)handleSingleTapAtPoint:(CGPoint)arg1;
- (void)willDisplayEditHyperlinkUIForHyperlinkField:(id)arg1 beginEditing:(BOOL)arg2;
- (id)hyperlinkContainerRep;
- (id)repForDragging;
- (id)siblings;
- (id)repForCharIndex:(NSUInteger)arg1 isStart:(BOOL)arg2;
- (void)pulseCaret;
- (void)didEnterBackground;
- (void)willEnterForeground;
- (void)enableCaretAnimation;
- (void)canvasDidBeginFreeTransform;
- (void)viewScrollingEnded;
- (void)viewScaleDidChange;
- (void)disableCaretAnimation;
- (void)viewDidAppear;
- (void)gesturesDidEnd;
- (void)didEndZooming;
- (void)willBeginZooming;
@property(readonly, nonatomic) TSWPEditingController *textEditor;
- (BOOL)isEditing;
- (id)p_hyperlinkWithTouch:(id)arg1;
- (id)p_smartFieldWithTouch:(id)arg1;
- (id)columnForCharIndex:(NSUInteger)arg1;
- (id)closestColumnForPoint:(CGPoint)arg1;
- (BOOL)shouldIgnoreSingleTapAtPoint:(CGPoint)arg1 withRecognizer:(id)arg2;
- (void)setHighlightedHyperlinkField:(id)arg1;
- (void)clearSecondaryHighlight;
- (void)setSecondaryHighlightRange:(NSRange *)arg1 color:(CGColorRef)arg2 pathStyle:(int)arg3;
- (void)p_updateSecondaryHighlightLayer;
- (id)footnoteReferenceAttachmentAtPoint:(CGPoint)arg1;
- (id)footnoteMarkAttachmentAtPoint:(CGPoint)arg1;
- (id)rubyFieldAtPoint:(CGPoint)arg1;
- (id)smartFieldAtPoint:(CGPoint)arg1;
- (BOOL)shouldBeginEditingWithGesture:(id)arg1;
- (BOOL)p_canRepBeginEditingOnDoubleTap;
- (BOOL)canEditWithEditor:(id)arg1;
- (id)beginEditing;
- (Class)wpEditorClass;
- (BOOL)handlesEditMenu;
- (CGRect)newTextLayerUnscaledBounds:(CGRect)arg1 forNewTextBounds:(CGRect)arg2;
- (void)screenScaleDidChange;
- (void)didUpdateLayer:(id)arg1;
- (CGRect)clipRect;
- (CGRect)p_clipRect:(CGRect)arg1;
- (void)updateFromLayout;
- (void)invalidateHUDState;
- (void)addAdditionalChildLayersToArray:(id)arg1;
- (id)overlayLayers;
- (void)drawRubyInContext:(CGContextRef )arg1 rubyFieldStart:(NSUInteger)arg2 rubyGlyphRange:(NSRange *)arg3;
- (void)drawInContext:(CGContextRef )arg1 limitSelection:(id)arg2 suppressInvisibles:(BOOL)arg3;
- (void)drawInContext:(CGContextRef )arg1;
- (void)drawInLayerContext:(CGContextRef )arg1;
- (void)setNeedsDisplayInRect:(CGRect)arg1;
- (void)setNeedsDisplayInRange:(NSRange *)arg1;
- (void)setNeedsDisplay;
- (id)textBackgroundLayer;
- (id)textLayer;
- (void)performBlockOnTextLayers:(CDUnknownBlockType)arg1;
- (int)dragTypeAtCanvasPoint:(CGPoint)arg1;
- (id)p_hyperlinkAtPoint:(CGPoint)arg1;
- (void)spellCheckingStateChanged;
- (void)verticalTextPropertyChanged;
- (int)tilingMode;
- (BOOL)useDynamicTiling;
- (BOOL)forceTiling;
- (BOOL)directlyManagesLayerContent;
- (Class)layerClass;
- (NSUInteger)charIndexFromPoint:(CGPoint)arg1 allowPastBreak:(BOOL)arg2 allowNotFound:(BOOL)arg3 pastCenterGoesToNextChar:(BOOL)arg4 isAtEndOfLine:(BOOL )arg5 leadingEdge:(BOOL )arg6;
- (NSUInteger)charIndexFromPoint:(CGPoint)arg1 allowPastBreak:(BOOL)arg2 allowNotFound:(BOOL)arg3 isAtEndOfLine:(BOOL )arg4 leadingEdge:(BOOL )arg5;
- (NSUInteger)charIndexFromPoint:(CGPoint)arg1 allowPastBreak:(BOOL)arg2 isAtEndOfLine:(BOOL )arg3;
- (NSUInteger)charIndexForPointWithPinning:(CGPoint)arg1 isTail:(BOOL)arg2 selectionType:(int)arg3;
- (NSUInteger)charIndexForPointWithPinning:(CGPoint)arg1;
- (double)knobOffsetForKnob:(id)arg1 paragraphMode:(BOOL)arg2;
- (CGPoint)knobCenterForSelection:(id)arg1 knob:(id)arg2;
- (id)p_annotationAtPoint:(CGPoint)arg1 outRange:(NSRange * )arg2;
- (id)newTrackerForKnob:(id)arg1;
- (BOOL)shouldCreateCommentKnobs;
- (void)invalidateAnnotationColor;
- (CGRect)closestCaretRectForPoint:(CGPoint)arg1 inSelection:(BOOL)arg2;
- (CGRect)p_topicDragRectForSelection:(id)arg1;
- (CGRect)p_caretRectForSelection:(id)arg1;
- (CGRect)caretRectForSelection:(id)arg1;
// - (CDStruct_7e4c5a1e)wordMetricsAtCharIndex:(NSUInteger)arg1;
// - (CDStruct_50f584da)lineMetricsAtCharIndex:(NSUInteger)arg1;
// - (CDStruct_50f584da)lineMetricsAtPoint:(CGPoint)arg1;
- (CGRect)caretRectForCharIndex:(NSUInteger)arg1 leadingEdge:(BOOL)arg2 caretAffinity:(int)arg3;
- (CGRect)caretRectForCharIndex:(NSUInteger)arg1 caretAffinity:(int)arg2;
- (CGRect)naturalBoundsRectForHyperlinkField:(id)arg1;
- (CGRect)rectForSelection:(id)arg1 includeRuby:(BOOL)arg2;
- (CGRect)rectForSelection:(id)arg1;
- (BOOL)isPointInSelectedArea:(CGPoint)arg1;
- (id)selectionRects;
- (CGRect)selectionRect;
- (CGRect)caretRect;
- (CGPoint)pinToClosestColumn:(CGPoint)arg1;
- (CGPoint)pinToNaturalBounds:(CGPoint)arg1 andLastLineFragment:(BOOL)arg2;
- (NSRange *)range;
- (void)willBeRemoved;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (BOOL)shouldShowKnobs;
- (BOOL)p_shouldDisplaySelectionControls;

@end

