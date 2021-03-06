//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, UIFont;

@interface PKPassFieldTemplate : NSObject
{
    UIFont *_labelFont;
    UIFont *_valueFont;
    Class _viewSubclass;
    NSNumber *_boxedTextAlignment;
    NSNumber *_boxedVerticalPadding;
    NSNumber *_boxedSuppressesLabel;
    NSNumber *_boxedLabelCaseStyle;
    NSNumber *_boxedValueSignificant;
    NSNumber *_boxedValueCanWrap;
    NSNumber *_boxedSuppressesEmptyLabel;
}

+ (id)_templateByResolvingTemplate:(id)arg1 withDefault:(id)arg2;
+ (id)fieldTemplateWithViewSubclass:(Class)arg1;
+ (id)fieldTemplateWithVerticalPadding:(double)arg1;
+ (id)fieldTemplateWithTextAlignment:(long long)arg1;
@property(retain, nonatomic) NSNumber *boxedSuppressesEmptyLabel; // @synthesize boxedSuppressesEmptyLabel=_boxedSuppressesEmptyLabel;
@property(retain, nonatomic) NSNumber *boxedValueCanWrap; // @synthesize boxedValueCanWrap=_boxedValueCanWrap;
@property(retain, nonatomic) NSNumber *boxedValueSignificant; // @synthesize boxedValueSignificant=_boxedValueSignificant;
@property(retain, nonatomic) NSNumber *boxedLabelCaseStyle; // @synthesize boxedLabelCaseStyle=_boxedLabelCaseStyle;
@property(retain, nonatomic) NSNumber *boxedSuppressesLabel; // @synthesize boxedSuppressesLabel=_boxedSuppressesLabel;
@property(retain, nonatomic) NSNumber *boxedVerticalPadding; // @synthesize boxedVerticalPadding=_boxedVerticalPadding;
@property(retain, nonatomic) NSNumber *boxedTextAlignment; // @synthesize boxedTextAlignment=_boxedTextAlignment;
@property(retain, nonatomic) Class viewSubclass; // @synthesize viewSubclass=_viewSubclass;
@property(retain, nonatomic) UIFont *valueFont; // @synthesize valueFont=_valueFont;
@property(retain, nonatomic) UIFont *labelFont; // @synthesize labelFont=_labelFont;
// - (void).cxx_destruct;
@property(nonatomic) BOOL valueCanWrap;
@property(nonatomic) BOOL valueSignificant;
@property(nonatomic) long long labelCaseStyle;
@property(nonatomic) BOOL suppressesEmptyLabel;
@property(nonatomic) BOOL suppressesLabel;
@property(nonatomic) double verticalPadding;
@property(nonatomic) long long textAlignment;

@end

