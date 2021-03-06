//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSDGLDataBufferAccessor-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface TSDGLDataArrayBuffer : NSObject <TSDGLDataBufferAccessor>
{
    NSMutableArray *_vertexAttributes;
    NSUInteger _vertexCount;
    NSUInteger _dataTypeSizeInBytes;
    unsigned int _bufferUsage;
    BOOL _usesMetalBuffer;
    long long _needsUpdateFirstIndex;
    long long _needsUpdateLastIndex;
    char _gLData;
    BOOL _dataBufferHasBeenSetup;
    unsigned int _gLDataBuffers;
    NSMutableDictionary *_attributeOffsetsDictionary;
    NSArray *_metalDataBuffers;
    NSUInteger _bufferIndex;
    NSUInteger _dataBufferEntrySize;
    NSUInteger _bufferCount;
    NSUInteger _currentBufferIndex;
}

@property(nonatomic) NSUInteger currentBufferIndex; // @synthesize currentBufferIndex=_currentBufferIndex;
@property(readonly, nonatomic) NSUInteger bufferCount; // @synthesize bufferCount=_bufferCount;
@property(readonly, nonatomic) NSUInteger dataBufferEntrySize; // @synthesize dataBufferEntrySize=_dataBufferEntrySize;
@property(readonly, copy) NSString *description;
// - (void)setGLPoint4D:(CDStruct_818bb265)arg1 forAttribute:(id)arg2 atIndex:(NSUInteger)arg3;
// - (CDStruct_818bb265)GLPoint4DForAttribute:(id)arg1 atIndex:(NSUInteger)arg2;
// - (void)setGLPoint3D:(CDStruct_03942939)arg1 forAttribute:(id)arg2 atIndex:(NSUInteger)arg3;
// - (CDStruct_03942939)GLPoint3DForAttribute:(id)arg1 atIndex:(NSUInteger)arg2;
// - (void)setGLPoint2D:(CDStruct_6e3f967a)arg1 forAttribute:(id)arg2 atIndex:(NSUInteger)arg3;
// - (CDStruct_6e3f967a)GLPoint2DForAttribute:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setCGFloat:(double)arg1 forAttribute:(id)arg2 atIndex:(NSUInteger)arg3;
- (void)setGLfloat:(float)arg1 forAttribute:(id)arg2 atIndex:(NSUInteger)arg3;
- (float)GLfloatForAttribute:(id)arg1 atIndex:(NSUInteger)arg2;
- (NSUInteger)vertexCount;
@property(readonly, nonatomic) BOOL hasUpdatedData;
- (char )dataPointer;
- (void)swapGPUDataBuffers;
- (void)encodeArrayBufferWithEncoder:(id)arg1 atIndex:(long long)arg2;
- (void)enableArrayBufferWithDevice:(id)arg1;
- (void)disableVertexAttributeArrayBuffersWithShader:(id)arg1;
- (void)enableVertexAttributeArrayBuffersWithShader:(id)arg1;
- (void)addIndexNeedsUpdate:(long long)arg1;
- (void)addIndexRangeNeedsUpdate:(NSRange *)arg1;
- (void)addAllIndexesNeedUpdate;
- (void)dealloc;
- (id)initWithVertexAttributes:(id)arg1 vertexCount:(NSUInteger)arg2 bufferCount:(NSUInteger)arg3;
- (NSUInteger)p_bufferOffsetOfAttribute:(id)arg1 atIndex:(NSUInteger)arg2 component:(NSUInteger)arg3;
- (void)p_setupMetalDataBufferIfNecessaryWithDevice:(id)arg1;
- (void)updateDataBufferIfNecessary;
- (void)p_setupGLDataBufferIfNecessary;

@end

