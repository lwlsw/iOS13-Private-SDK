//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIImage;
@protocol DOCThumbnailListener;

@protocol DOCThumbnail <NSObject>
@property(readonly) BOOL hasFinishedTryingToFetchCorrectThumbnail;
@property(readonly, nonatomic) UIImage *thumbnail;
@property(readonly, nonatomic) BOOL isRepresentativeIcon;
@property(readonly, nonatomic, getter=isLoading) BOOL loading;
- (BOOL)registerGenerationCompletionHandler:(void (^)(void))arg1;
- (void)scheduleUpdateIfNeeded;
- (void)removeListener:(id <DOCThumbnailListener>)arg1;
- (void)addListener:(id <DOCThumbnailListener>)arg1;
@end

