//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString;
@protocol FCSpecialEventArticleProviding, FCSpecialEventWebEmbedProviding;

@protocol FCSpecialEventItemProviding <NSObject, NSCopying>
@property(nonatomic, readonly) NSString *identifier;
@property(nonatomic, readonly) NSString *actionUrlString;
@property(nonatomic, readonly) NSString *actionTitle;
@property(nonatomic, readonly) NSString *title;
@property(nonatomic, readonly) NSUInteger itemType;
@property(nonatomic, readonly) id <FCSpecialEventWebEmbedProviding> asWebEmbed;
@property(nonatomic, readonly) id <FCSpecialEventArticleProviding> asArticle;
@end

