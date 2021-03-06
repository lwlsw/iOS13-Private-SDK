//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeAI/HMICameraVideoAnalyzerDelegate-Protocol.h>

__attribute__((visibility("hidden")))
@interface HMICameraVideoAnalyzerDelegateAdapter : NSObject <HMICameraVideoAnalyzerDelegate>
{
    id /* CDUnknownBlockType */ _didAnalyzeFragment;
    id /* CDUnknownBlockType */ _didFailAnalysisForFragment;
    id /* CDUnknownBlockType */ _didFindSignificantEvent;
    id /* CDUnknownBlockType */ _didNotAnalyzeFragment;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ didNotAnalyzeFragment; // @synthesize didNotAnalyzeFragment=_didNotAnalyzeFragment;
@property(copy, nonatomic) id /* CDUnknownBlockType */ didFindSignificantEvent; // @synthesize didFindSignificantEvent=_didFindSignificantEvent;
@property(copy, nonatomic) id /* CDUnknownBlockType */ didFailAnalysisForFragment; // @synthesize didFailAnalysisForFragment=_didFailAnalysisForFragment;
@property(copy, nonatomic) id /* CDUnknownBlockType */ didAnalyzeFragment; // @synthesize didAnalyzeFragment=_didAnalyzeFragment;
// - (void).cxx_destruct;
- (void)analyzer:(id)arg1 didNotAnalyzeFragment:(id)arg2 withResult:(id)arg3;
- (void)analyzer:(id)arg1 didFindSignificantEvent:(id)arg2 inFragment:(id)arg3;
- (void)analyzer:(id)arg1 didFailAnalysisForFragment:(id)arg2 withError:(id)arg3;
- (void)analyzer:(id)arg1 didAnalyzeFragment:(id)arg2 withResult:(id)arg3;
- (void)_finish;

@end

