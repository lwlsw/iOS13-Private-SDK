//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WBSPasswordManagerURL : NSObject
{
}

+ (id)valueForPasswordManagerResourceDictionary:(id)arg1 key:(id)arg2;
+ (id)valueForPasswordManagerURL:(id)arg1 key:(id)arg2;
+ (id)dictionaryWithPasswordManagerURL:(id)arg1;
+ (id)_resourceSpecifierDictionaryForURL:(id)arg1;
+ (BOOL)urlIsPasswordManagerURL:(id)arg1;
+ (BOOL)_resourceSpecifierDictionaryIsPasswordManagerResourceSpecifierDictionary:(id)arg1;
+ (BOOL)_urlIsPasswordManagerURLWithScheme:(id)arg1 resourceSpecifierDictionary:(id)arg2;
+ (id)passwordManagerURLWithDictionary:(id)arg1;
+ (id)_resourceSpecifierEncodedKey:(id)arg1 value:(id)arg2;

@end

