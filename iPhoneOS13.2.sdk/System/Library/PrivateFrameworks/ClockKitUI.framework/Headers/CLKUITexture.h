//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLKUIAtlas, MISSING_TYPE, NSString;

@interface CLKUITexture : NSObject
{
    CLKUIAtlas *_atlas;
    MISSING_TYPE *_rect;
}

+ 
+ (id)textureWithProviderDelegate:(id)arg1 uuid:(id)arg2;
@property(readonly, nonatomic) MISSING_TYPE *rect; // @synthesize rect=_rect;
@property(readonly, nonatomic) CLKUIAtlas *atlas; // @synthesize atlas=_atlas;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSUInteger status;
@property(readonly, nonatomic) NSString *uuid;
- (void)dealloc;

@end

