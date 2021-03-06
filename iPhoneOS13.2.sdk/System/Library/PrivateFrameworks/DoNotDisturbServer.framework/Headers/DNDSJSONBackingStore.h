//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSBackingStore-Protocol.h>
#import <DoNotDisturbServer/DNDSSysdiagnoseDataProvider-Protocol.h>

@class NSString, NSURL;
@protocol DNDSBackingStoreDelegate;

@interface DNDSJSONBackingStore : NSObject <DNDSSysdiagnoseDataProvider, DNDSBackingStore>
{
    Class _recordClass;
    NSURL *_fileURL;
    NSUInteger _versionNumber;
    BOOL _deviceOutOfSpace;
    id <DNDSBackingStoreDelegate> _delegate;
}

@property(nonatomic) __weak id <DNDSBackingStoreDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)sysdiagnoseDataForDate:(id)arg1;
@property(readonly, copy, nonatomic) NSString *sysdiagnoseDataIdentifier; // @dynamic sysdiagnoseDataIdentifier;
- (NSUInteger)writeRecord:(id)arg1 error:(id )arg2;
- (id)readRecordWithError:(id )arg1;
- (void)dealloc;
- (id)initWithRecordClass:(Class)arg1 fileURL:(id)arg2 versionNumber:(NSUInteger)arg3;

@end

