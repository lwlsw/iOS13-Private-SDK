//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMPublishing : FATObject
{
    NSString *_uri;
    NSNumber *_order;
    NSNumber *_ascending;
    NSString *_publicDescription;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSString *publicDescription; // @synthesize publicDescription=_publicDescription;
@property(retain, nonatomic) NSNumber *ascending; // @synthesize ascending=_ascending;
@property(retain, nonatomic) NSNumber *order; // @synthesize order=_order;
@property(retain, nonatomic) NSString *uri; // @synthesize uri=_uri;
// - (void).cxx_destruct;

@end

