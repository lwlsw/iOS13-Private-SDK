//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUScriptViewController.h>

@class NSArray, NSString;

@interface SUScriptMediaPickerController : SUScriptViewController
{
}

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
@property(retain) NSString *prompt;
@property BOOL allowsPickingMultipleItems;
@property(readonly) NSArray *mediaTypes;
- (id)_className;
- (void)setNativeViewController:(id)arg1;
- (id)newNativeViewController;
- (id)initWithMediaTypes:(id)arg1;

@end

