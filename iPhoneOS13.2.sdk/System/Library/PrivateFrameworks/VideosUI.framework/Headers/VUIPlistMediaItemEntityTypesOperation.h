//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUICore/VUIAsynchronousOperation.h>

@class NSError, VUIMediaItemEntityTypesFetchResponse, VUIPlistMediaDatabase;

__attribute__((visibility("hidden")))
@interface VUIPlistMediaItemEntityTypesOperation : VUIAsynchronousOperation
{
    VUIMediaItemEntityTypesFetchResponse *_response;
    NSError *_error;
    VUIPlistMediaDatabase *_database;
}

@property(retain, nonatomic) VUIPlistMediaDatabase *database; // @synthesize database=_database;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) VUIMediaItemEntityTypesFetchResponse *response; // @synthesize response=_response;
// - (void).cxx_destruct;
- (void)executionDidBegin;
- (id)initWithDatabase:(id)arg1;
- (id)init;

@end

