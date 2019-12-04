//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, UITargetedDragPreview, UITextPosition, UITextRange, UIView;

@protocol UITextDraggableGeometry 
@property(nonatomic) long long geometryOptions;
- (UITargetedDragPreview * (^)(UIView *, _Bool))targetedPreviewProviderForTextInRange:(struct _NSRange)arg1 dismissing:(_Bool)arg2;
- (UITargetedDragPreview *)previewForDroppingTextInRange:(UITextRange *)arg1 toPosition:(UITextPosition *)arg2 inContainerView:(UIView *)arg3;
- (NSArray *)draggableObjectsForTextRange:(UITextRange *)arg1;
- (UITextRange *)textRangeForAttachmentInTextRange:(UITextRange *)arg1 atPoint:(struct CGPoint)arg2;
- (NSArray *)textRangesForAttachmentsInTextRange:(UITextRange *)arg1;
@end
