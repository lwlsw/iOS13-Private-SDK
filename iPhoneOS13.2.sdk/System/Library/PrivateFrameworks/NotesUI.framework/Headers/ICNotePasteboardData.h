//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class ICDataPersister, NSData;

@interface ICNotePasteboardData : NSObject <NSSecureCoding>
{
    NSData *_attributedStringData;
    ICDataPersister *_dataPersister;
}

+ (BOOL)supportsSecureCoding;
+ (id)pasteboardDataFromPersistenceData:(id)arg1;
@property(readonly, nonatomic) ICDataPersister *dataPersister; // @synthesize dataPersister=_dataPersister;
@property(readonly, nonatomic) NSData *attributedStringData; // @synthesize attributedStringData=_attributedStringData;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)persistenceData;
- (id)initWithAttributedStringData:(id)arg1 dataPersister:(id)arg2;
- (id)init;

@end

