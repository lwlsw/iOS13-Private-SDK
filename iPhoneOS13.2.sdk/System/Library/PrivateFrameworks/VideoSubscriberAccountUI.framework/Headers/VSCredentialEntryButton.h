//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, VSCredentialEntryViewModel;

__attribute__((visibility("hidden")))
@interface VSCredentialEntryButton : NSObject
{
    VSCredentialEntryViewModel *_owningViewModel;
    NSString *_title;
}

@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak VSCredentialEntryViewModel *owningViewModel; // @synthesize owningViewModel=_owningViewModel;
// - (void).cxx_destruct;

@end

