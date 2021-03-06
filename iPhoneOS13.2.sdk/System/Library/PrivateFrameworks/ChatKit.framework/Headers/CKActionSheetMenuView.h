//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//



@class CKActionSheetMenuTitleView;
@protocol CKActionSheetMenuViewDelegate;

@interface CKActionSheetMenuView : UIInterfaceActionGroupView <UIInterfaceActionHandlerInvocationDelegate>
{
    CKActionSheetMenuTitleView *_titleView;
    id <CKActionSheetMenuViewDelegate> _delegate;
}

@property(nonatomic) __weak id <CKActionSheetMenuViewDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)setFrame:(CGRect)arg1;
- (void)updateTitleConstraintsForBoundingRect:(CGRect)arg1;
- (void)setTitle:(id)arg1;
- (id)initWithTitle:(id)arg1 interfaceActions:(id)arg2;
- (void)dismissSelf;
- (void)interfaceAction:(id)arg1 invokeActionHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;

@end

