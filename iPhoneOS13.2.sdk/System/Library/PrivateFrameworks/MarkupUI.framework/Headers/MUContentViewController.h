//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AKController;
@protocol MUContentViewControllerDelegate;

@interface MUContentViewController : UIViewController
{
    id <MUContentViewControllerDelegate> _delegate;
    AKController *_annotationController;
}

@property(retain) AKController *annotationController; // @synthesize annotationController=_annotationController;
@property __weak id <MUContentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 delegate:(id)arg3;

@end

