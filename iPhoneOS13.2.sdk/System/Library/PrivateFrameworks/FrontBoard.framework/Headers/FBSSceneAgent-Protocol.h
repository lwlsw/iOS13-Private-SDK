//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class FBSSceneEvent;
@protocol FBSSceneHandle;

@protocol FBSSceneAgent 
- (void)scene:(id <FBSSceneHandle>)arg1 reviewEvent:(FBSSceneEvent *)arg2 withCompletion:(void (^)(void (^)(FBSSceneMessage *, NSError *)))arg3;
@end
