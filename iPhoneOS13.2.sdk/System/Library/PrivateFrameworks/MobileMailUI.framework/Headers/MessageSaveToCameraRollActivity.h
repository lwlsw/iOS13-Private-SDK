//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol MFAttachmentHandlingDelegate;

@interface MessageSaveToCameraRollActivity : UISaveToCameraRollActivity
{
    id <MFAttachmentHandlingDelegate> _attachmentHandlingDelegate;
    long long _context;
}

@property(nonatomic) long long context; // @synthesize context=_context;
@property(nonatomic) __weak id <MFAttachmentHandlingDelegate> attachmentHandlingDelegate; // @synthesize attachmentHandlingDelegate=_attachmentHandlingDelegate;
// - (void).cxx_destruct;
- (void)prepareWithActivityItems:(id)arg1;
- (void)_prepareWithActivityItems:(id)arg1;
- (id)_beforeActivity;
- (id)_activityImage;
- (id)activityType;
- (id)initWithAttachmentHandlingDelegate:(id)arg1 context:(long long)arg2;
- (id)init;

@end

