//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AFCoercion : NSObject
{
    id /* block */ _block;
}

+ (id)stringToUUIDCoercion;
+ (id)typeAssertionWithClass:(Class)arg1;
+ (id)identityCoercion;
+ (id)coercionWithBlock:(id /* block */)arg1;
- (id)coerceObject:(id)arg1 error:(id *)arg2;
- (id)init;
- (id)initWithBlock:(id /* block */)arg1;

@end
