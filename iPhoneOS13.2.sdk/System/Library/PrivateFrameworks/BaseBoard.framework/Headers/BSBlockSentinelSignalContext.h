//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSBlockSentinelSignalContext-Protocol.h>

@interface BSBlockSentinelSignalContext : NSObject <BSBlockSentinelSignalContext>
{
    BOOL _complete;
    BOOL _failed;
    id _context;
}

+ (id)failureContext;
+ (id)context;
@property(nonatomic, getter=isFailed) BOOL failed; // @synthesize failed=_failed;
@property(nonatomic, getter=isComplete) BOOL complete; // @synthesize complete=_complete;
@property(nonatomic) __weak id context; // @synthesize context=_context;
// - (void).cxx_destruct;

@end

