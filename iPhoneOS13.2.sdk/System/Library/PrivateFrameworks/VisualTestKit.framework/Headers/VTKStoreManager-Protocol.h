//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSString, XCTestCase;
@protocol VTKAssertID, VTKStoreManagerSaveResult;

@protocol VTKStoreManager <NSObject>
@property(copy, nonatomic) NSString *itemsDirectory;
- (id <VTKStoreManagerSaveResult>)saveItems:(NSArray *)arg1 withID:(id <VTKAssertID>)arg2 testCase:(XCTestCase *)arg3;
@end

