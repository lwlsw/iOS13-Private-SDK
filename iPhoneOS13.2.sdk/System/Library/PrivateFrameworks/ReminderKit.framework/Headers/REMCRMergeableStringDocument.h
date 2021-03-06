//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSAttributedString, NSString, REMReplicaIDSource, TTMergeableStringVersionedDocument;

@interface REMCRMergeableStringDocument : NSObject <NSCopying, NSSecureCoding>
{
    REMReplicaIDSource *_replicaIDSource;
    TTMergeableStringVersionedDocument *_document;
}

+ (BOOL)supportsSecureCoding;
+ (id)documentFromSerializedData:(id)arg1 replicaIDSource:(id)arg2 forKey:(id)arg3 ofObjectID:(id)arg4;
@property(retain, nonatomic) TTMergeableStringVersionedDocument *document; // @synthesize document=_document;
@property(retain, nonatomic) REMReplicaIDSource *replicaIDSource; // @synthesize replicaIDSource=_replicaIDSource;
// - (void).cxx_destruct;
- (id)mergedWithDocument:(id)arg1 error:(id )arg2;
- (BOOL)isEqual:(id)arg1;
- (id)serializedData;
- (id)mutableDocument;
@property(readonly, nonatomic) NSString *string;
@property(readonly, nonatomic) NSAttributedString *attributedString;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithReplicaIDSource:(id)arg1 document:(id)arg2;
- (id)initWithReplicaIDSource:(id)arg1 serializedData:(id)arg2 error:(id )arg3;
- (id)initWithReplicaIDSource:(id)arg1 string:(id)arg2;

@end

