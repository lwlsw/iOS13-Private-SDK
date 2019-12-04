//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DOCThumbnailDescriptor : NSObject
{
    _Bool _folded;
    _Bool _interactive;
    double _minimumSize;
    double _scale;
    unsigned long long _style;
    struct CGSize _size;
}

@property(readonly, nonatomic, getter=isInteractive) _Bool interactive; // @synthesize interactive=_interactive;
@property(readonly, nonatomic, getter=isFolded) _Bool folded; // @synthesize folded=_folded;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) double minimumSize; // @synthesize minimumSize=_minimumSize;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithScale:(double)arg1 style:(unsigned long long)arg2 isFolded:(_Bool)arg3 isInteractive:(_Bool)arg4;
- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2 style:(unsigned long long)arg3 isFolded:(_Bool)arg4 isInteractive:(_Bool)arg5;
- (id)initWithSize:(struct CGSize)arg1 minimumSize:(double)arg2 scale:(double)arg3 style:(unsigned long long)arg4 isFolded:(_Bool)arg5 isInteractive:(_Bool)arg6;

@end
