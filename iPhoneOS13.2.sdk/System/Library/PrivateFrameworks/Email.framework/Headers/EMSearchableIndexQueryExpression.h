//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface EMSearchableIndexQueryExpression : NSObject <NSCopying>
{
    NSString *_queryString;
}

+ (id)expressionWithQueryString:(id)arg1;
@property(copy, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
// - (void).cxx_destruct;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithQueryString:(id)arg1;
- (id)init;

@end

