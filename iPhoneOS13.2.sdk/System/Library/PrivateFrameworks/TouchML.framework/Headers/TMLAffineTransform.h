//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TouchML/TMLAffineTransformJSExports-Protocol.h>

@interface TMLAffineTransform : NSObject <TMLAffineTransformJSExports>
{
    CGAffineTransform _transform;
}

+ (void)initializeJSContext:(id)arg1;
@property(readonly, nonatomic) CGAffineTransform transform; // @synthesize transform=_transform;
@property(readonly, nonatomic) double ty;
@property(readonly, nonatomic) double tx;
@property(readonly, nonatomic) double d;
@property(readonly, nonatomic) double c;
@property(readonly, nonatomic) double b;
@property(readonly, nonatomic) double a;
- (id)CGAffineTransformValue;
- (id)initWithAffineTransform:(CGAffineTransform)arg1;

@end

