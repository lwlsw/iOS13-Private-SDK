//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NURenderJob.h>

@protocol NUVideoProperties;

@interface NUVideoPropertiesJob : NURenderJob
{
    id <NUVideoProperties> _videoProperties;
}

// - (void).cxx_destruct;
- (id)result;
- (BOOL)prepare:(out id )arg1;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsRenderStage;

@end

