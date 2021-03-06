//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesUI/ICBaseTextAttachment.h>

@class NSString;

@interface ICTextAttachment : ICBaseTextAttachment
{
}

+ (double)defaultAttachmentThumbnailViewHeight;
+ (BOOL)textAttachmentIsContent:(id)arg1;
+ (id)textAttachmentWithAttachment:(id)arg1;
+ (Class)textAttachmentClassForAttachment:(id)arg1;
- (CGRect)attachmentBoundsIncludingMarginsFromAttachmentBounds:(CGRect)arg1;
// - (CDStruct_d2b197d1)attachmentBoundsMargins;
- (CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(NSUInteger)arg4;
- (double)availableWidthForTextContainer:(id)arg1;
- (CGSize)attachmentSizeForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2;
- (CGSize)attachmentSizeForTextContainer:(id)arg1;
@property(readonly, nonatomic) NSString *viewIdentifier;
- (Class)attachmentViewControllerClass;
- (Class)attachmentViewClass;
- (UIViewController )newlyCreatedViewControllerForManualRendering:(BOOL)arg1 layoutManager:(id)arg2;
- (UIView )newlyCreatedViewForManualRendering;
- (UIView )newlyCreatedView;
@property(readonly, nonatomic) BOOL containsFindableText;
- (BOOL)supportsMultipleThumbnailsOnSameLine;
- (BOOL)supportsThumbnailView;
- (BOOL)requiresSpaceAfterAttachmentForPrinting;
- (id)attachmentAsNSTextAttachment;
- (id)attachmentFileWrapper;
- (id)initWithData:(id)arg1 ofType:(id)arg2;

@end

