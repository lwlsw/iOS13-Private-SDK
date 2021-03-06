//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface MSVCLICommandInterpreter : NSObject
{
    NSMutableDictionary *_commandToInvocationsMap;
    NSMutableArray *_retainedBlockHandlers;
}

// - (void).cxx_destruct;
- (BOOL)executeWithArgumentCount:(int)arg1 arguments:(const char )arg2;
- (BOOL)handlerExistsForCommand:(id)arg1;
- (void)addHandlerToCommand:(id)arg1 withTarget:(id)arg2 action:(SEL)arg3;
- (void)addHandlerToCommand:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end

