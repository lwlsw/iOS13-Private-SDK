//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class SXDragManager, UIView;
@protocol SXDraggable;

@protocol SXDragManagerDataSource
- (id <SXDraggable>)dragManager:(SXDragManager *)arg1 dragableAtLocation:(CGPoint)arg2;
- (UIView *)viewForDragManager:(SXDragManager *)arg1;
@end

