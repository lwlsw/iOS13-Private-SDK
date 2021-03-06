//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@class DOCDocumentSource, DOCSourceSearchingContext, NSString, PSSpecifier;

@interface PSDocumentsPolicyController : PSListController
{
    BOOL _isFirstSourceResults;
    PSSpecifier *_groupSpecifier;
    DOCDocumentSource *_selectedDocumentSource;
    NSString *_bundleIdentifier;
    DOCSourceSearchingContext *_searchingContext;
}

@property(nonatomic) BOOL isFirstSourceResults; // @synthesize isFirstSourceResults=_isFirstSourceResults;
@property(retain, nonatomic) DOCSourceSearchingContext *searchingContext; // @synthesize searchingContext=_searchingContext;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) DOCDocumentSource *selectedDocumentSource; // @synthesize selectedDocumentSource=_selectedDocumentSource;
@property(retain, nonatomic) PSSpecifier *groupSpecifier; // @synthesize groupSpecifier=_groupSpecifier;
// - (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)setDocumentSource:(id)arg1;
- (id)documentSource;
- (void)updateFooterAnimated:(BOOL)arg1;
- (void)updateRadioGroupWithSources:(id)arg1 animated:(BOOL)arg2;
- (id)specifiers;
- (void)dealloc;

@end

