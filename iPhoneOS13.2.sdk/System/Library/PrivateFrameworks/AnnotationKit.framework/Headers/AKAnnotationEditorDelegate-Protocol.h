//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol AKAnnotationEditor;

@protocol AKAnnotationEditorDelegate <NSObject>

@optional
- (void)didShowAnnotationEditor:(id <AKAnnotationEditor>)arg1;
- (void)willShowAnnotationEditor:(id <AKAnnotationEditor>)arg1;
- (void)didHideAnnotationEditor:(id <AKAnnotationEditor>)arg1;
- (void)willHideAnnotationEditor:(id <AKAnnotationEditor>)arg1;
@end

