//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AXElementGroup;

@protocol AXGroupable <NSObject>
@property(nonatomic) AXElementGroup *parentGroup;
@property(readonly, nonatomic) CGRect frame;
- (AXElementGroup *)keyboardContainer;
- (BOOL)isGroup;
- (AXElementGroup *)highestAncestorGroup;
@end

