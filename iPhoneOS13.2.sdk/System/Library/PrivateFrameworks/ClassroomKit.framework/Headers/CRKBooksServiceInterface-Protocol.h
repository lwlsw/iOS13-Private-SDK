//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CRKFetchBooksRequest, CRKFetchChaptersRequest;

@protocol CRKBooksServiceInterface <NSObject>
- (void)fetchChaptersWithRequest:(CRKFetchChaptersRequest *)arg1 completion:(void (^)(CRKFetchChaptersResultObject *, NSError *))arg2;
- (void)fetchBooksWithRequest:(CRKFetchBooksRequest *)arg1 completion:(void (^)(CRKFetchBooksResultObject *, NSError *))arg2;
@end

