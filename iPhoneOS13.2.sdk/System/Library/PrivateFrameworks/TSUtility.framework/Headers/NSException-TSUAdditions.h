//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface NSException (TSUAdditions)
+ (void)tsu_raiseWithError:(id)arg1;
+ (void)errnoRaise:(id)arg1 format:(id)arg2;
- (id)tsu_error;
- (int)localErrno;
@end

