//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface PICompositionSerializationResult : NSObject
{
    NSData *_data;
    NSString *_formatIdentifier;
    NSString *_formatVersion;
}

@property(retain, nonatomic) NSString *formatVersion; // @synthesize formatVersion=_formatVersion;
@property(retain, nonatomic) NSString *formatIdentifier; // @synthesize formatIdentifier=_formatIdentifier;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
// - (void).cxx_destruct;

@end

