//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, NSURL, _UIDocumentPickerNSURLWrapper;

@protocol _UIDocumentPickerViewControllerHost <NSObject>
- (void)_stitchFileCreationAtURL:(NSURL *)arg1;
- (void)_dismissWithOption:(NSString *)arg1;
- (void)_didSelectPicker;
- (void)_dismissViewController;
- (void)_didSelectURLBookmark:(NSString *)arg1;
- (void)_didSelectURLWrapper:(_UIDocumentPickerNSURLWrapper *)arg1;
@end

