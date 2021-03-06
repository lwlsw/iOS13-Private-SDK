//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUAdContextProvider-Protocol.h>

@class FCIssue;
@protocol FCHeadlineProviding;

@interface NUHeadlineAdContextProvider : NSObject <NUAdContextProvider>
{
    id <FCHeadlineProviding> _headline;
    FCIssue *_issue;
}

@property(readonly, nonatomic) FCIssue *issue; // @synthesize issue=_issue;
@property(readonly, nonatomic) id <FCHeadlineProviding> headline; // @synthesize headline=_headline;
// - (void).cxx_destruct;
- (id)contextProvidersForKeyPath:(id)arg1;
- (id)adContextValueForKeyPath:(id)arg1;
- (id)initWithHeadline:(id)arg1 issue:(id)arg2;

@end

