//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SOExtensionFinder : NSObject
{
    NSObject<OS_dispatch_queue> *_extensionFinderQueue;
    id _matchingContext;
}

- (void)_didFindExtensions:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (id)_soExtensionsForExtensions:(id)arg1;
- (void)endMatchingExtensions;
- (void)beginMatchingExtensionsWithCompletion:(id /* block */)arg1;
- (void)findExtensionWithBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)findExtensionsWithCompletion:(id /* block */)arg1;
- (id)init;

@end
