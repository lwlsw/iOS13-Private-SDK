//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FileProvider/FPTransformOperation.h>

@class FPItem;

@interface FPUntrashOperation : FPTransformOperation
{
    FPItem *_restoreDirectory;
    id /* block */ _untrashCompletionBlock;
}

@property(copy, nonatomic) id /* block */ untrashCompletionBlock; // @synthesize untrashCompletionBlock=_untrashCompletionBlock;
- (id)fp_prettyDescription;
- (void)presendNotifications;
- (void)postStitchingFinishWithResult:(id)arg1 error:(id)arg2;
- (unsigned long long)transformItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)initWithItems:(id)arg1 restoreDirectory:(id)arg2;
- (id)replicateForItems:(id)arg1;

@end
