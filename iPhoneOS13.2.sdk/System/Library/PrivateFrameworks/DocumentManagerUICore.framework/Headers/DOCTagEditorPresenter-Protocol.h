//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray;
@protocol DOCTagEditorDelegate;

@protocol DOCTagEditorPresenter <NSObject>
@property(retain, nonatomic) NSArray *items;
@property(nonatomic) __weak id <DOCTagEditorDelegate> delegate;
@property(nonatomic) BOOL isExtremelyVerticallyCompact;
@property(nonatomic) BOOL delayResizingUntilAppeared;
@property(nonatomic) BOOL pinTextFieldToTopBound;
@property(nonatomic) BOOL useCompactColorPicker;
@property(nonatomic) BOOL showAddTagConfirmButtons;
@end

