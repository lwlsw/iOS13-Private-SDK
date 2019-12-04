//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet;

@interface SGQuickResponsesReplies : NSObject
{
    NSArray *_models;
    NSArray *_semanticClasses;
    NSArray *_styleGroups;
    NSArray *_replyTexts;
    NSArray *_selectedPseudocounts;
    NSArray *_semanticClassReplyTextStrings;
    NSArray *_semanticClassSelectedPseudocounts;
    NSArray *_semanticClassParent;
    NSArray *_styleGroupParent;
    NSArray *_replyTextParent;
    NSArray *_categoryModels;
    NSArray *_categorySemanticClasses;
    NSArray *_categoryStyleGroups;
    NSArray *_semanticClassStyleGroups;
    NSArray *_semanticClassReplyTexts;
    NSArray *_styleGroupReplyTexts;
    NSSet *_replyTextsSet;
}

+ (id)selectedPseudocountsFromModels:(id)arg1;
+ (id)subclassesFromClasses:(id)arg1 subclassArray:(id)arg2;
+ (id)modelSemanticClassesFromModels:(id)arg1;
+ (id)categoryModelsFromModels:(id)arg1;
+ (id)replyModelsForArray:(id)arg1;
+ (_Bool)isZeroBasedAndContiguous:(id)arg1;
+ (id)parentArraysFromNestedArray:(id)arg1 models:(id)arg2;
+ (id)nestedArrayFromFlatArray:(id)arg1 nestedIndexes:(id)arg2;
+ (id)flattenedArraysFromNestedArray:(id)arg1;
+ (id)indexedArraysFromNestedArray:(id)arg1;
+ (id)nestedArrayFromModels:(id)arg1;
@property(readonly, nonatomic) NSSet *replyTextsSet; // @synthesize replyTextsSet=_replyTextsSet;
@property(readonly, nonatomic) NSArray *styleGroupReplyTexts; // @synthesize styleGroupReplyTexts=_styleGroupReplyTexts;
@property(readonly, nonatomic) NSArray *semanticClassReplyTexts; // @synthesize semanticClassReplyTexts=_semanticClassReplyTexts;
@property(readonly, nonatomic) NSArray *semanticClassStyleGroups; // @synthesize semanticClassStyleGroups=_semanticClassStyleGroups;
@property(readonly, nonatomic) NSArray *categoryStyleGroups; // @synthesize categoryStyleGroups=_categoryStyleGroups;
@property(readonly, nonatomic) NSArray *categorySemanticClasses; // @synthesize categorySemanticClasses=_categorySemanticClasses;
@property(readonly, nonatomic) NSArray *categoryModels; // @synthesize categoryModels=_categoryModels;
@property(readonly, nonatomic) NSArray *replyTextParent; // @synthesize replyTextParent=_replyTextParent;
@property(readonly, nonatomic) NSArray *styleGroupParent; // @synthesize styleGroupParent=_styleGroupParent;
@property(readonly, nonatomic) NSArray *semanticClassParent; // @synthesize semanticClassParent=_semanticClassParent;
@property(readonly, nonatomic) NSArray *semanticClassSelectedPseudocounts; // @synthesize semanticClassSelectedPseudocounts=_semanticClassSelectedPseudocounts;
@property(readonly, nonatomic) NSArray *semanticClassReplyTextStrings; // @synthesize semanticClassReplyTextStrings=_semanticClassReplyTextStrings;
@property(readonly, nonatomic) NSArray *selectedPseudocounts; // @synthesize selectedPseudocounts=_selectedPseudocounts;
@property(readonly, nonatomic) NSArray *replyTexts; // @synthesize replyTexts=_replyTexts;
@property(readonly, nonatomic) NSArray *styleGroups; // @synthesize styleGroups=_styleGroups;
@property(readonly, nonatomic) NSArray *semanticClasses; // @synthesize semanticClasses=_semanticClasses;
@property(readonly, nonatomic) NSArray *models; // @synthesize models=_models;
- (id)initWithArray:(id)arg1;

@end
