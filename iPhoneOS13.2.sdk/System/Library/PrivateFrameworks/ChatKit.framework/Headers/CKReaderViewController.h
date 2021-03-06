//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//



@class NSAttributedString, NSString, UITextView;
@protocol CKReaderViewControllerDelegate;

@interface CKReaderViewController : UIViewController <UIWebViewDelegate>
{
    id <CKReaderViewControllerDelegate> _delegate;
    NSString *_messageGUID;
    UITextView *_textView;
}

+ (id)readerScrollPositionCache;
+ (id)readerViewControllerForChatItem:(id)arg1;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(copy, nonatomic) NSString *messageGUID; // @synthesize messageGUID=_messageGUID;
@property(nonatomic) __weak id <CKReaderViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
@property(nonatomic) NSRange * visibleRange; // @dynamic visibleRange;
@property(copy, nonatomic) NSAttributedString *text; // @dynamic text;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (NSUInteger)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)loadView;
- (id)init;
- (void)dealloc;

@end

