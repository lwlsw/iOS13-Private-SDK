//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI2/FCHeadlineMetadata-Protocol.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface _TtC7NewsUI219MagazineFeedArticle : NSObject <FCHeadlineMetadata>
{
    // Error parsing type: , name: articleID
    // Error parsing type: , name: title
    // Error parsing type: , name: displayDate
    // Error parsing type: , name: storyType
}

- (id)init;
@property(nonatomic, readonly) NSString *storyType;
@property(nonatomic, readonly) NSDate *displayDate;
@property(nonatomic, readonly) NSString *title;

@end
