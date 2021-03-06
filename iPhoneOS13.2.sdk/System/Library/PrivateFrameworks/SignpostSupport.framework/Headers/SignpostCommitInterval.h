//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SignpostSupport/SignpostAnimationSubInterval.h>

@class NSString;

@interface SignpostCommitInterval : SignpostAnimationSubInterval
{
    unsigned int _transactionSeed;
    int _pid;
    NSUInteger _threadID;
    NSString *_processName;
    NSString *_executablePath;
}

@property(readonly, nonatomic) NSString *executablePath; // @synthesize executablePath=_executablePath;
@property(readonly, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
@property(readonly, nonatomic) NSUInteger threadID; // @synthesize threadID=_threadID;
@property(readonly, nonatomic) unsigned int transactionSeed; // @synthesize transactionSeed=_transactionSeed;
// - (void).cxx_destruct;
- (id)initWithCommitInterval:(id)arg1;

@end

