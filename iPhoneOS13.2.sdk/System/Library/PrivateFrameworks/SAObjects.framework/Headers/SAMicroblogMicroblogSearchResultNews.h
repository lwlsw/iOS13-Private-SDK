//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAMicroblogMicroblogSearchResultPost.h>

@class NSString, NSURL;

@interface SAMicroblogMicroblogSearchResultNews : SAMicroblogMicroblogSearchResultPost
{
}

+ (id)microblogSearchResultNewsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)microblogSearchResultNews;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *descriptionText;
@property(copy, nonatomic) NSURL *articleURL;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

