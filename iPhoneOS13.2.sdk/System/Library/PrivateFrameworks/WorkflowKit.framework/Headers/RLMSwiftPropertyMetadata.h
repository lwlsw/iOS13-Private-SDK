//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface RLMSwiftPropertyMetadata : NSObject
{
    int _propertyType;
    NSString *_propertyName;
    NSString *_className;
    NSString *_linkedPropertyName;
    NSUInteger _kind;
}

+ (id)metadataForNilLiteralOptionalProperty:(id)arg1;
+ (id)metadataForOptionalProperty:(id)arg1 type:(int)arg2;
+ (id)metadataForLinkingObjectsProperty:(id)arg1 className:(id)arg2 linkedPropertyName:(id)arg3;
+ (id)metadataForListProperty:(id)arg1;
+ (id)metadataForOtherProperty:(id)arg1;
@property(nonatomic) NSUInteger kind; // @synthesize kind=_kind;
@property(nonatomic) int propertyType; // @synthesize propertyType=_propertyType;
@property(retain, nonatomic) NSString *linkedPropertyName; // @synthesize linkedPropertyName=_linkedPropertyName;
@property(retain, nonatomic) NSString *className; // @synthesize className=_className;
@property(retain, nonatomic) NSString *propertyName; // @synthesize propertyName=_propertyName;
// - (void).cxx_destruct;

@end

