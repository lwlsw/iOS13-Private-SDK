//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FileProvider/FPTransformOperation.h>

@class NSArray;

@interface FPSetTagsOperation : FPTransformOperation
{
    NSArray *_tagsLists;
}

- (id)fp_prettyDescription;
- (unsigned long long)transformItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)replicateForItems:(id)arg1;
- (id)initWithItems:(id)arg1 tagsLists:(id)arg2;

@end
