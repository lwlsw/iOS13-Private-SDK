//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BRCChecksummingOutputStream, NSData;

@interface BRCPackageChecksummer : NSObject
{
    BRCChecksummingOutputStream *_stream;
}

// - (void).cxx_destruct;
- (void)done;
- (BOOL)addItem:(id)arg1 error:(id )arg2;
- (id)init;
@property(readonly, nonatomic) NSData *signature;

@end

