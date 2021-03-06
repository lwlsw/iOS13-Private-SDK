//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MusicLibrary/ML3MusicLibraryResourcesProviding-Protocol.h>

@class ML3MusicLibraryResourcesManagerContext, _ML3BaseMusicLibraryResourcesManager;

@interface ML3MusicLibraryResourcesManager : NSObject <NSSecureCoding, ML3MusicLibraryResourcesProviding>
{
    ML3MusicLibraryResourcesManagerContext *_context;
    _ML3BaseMusicLibraryResourcesManager *_implementation;
}

+ (BOOL)supportsSecureCoding;
+ (id)sharedManager;
@property(retain, nonatomic) _ML3BaseMusicLibraryResourcesManager *implementation; // @synthesize implementation=_implementation;
@property(retain, nonatomic) ML3MusicLibraryResourcesManagerContext *context; // @synthesize context=_context;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBaseResourcesManager:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)pathForBaseLocationPath:(long long)arg1;
- (id)pathForResourceFileOrFolder:(int)arg1 basePath:(id)arg2 relativeToBase:(BOOL)arg3 createParentFolderIfNecessary:(BOOL)arg4;
- (id)pathForResourceFileOrFolder:(int)arg1;
- (id)libraryContainerRelativePath:(id)arg1;
- (id)libraryContainerPathByAppendingPathComponent:(id)arg1;
- (id)libraryContainerPath;

@end

