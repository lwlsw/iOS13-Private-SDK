//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSTLayoutDynamicContentProtocol-Protocol.h>

@class TSTTableModel;

@interface TSTFilteredTableDynamicContentDelegate : NSObject <TSTLayoutDynamicContentProtocol>
{
    TSTTableModel *mTableModel;
}

- (BOOL)dynamicContentMustDrawOnMainThread;
// - (BOOL)cell:(id )arg1 forCellID:(CDStruct_0441cfb5)arg2;
- (void)dealloc;
- (id)initWithTableModel:(id)arg1;

@end

