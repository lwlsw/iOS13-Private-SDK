//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUIDocumentContextData.h>

@class NSString;

@interface VUIDocumentContextDataTVShow : VUIDocumentContextData
{
    NSString *_showID;
    NSString *_episodeID;
}

@property(readonly, copy, nonatomic) NSString *episodeID; // @synthesize episodeID=_episodeID;
@property(readonly, copy, nonatomic) NSString *showID; // @synthesize showID=_showID;
// - (void).cxx_destruct;
- (id)jsonData;
- (id)initWithShowID:(id)arg1 episodeID:(id)arg2;

@end

