//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AAClient : NSObject
{
    // Error parsing type: , name: identifier
    // Error parsing type: , name: name
    // Error parsing type: , name: version
    // Error parsing type: , name: build
}

- (id)init;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 version:(id)arg3 build:(long long)arg4;
- (id)initWithBundle:(id)arg1;
@property(nonatomic, readonly) NSString *fullVersion;
@property(nonatomic, readonly) long long build; // @synthesize build;
@property(nonatomic, readonly) NSString *version;
@property(nonatomic, readonly) NSString *name;
@property(nonatomic, readonly) NSString *identifier;

@end
