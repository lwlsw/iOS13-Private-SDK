//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCHElementBuilder.h>

__attribute__((visibility("hidden")))
@interface TSCHPieElementBuilder : TSCHElementBuilder
{
}

- (CGPathRef)newElementPathInBody:(id)arg1 forSeries:(id)arg2 outTransform:(CGAffineTransform )arg3 outElementSize:(CGSize )arg4 outClipRect:(CGRect )arg5 outWedgeCenterPoint:(CGPoint )arg6 outSelectionKnobLocations:(id )arg7 withInnerRadius:(id)arg8;
// - (BOOL)hasAxisLineInBody:(id)arg1 forAxis:(id)arg2 outTransform:(CGAffineTransform )arg3 outLine:(CDStruct_e3b9714e )arg4;
// - (NSUInteger)countOfGridLinesInBody:(id)arg1 forAxis:(id)arg2 minor:(BOOL)arg3 outNewLineDescriptors:(CDStruct_183601bc )arg4;
- (NSUInteger)countOfCalloutLinesForSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewClipRect:(CGRect )arg4;
- (NSUInteger)countOfLabelsForSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewTransforms:(CGAffineTransform )arg4 outNewElementSizes:(CGSize )arg5 outNewClipRect:(CGRect )arg6 outNewStrings:(id )arg7;
- (NSUInteger)countOfElementsInSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewElementBounds:(CGRect )arg4 outNewClipRects:(CGRect )arg5 outNewElementPaths:(const CGPathRef)arg6 outSelectionKnobLocations:(id )arg7 withInnerRadius:(id)arg8;
- (NSUInteger)countOfElementsInSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewElementBounds:(CGRect )arg4 outNewClipRects:(CGRect )arg5 outNewElementPaths:(const CGPathRef)arg6 outSelectionKnobLocations:(id )arg7 forHighlightPath:(BOOL)arg8;

@end

