//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSPDataStorage-Protocol.h>

@class NSString, SFUDataRepresentation;

@interface TSPReadOnlyProvidedDataStorage : NSObject <TSPDataStorage>
{
    SFUDataRepresentation *_dataRep;
}

// - (void).cxx_destruct;
- (BOOL)writeToBundleWriter:(id)arg1 preferredFilename:(id)arg2 filename:(id )arg3 didCopyDataToBundle:(BOOL )arg4;
- (id)AVAssetWithOptions:(id)arg1 usingResourceLoaderWithContentTypeUTI:(id)arg2;
- (id)AVAssetWithOptions:(id)arg1 contentTypeUTI:(id)arg2;
@property(readonly, nonatomic) unsigned char packageIdentifier;
@property(readonly, nonatomic) NSString *packageLocator;
- (BOOL)isInPackage:(id)arg1;
@property(readonly, nonatomic) BOOL readOnly;
- (void)performIOChannelReadWithAccessor:(CDUnknownBlockType)arg1;
- (void)performReadWithAccessor:(CDUnknownBlockType)arg1;
- (NSUInteger)length;
- (id)applicationDataLocator;
- (id)AVAssetWithOptions:(id)arg1;
- (id)NSDataWithOptions:(NSUInteger)arg1;
- (CGImageSource )newCGImageSource;
@property(readonly, nonatomic) NSUInteger encodedLength;
- (CGDataProvider )newCGDataProvider;
- (id)bookmarkDataWithOptions:(NSUInteger)arg1;
- (id)filenameForPreferredFilename:(id)arg1;
@property(readonly, nonatomic) NSString *documentResourceLocator;
- (id)initWithDataRepresentation:(id)arg1;

@end

