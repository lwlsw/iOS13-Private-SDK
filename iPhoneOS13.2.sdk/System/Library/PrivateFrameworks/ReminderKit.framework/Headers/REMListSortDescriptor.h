//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@interface REMListSortDescriptor : NSObject <NSSecureCoding>
{
    _Bool _ascending;
    long long _type;
}

+ (_Bool)supportsSecureCoding;
+ (id)sortDescriptorSortingByOrderingInAccountAscending:(_Bool)arg1;
+ (id)sortDescriptorSortingByNameAscending:(_Bool)arg1;
@property(readonly, nonatomic) _Bool ascending; // @synthesize ascending=_ascending;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 ascending:(_Bool)arg2;

@end
