//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface NSMutableData (RFC2231Support)
- (void)mf_appendRFC2231CompliantValue:(id)arg1 forKey:(id)arg2;
- (void)mf_makeImmutable;
- (void)mf_convertNetworkLineEndingsToUnix;
- (void)mf_convertNetworkLineEndingsToUnixInRange:(NSRange *)arg1;
- (void)mf_appendCString:(const char )arg1;
@end

