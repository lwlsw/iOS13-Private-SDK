//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLSyncableObject-Protocol.h>

@class NSString;

@protocol PLSyncablePerson <NSObject, PLSyncableObject>
@property(readonly, nonatomic) BOOL keyFaceIsPicked;
@property(readonly, nonatomic) BOOL isTombstone;
@property(readonly, nonatomic) BOOL graphVerified;
@property(readonly, nonatomic) BOOL userVerified;
@property(retain, nonatomic) NSString *fullName;
@property(retain, nonatomic) NSString *personUUID;
- (NSString *)syncDescription;
- (NSString *)pointerDescription;
- (void)setKeyFaceToPicked;
@end

