//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenReaderOutput/BRLTBrailleStateManagerDelegate-Protocol.h>
#import <ScreenReaderOutput/BRLTBrailleTranslationDelegateProtocol-Protocol.h>

@class BRLTBrailleStateManager, NSAttributedString, NSData, NSMutableArray, NSMutableAttributedString, NSString, SCROBrailleFormatter, SCROBrailleLineVirtualStatus;
@protocol BRLTBrailleStateManagerDelegate, SCROBrailleDriverProtocol;

@interface SCROBrailleLine : NSObject <BRLTBrailleTranslationDelegateProtocol, BRLTBrailleStateManagerDelegate>
{
    id <SCROBrailleDriverProtocol> _brailleDriver;
    long long _size;
    long long _statusSize;
    long long _insetSize;
    long long _lineOffset;
    long long _leftInset;
    long long _rightInset;
    long long _masterStatusCellIndex;
    long long _iBeamLocation;
    long long _focusLocation;
    NSRange * _focusRange;
    NSRange * _selectionRange;
    int _displayMode;
    int _lineFocus;
    BOOL _displayEnabled;
    BOOL _needsDisplayFlush;
    BOOL _needsStatusFlush;
    BOOL _needsFocusFlush;
    BOOL _blink;
    BOOL _currentUnread;
    BOOL _anyUnread;
    BOOL _isPanning;
    BOOL _showDotsSevenAndEight;
    BOOL _brailleChunksAreDirty;
    char _displayBuffer;
    char _mainCellsBuffer;
    char _displayFilter;
    char _blinkerBuffer;
    char _statusFilter;
    NSData *_statusData;
    NSMutableAttributedString *_lineBuffer;
    id _appToken;
    long long _firstToken;
    long long _lastToken;
    SCROBrailleLineVirtualStatus *_virtualStatus;
    BRLTBrailleStateManager *_stateManager;
    SCROBrailleFormatter *_brailleFormatter;
    BOOL _wordWrapEnabled;
    BOOL _isSingleLetterInputOn;
    BOOL _isTextSearchModeOn;
    BOOL _editableFieldInterruptedByAlert;
    NSUInteger _generationID;
    id <BRLTBrailleStateManagerDelegate> _translationDelegate;
    NSMutableArray *_pendingBrailleStringDictionaries;
}

+ (void)initialize;
@property(nonatomic) BOOL editableFieldInterruptedByAlert; // @synthesize editableFieldInterruptedByAlert=_editableFieldInterruptedByAlert;
@property(retain, nonatomic) NSMutableArray *pendingBrailleStringDictionaries; // @synthesize pendingBrailleStringDictionaries=_pendingBrailleStringDictionaries;
@property(nonatomic) __weak id <BRLTBrailleStateManagerDelegate> translationDelegate; // @synthesize translationDelegate=_translationDelegate;
@property(nonatomic) NSUInteger generationID; // @synthesize generationID=_generationID;
@property(nonatomic) BOOL isTextSearchModeOn; // @synthesize isTextSearchModeOn=_isTextSearchModeOn;
@property(nonatomic) BOOL isSingleLetterInputOn; // @synthesize isSingleLetterInputOn=_isSingleLetterInputOn;
@property(nonatomic) BOOL wordWrapEnabled; // @synthesize wordWrapEnabled=_wordWrapEnabled;
@property(nonatomic) long long lineOffset; // @synthesize lineOffset=_lineOffset;
@property(nonatomic) BOOL displayEnabled; // @synthesize displayEnabled=_displayEnabled;
@property(readonly, nonatomic) BOOL needsDisplayFlush; // @synthesize needsDisplayFlush=_needsDisplayFlush;
// - (void).cxx_destruct;
- (void)brailleDisplayDeletedCharacter:(id)arg1;
- (void)brailleDisplayInsertedCharacter:(id)arg1;
- (void)didInsertScriptString:(id)arg1;
- (void)scriptSelectionDidChange:(NSRange *)arg1;
- (void)replaceScriptStringRange:(NSRange *)arg1 withScriptString:(id)arg2 cursorLocation:(NSUInteger)arg3;
- (void)brailleDisplayStringDidChange:(id)arg1 brailleSelection:(NSRange *)arg2;
- (id)textForPrintBraille:(id)arg1 language:(id)arg2 mode:(NSUInteger)arg3 locations:(id )arg4;
- (id)printBrailleForText:(id)arg1 language:(id)arg2 mode:(NSUInteger)arg3 textPositionsRange:(NSRange *)arg4 locations:(id )arg5;
- (id)translatedBrailleForTableIdentifier:(id)arg1;
- (id)spokenStringForDeletedBrailleString:(id)arg1 speakLiterally:(out BOOL )arg2;
- (id)spokenStringForInsertedBrailleString:(id)arg1 speakLiterally:(out BOOL )arg2;
- (id)_dotDescriptionForBrailleString:(id)arg1;
- (id)_spokenStringForBrailleString:(id)arg1 isDelete:(BOOL)arg2 speakLiterally:(out BOOL )arg3;
- (id)_trimCommonPrefixWithString:(id)arg1 fromString:(id)arg2;
- (id)_translatedTextForPrefixBraille:(id)arg1 printBraille:(id)arg2 contracted:(BOOL)arg3;
- (id)_translatedTextInIsolationForBraille:(id)arg1 contracted:(BOOL)arg2;
- (BOOL)_insertBrailleStringAtCursor:(id)arg1 modifiers:(id)arg2 silently:(BOOL)arg3;
- (BOOL)insertBrailleStringAtCursor:(id)arg1 modifiers:(id)arg2;
- (BOOL)moveCursorToRouterIndex:(NSUInteger)arg1 forwardToScreenReader:(out BOOL )arg2;
- (BOOL)moveCursorRight;
- (BOOL)moveCursorLeft;
- (BOOL)_forwardDeleteAtCursorSilently:(BOOL)arg1;
- (BOOL)forwardDeleteAtCursor;
- (BOOL)_deleteAtCursorSilently:(BOOL)arg1;
- (BOOL)deleteAtCursor;
- (void)discardEdits;
- (void)translate;
@property(readonly, nonatomic) BOOL wantsEdits;
@property(readonly, nonatomic) BOOL hasEdits;
@property(readonly, nonatomic) NSAttributedString *editingString;
@property(readonly, copy) NSString *description;
- (NSUInteger)bufferIndexForRouterIndex:(NSUInteger)arg1;
- (void)addAttributedPaddingToLineBuffer:(id)arg1;
- (void)addAttributedStringToLineBuffer:(id)arg1 brailleOffset:(NSUInteger)arg2;
- (void)_flush;
- (void)_flushRealStatus;
- (BOOL)display;
- (BOOL)_setMainCells:(const char )arg1 length:(long long)arg2;
- (BOOL)_blink:(BOOL)arg1;
- (void)blinker;
- (NSRange *)textRangeForBrailleRange:(NSRange *)arg1;
- (long long)_indexOfWhitespaceAfterIBeam:(long long)arg1 inLine:(id)arg2;
- (long long)_indexOfWhitespaceBeforeIBeam:(long long)arg1 inLine:(id)arg2;
- (int)displayMode;
- (void)setDisplayMode:(int)arg1;
- (int)lineFocus;
- (void)setLineFocus:(int)arg1;
- (BOOL)showDotsSevenAndEight;
- (void)setShowDotsSevenAndEight:(BOOL)arg1;
- (id)newLineDescriptorWithoutPadding;
- (id)newLineDescriptor;
- (void)enumerateWordsBetweenCharacters:(id)arg1 text:(id)arg2 inRange:(NSRange *)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (long long)tokenForRouterIndex:(long long )arg1 location:(long long )arg2 appToken:(id )arg3;
- (BOOL)getStatusRouterIndex:(long long )arg1 forRawIndex:(long long)arg2;
- (long long)lastToken;
- (long long)firstToken;
- (void)setFormatter:(id)arg1;
- (BOOL)anyUnread;
- (void)setAnyUnread:(BOOL)arg1;
- (BOOL)currentUnread;
- (void)setCurrentUnread:(BOOL)arg1;
- (BOOL)panRight;
- (BOOL)canPanRight;
- (BOOL)panLeft;
- (BOOL)canPanLeft;
- (void)_updateOffsets;
- (BOOL)_allowInset;
- (void)setVirtualStatus:(id)arg1 alignment:(int)arg2;
- (void)setRealStatus:(id)arg1;
- (long long)masterStatusCellIndex;
- (void)setMasterStatusCellIndex:(long long)arg1;
- (void)setStatusSize:(long long)arg1;
- (void)setMainSize:(long long)arg1;
- (id)appToken;
- (void)setAppToken:(id)arg1;
- (void)dealloc;
- (id)initWithDriver:(id)arg1 mainSize:(long long)arg2 statusSize:(long long)arg3;
@property(readonly, nonatomic) BRLTBrailleStateManager *stateManager;

@end

