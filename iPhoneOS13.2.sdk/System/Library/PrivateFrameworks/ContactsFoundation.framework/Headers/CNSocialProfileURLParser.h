//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CNSocialProfileURLParser : NSObject
{
}

+ (id)servicesDictionary;
+ (id)parseURLStringByInference:(id)arg1;
+ (void)enumerateMatchesWithRegexPattern:(id)arg1 inString:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
+ (void)enumerateServiceMatchesForURLString:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (id)parseURLStringWithRegularExpressions:(id)arg1;
+ (id)parseSocialProfileURL:(id)arg1;

@end

