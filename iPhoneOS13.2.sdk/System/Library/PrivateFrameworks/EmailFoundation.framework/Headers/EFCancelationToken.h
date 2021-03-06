//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailFoundation/EFInvocationToken.h>

#import <EmailFoundation/EFCancelable-Protocol.h>

@interface EFCancelationToken : EFInvocationToken <EFCancelable>
{
}

+ (id)_descriptionString;
+ (id)tokenWithCancelationBlock:(CDUnknownBlockType)arg1;
+ (id)tokenWithLabel:(id)arg1 cancelationBlock:(CDUnknownBlockType)arg2;
- (void)removeAllCancelationBlocks;
- (void)addCancelable:(id)arg1;
- (void)addCancelationBlock:(CDUnknownBlockType)arg1;
@property(readonly, getter=isCanceled) BOOL canceled;
- (void)cancel;

@end

