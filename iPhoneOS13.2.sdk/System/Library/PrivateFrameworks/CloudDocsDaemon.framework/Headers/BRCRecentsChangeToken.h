//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface BRCRecentsChangeToken : NSObject
{
    NSUInteger _notifRank;
    NSUInteger _databaseID;
}

+ (BOOL)supportsSecureCoding;
+ (id)changeTokenFromData:(id)arg1;
@property(nonatomic) NSUInteger databaseID; // @synthesize databaseID=_databaseID;
@property(nonatomic) NSUInteger notifRank; // @synthesize notifRank=_notifRank;
- (id)description;
- (id)toData;

@end

