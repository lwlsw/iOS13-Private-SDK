//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MetalTools/MTLToolsObject.h>

#import <MetalTools/MTLLibrarySPI-Protocol.h>

@class MTLToolsPointerArray, NSArray, NSString;
@protocol MTLDevice;

@interface MTLToolsLibrary : MTLToolsObject <MTLLibrarySPI>
{
    MTLToolsPointerArray *_functions;
}

@property(readonly, nonatomic) MTLToolsPointerArray *functions; // @synthesize functions=_functions;
@property(readonly) NSArray *externFunctionNames;
@property(readonly) NSArray *functionNames;
- (void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 pipelineLibrary:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 pipelineLibrary:(id)arg3 error:(id *)arg4;
- (id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 error:(id *)arg3;
- (id)newExternFunctionWithName:(id)arg1;
- (id)newFunctionWithName:(id)arg1;
@property(readonly) id <MTLDevice> device;
@property(copy) NSString *label;
@property(copy) NSString *overrideTriple;
- (void)acceptVisitor:(id)arg1;
- (void)dealloc;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
