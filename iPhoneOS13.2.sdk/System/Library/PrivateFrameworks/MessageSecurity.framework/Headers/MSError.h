//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


__attribute__((visibility("hidden")))
@interface MSError : NSError
{
}

+ (id)MSErrorWithDomain:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3 description:(id)arg4;
+ (id)MSErrorWithDomain:(id)arg1 code:(long long)arg2 errorLevel:(NSUInteger)arg3 underlyingError:(id)arg4 description:(id)arg5;
// + (id)MSErrorWithDomain:(id)arg1 code:(long long)arg2 errorLevel:(NSUInteger)arg3 underlyingError:(id)arg4 description:(id)arg5 arguments:(struct __va_list_tag [1])arg6;

@end

