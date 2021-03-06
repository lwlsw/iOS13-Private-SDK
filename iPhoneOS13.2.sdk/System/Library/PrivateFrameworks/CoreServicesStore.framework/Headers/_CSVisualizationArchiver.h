//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPredicate, _CSVisualizer;

@interface _CSVisualizationArchiver : NSObject
{
//    struct __sFILE _fileHandle;
    BOOL _closeWhenDone;
    BOOL _hadEPIPE;
    BOOL _outputAsXML;
    NSUInteger _stats[2];
    _CSVisualizer *_visualizer;
    NSPredicate *_unitDescriptionPredicate;
}

+ (void)beginProvidingVisualizationArchivesWithMachServiceName:(id)arg1 queue:(id)arg2 creatingVisualizersWithBlock:(CDUnknownBlockType)arg3;
//  (void)provideVisualizerToConnection:(void )arg1 fileHandle:(struct __sFILE )arg2 providerBlock:(CDUnknownBlockType)arg3;
//  (void)processCommandFromConnection:(void )arg1 fileHandle:(struct __sFILE )arg2 providerBlock:(CDUnknownBlockType)arg3;
//  (struct __sFILE )fileHandleFromMachPort:(unsigned int)arg1 forMachServiceName:(id)arg2;
// + (struct __sFILE )fileHandleFromFileportMessage:(const struct FileportMessage )arg1 trailer:(const CDStruct_3d4d02d4 )arg2;
// + (BOOL)canProvideVisualizerForMachServiceName:(id)arg1 givenTrailer:(const CDStruct_3d4d02d4 )arg2;
@property(retain, nonatomic) NSPredicate *unitDescriptionPredicate; // @synthesize unitDescriptionPredicate=_unitDescriptionPredicate;
@property(readonly) _CSVisualizer *visualizer; // @synthesize visualizer=_visualizer;
// - (void).cxx_destruct;
- (void)finishWriting;
- (void)writeAllUnitsWithBlock:(CDUnknownBlockType)arg1;
- (void)writeAllUnitsInTable:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
- (void)writeUnit:(unsigned int)arg1 inTable:(unsigned int)arg2;
- (BOOL)fwrite:(const void *)arg1 size:(NSUInteger)arg2 numberOfItems:(NSUInteger)arg3 error:(id )arg4;
- (BOOL)writeDictionary:(id)arg1 error:(id )arg2;
//  (BOOL)writeMetadata:(id)arg1 forStore:(struct __CSStore )arg2 error:(id )arg3;
- (void)dealloc;
//  (id)initWithVisualizer:(id)arg1 fileHandle:(struct __sFILE )arg2 closeWhenDone:(BOOL)arg3 error:(id )arg4;
//  (id)initWithVisualizer:(id)arg1 fileHandle:(struct __sFILE )arg2 closeWhenDone:(BOOL)arg3 allowCompression:(BOOL)arg4 error:(id )arg5;

@end

