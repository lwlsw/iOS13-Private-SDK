//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface MCUINavigationViewController : UINavigationController
{
    id /* CDUnknownBlockType */ _showViewControllerCompletionBlock;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ showViewControllerCompletionBlock; // @synthesize showViewControllerCompletionBlock=_showViewControllerCompletionBlock;
// - (void).cxx_destruct;
- (void)didShowViewController:(id)arg1 animated:(BOOL)arg2;
- (BOOL)shouldAutorotate;
- (NSUInteger)supportedInterfaceOrientations;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

