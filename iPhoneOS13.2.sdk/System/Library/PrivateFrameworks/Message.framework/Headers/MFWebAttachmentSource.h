//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MFLock, NSMutableDictionary;

@interface MFWebAttachmentSource : NSObject
{
    MFLock *_attachmentsLock;
    NSMutableDictionary *_attachmentsByURL;
}

+ (id)allSources;
+ (id)_setOfAllSources;
// - (void).cxx_destruct;
- (void)removeAttachmentForURL:(id)arg1;
- (BOOL)setAttachment:(id)arg1 forURL:(id)arg2;
- (id)attachmentForURL:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)init;

@end

