//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSString;
@protocol NUPage;

@protocol NUPaging <NSObject>
@property(readonly, nonatomic) NSArray *allPages;
@property(readonly, nonatomic) id <NUPage> lastPage;
@property(readonly, nonatomic) id <NUPage> firstPage;
- (void)forEachPage:(void (^)(id <NUPage>))arg1;
- (id <NUPage>)pageAfterIdentifier:(NSString *)arg1;
- (id <NUPage>)pageForIdentifier:(NSString *)arg1;
- (id <NUPage>)pageBeforeForIdentifier:(NSString *)arg1;
@end

