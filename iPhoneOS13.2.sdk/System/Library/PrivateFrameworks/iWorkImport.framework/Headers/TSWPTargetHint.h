//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSWPOffscreenColumn-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSWPTargetHint : NSObject <TSWPOffscreenColumn, NSCopying>
{
    BOOL _usedParagraphHeights;
    BOOL _endOfLayout;
    BOOL _lastLineIsEmptyAndHasListLabel;
    BOOL _textIsVertical;
    BOOL _terminatedByBreak;
    NSUInteger _nextWidowPullsDownFromCharIndex;
    NSUInteger _columnCount;
    NSUInteger _lineFragmentCount;
    NSRange * _range;
    NSRange * _anchoredRange;
    CGRect _frameBounds;
}

@property(nonatomic) BOOL terminatedByBreak; // @synthesize terminatedByBreak=_terminatedByBreak;
@property(nonatomic) BOOL textIsVertical; // @synthesize textIsVertical=_textIsVertical;
@property(nonatomic) BOOL lastLineIsEmptyAndHasListLabel; // @synthesize lastLineIsEmptyAndHasListLabel=_lastLineIsEmptyAndHasListLabel;
@property(nonatomic) BOOL endOfLayout; // @synthesize endOfLayout=_endOfLayout;
@property(nonatomic) BOOL usedParagraphHeights; // @synthesize usedParagraphHeights=_usedParagraphHeights;
@property(nonatomic) NSUInteger lineFragmentCount; // @synthesize lineFragmentCount=_lineFragmentCount;
@property(nonatomic) NSUInteger columnCount; // @synthesize columnCount=_columnCount;
@property(nonatomic) NSRange * anchoredRange; // @synthesize anchoredRange=_anchoredRange;
@property(nonatomic) NSUInteger nextWidowPullsDownFromCharIndex; // @synthesize nextWidowPullsDownFromCharIndex=_nextWidowPullsDownFromCharIndex;
@property(nonatomic) NSRange * range; // @synthesize range=_range;
@property(nonatomic) CGRect frameBounds; // @synthesize frameBounds=_frameBounds;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
- (void)trimToCharIndex:(NSUInteger)arg1 inTarget:(id)arg2 removeFootnoteReferenceCount:(NSUInteger)arg3 removeAutoNumberFootnoteCount:(NSUInteger)arg4;
// - (id)copyWithZone:(_NSZone )arg1;

@end

