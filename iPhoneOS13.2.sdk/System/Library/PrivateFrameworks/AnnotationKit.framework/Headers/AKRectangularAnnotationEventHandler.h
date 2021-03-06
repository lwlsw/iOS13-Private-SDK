//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/AKAnnotationEventHandler.h>

@interface AKRectangularAnnotationEventHandler : AKAnnotationEventHandler
{
    CGPoint _lastMungedPositionInModel;
}

@property CGPoint lastMungedPositionInModel; // @synthesize lastMungedPositionInModel=_lastMungedPositionInModel;
- (void)_updateModelFlippednessWithCurrentPoint:(CGPoint)arg1;
- (void)updateModelWithCurrentPoint:(CGPoint)arg1;
- (CGRect)_rectForModifiedRotatedRect:(CGRect)arg1 withOriginal:(CGRect)arg2 andRotation:(double)arg3;
- (void)setupDraggingConstraints;
- (void)getInitialDraggedPoint:(CGPoint )arg1 otherPoint:(CGPoint )arg2 center:(CGPoint )arg3 forEvent:(id)arg4 orRecognizer:(id)arg5;

@end

