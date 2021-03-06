//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocs/BROperation.h>

@class CKShare, NSString;

@interface BRShareCopyiWorkShareURLOperation : BROperation
{
    CKShare *_share;
    NSString *_appName;
    id /* CDUnknownBlockType */ _shareCopyURLCompletionBlock;
}

+ (id)iWorkShareableExtensions;
@property(copy) id /* CDUnknownBlockType */ shareCopyURLCompletionBlock; // @synthesize shareCopyURLCompletionBlock=_shareCopyURLCompletionBlock;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) CKShare *share; // @synthesize share=_share;
// - (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)main;
- (id)initWithShare:(id)arg1 documentType:(id)arg2;
- (id)initWithShare:(id)arg1 appName:(id)arg2;

@end

